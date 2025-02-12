#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
 
 FILE *file = fopen("file.txt", "a");  // "a" for append mode
 
 pid_t pid;
 
 pid = fork();
 
 if(pid>0) { //Parent
  

  fprintf(file, "Parent's PID: %d\n", getpid());
 }
 
 else if(pid ==0) { //Child
  fprintf(file, "Child's PID: %d\n", getpid());
 }
 
fclose(file);
return 0;
}
  