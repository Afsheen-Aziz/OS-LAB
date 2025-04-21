#include <stdio.h>
#include <unistd.h>
int main()
{printf("Executing 'ps' using execl:\n");
execl("/bin/ps","ps",NULL);
printf("execl failed");
return 0;
}
