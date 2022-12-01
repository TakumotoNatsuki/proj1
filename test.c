#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	char buff[10];
	int fd,a,b,c;

	fd=open("test.txt",O_RDONLY);
	if(fd<0){
		perror("error1");
		exit(1);
	}
	a=read(fd,buff,10);
	if(a==-1){
		perror("error2");
		exit(1);
	}
	b=write(1,buff,10);
	if(b==-1){
		printf("%d\n",fd);
		perror("error3");
		exit(1);
	}
	c=close(fd);
	if(c==-1){
		perror("error4");
		exit(1);
	}	
}
