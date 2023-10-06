#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include<unistd.h>
#include <semaphore.h>

#define BUFFER_SIZE 10

sem_t empty, full;
int buffer[BUFFER_SIZE];
int in = 0, out = 0;

void *producer(void *arg) {
    int item;
    while(1) {
        item = rand() % 1000; 
        sem_wait(&empty); 
        buffer[in] = item; 
        printf("Produced item %d\n", item);
        in = (in + 1) % BUFFER_SIZE; 
        sem_post(&full); 
        sleep(rand() % 3); 
    }
}

void *consumer(void *arg) {
    int item;
    while(1) {
        sem_wait(&full); 
        item = buffer[out]; 
        printf("Consumed item %d\n", item);
        out = (out + 1) % BUFFER_SIZE; 
        sem_post(&empty);
        sleep(rand() % 3); 
    }
}

int main() {
    pthread_t producer_thread, consumer_thread;
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);
    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);
    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);
    sem_destroy(&empty);
    sem_destroy(&full);
    return 0;
}
