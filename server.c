//
// Created by yirat on 27.7.2020.
//
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

SIGRTMAX
int counter = 0;

void sigint_handler(int sig){
    counter++;
}

void sigusr1_handler(int sig){
    printf("The server got %d signals\n" , counter);
}

int main(){
    signal(SIGINT , sigint_handler);
    signal(SIGUSR1 , sigusr1_handler);
    printf("The server pid is: %d\n" , getpid());
    getchar();
    return 0;
}