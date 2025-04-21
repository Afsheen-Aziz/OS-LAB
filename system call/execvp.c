#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{char *args []={"ls","-l",NULL};
printf("Executing 'ls' using execvp:\n");
execvp("ls",args);
perror("failed");
return 0;}
