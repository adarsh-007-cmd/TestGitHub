#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

void handle_signal(int sig){
    print ("The signal has been received...");
    exit(0);
}
int main(){
    while(1){
        printf("running processes.....press CTRL+C to stop or terminate \n");
    }
    return 0;
}