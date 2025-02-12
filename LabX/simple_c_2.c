#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {

  int fd[2];
  pid_t pid;
  char message[] = "Parent's hello!";
  char buffer[100];
  
  if(pipe(fd) == -1) {
    perror("pipe creation failed");
    exit(1);
  }
  
  pid = fork(); //creation of child process
  
  if(pid<0) {
    perror("fork failed");
    exit(1);
  }
  
  if(pid>0) {
  
  close(fd[0]); //closing unused read end
  
  printf("Parent process sending mesage...\n");
  write(fd[1], message, strlen(message) + 1);
  
  close(fd[1]); //writing stopped
  
  }
  
  else {
  
  close(fd[1]); //closing unused write end
  
  printf("Child process reading message...\n");
  read(fd[0], buffer, sizeof(buffer));
  printf("Child process received message: %s\n", buffer);
  
  close(fd[0]);
  
  }
  
  return 0;
  
  

}