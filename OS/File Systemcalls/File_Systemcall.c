#include<stdio.h>
#include <string.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
    int fd[2];
    char buf1[12]="Hello World";
    char buf2[12];
    //creat("file1.txt",777);
    fd[0]=open("file1.txt",O_RDWR | O_CREAT,0777);
    fd[1]=open("file1.txt",O_RDWR);
    write(fd[0],buf1,strlen(buf1));
    write(fd[1],buf2,read(fd[1],buf2,12));
    close(fd[0]);
    close(fd[1]);
   return 0;
 }
