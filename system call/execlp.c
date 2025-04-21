#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{printf("Executing 'ls' using execlp:\n");
execlp("ls","ls",NULL);
printf("execlp failed");
perror("failed");
return 0;}
