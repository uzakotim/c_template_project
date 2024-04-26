#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *hello(void *arg) {
    while(1){
        printf("Hello, World!\n");
        usleep(500000);
    }
    return NULL;
}

int main(int argc, char *argv[]) {

    pthread_t thread;
    pthread_create(&thread, NULL, hello, NULL);
    pthread_join(thread, NULL);
    return 0;
}