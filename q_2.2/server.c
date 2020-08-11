//
// Created by yirat on 27.7.2020.
//
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int counter = 0;

void sigint_handler(int sig){
    counter++;
}

void sigusr1_handler(int sig){
    printf("The server got %d signals\n" , counter);
}

int main(){
    if(signal(SIGINT , sigint_handler)==SIG_ERR){
        printf("Signal handler failed");
        return -1;
    }
    if(signal(SIGUSR1 , sigusr1_handler)==SIG_ERR){
        printf("Signal handler failed");
        return -1;
    }
    printf("The server pid is: %d\n" , getpid());
    getchar();
    return 0;
}