#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{ 
int pid, pid1, pid2, pid3;
pid = fork();
if (pid == 0) {
sleep(1);
printf("child1 --> pid= %d and ppid = %d \n", getpid(), getppid());

}

else {
pid1 = fork();
if (pid1 == 0) {
sleep(2);
printf("child2 --> pid = %d and ppid = %d \n", getpid(), getppid());
}
else {
pid2 = fork();
if (pid2 == 0) {
sleep(3);
printf("child3 --> pid = %d and ppid = %d \n", getpid(), getppid());
}
else {
pid3 = fork();
if (pid3 == 0) {
sleep(4);
printf("child4 --> pid = %d and ppid = %d \n", getpid(), getppid());

printf("Job is done \n");
}
}
}
}
return 0;
}
