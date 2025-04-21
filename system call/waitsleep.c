#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{pid_t pid;
pid=fork();
if (pid==-1)
{printf("Fork failed");
}
if (pid==0)
{printf("This is child process %d\n",getpid());
sleep(4);
printf("Child woke up\n");
}
else
{printf("This is parent process %d\n",getppid());
wait(NULL);
printf("Parent woke up");
}
return 0;
}
