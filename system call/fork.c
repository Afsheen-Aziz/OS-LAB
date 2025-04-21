#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{pid_t pid;
pid=fork();
if (pid==-1)
{printf("Fork failed");
}
if (pid==0)
{printf("This is child process %d\n",getpid());
}
else
{printf("This is parent process %d\n",getppid());
}
return 0;
}
