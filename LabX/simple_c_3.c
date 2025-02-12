#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void signal_handler(int signum) {
    printf("Received signal: %d\n", signum);
}

int main() {
    pid_t pid;
    
    // set up signal handler before forking
    signal(SIGUSR1, signal_handler);
    
    pid = fork();
    
    if (pid > 0) {  // Parent
        sleep(1);  // Wait a bit
        printf("killing the process");
        kill(pid, SIGUSR1);  // Send signal to child
    }
    else if (pid == 0) {  // Child
        while(1) {  // Wait for signal
            pause();
        }
    }
}