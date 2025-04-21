#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main(void)
{int source_fd=open("a.txt",O_RDONLY);
if (source_fd==-1)
{printf("Error opening source file");
}
int dest_fd=open("dest.txt",O_WRONLY|O_CREAT|O_TRUNC,0644);
if (dest_fd==-1)
{printf("Error opening dest file");
close(source_fd);
}
char buffer[100];
ssize_t bytesRead;
while ((bytesRead=read(source_fd,buffer,sizeof(buffer)))>0)
{write(dest_fd,buffer,bytesRead);
}
if (bytesRead==-1)
{perror("Error reading from source file");
}
close(dest_fd);
close(source_fd);
return 0;
}
