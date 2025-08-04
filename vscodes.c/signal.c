#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

void handle_signal(int sig){
    printf("\n The signal has been received...\n");
    exit(0);
}

int main(){
    signal(SIGINT, handle_signal); // Register signal handler
    while(1){
        printf("running processes.....press CTRL+C to stop or terminate \n");
        sleep(1); // Prevents high CPU usage
    }
    return 0;
}