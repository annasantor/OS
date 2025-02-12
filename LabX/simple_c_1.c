#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
fork();
printf("process_id = %d\n", getpid());

fork();
printf("process_id = %d\n", getpid());

fork();
printf("process_id = %d\n", getpid());

return 0;
}