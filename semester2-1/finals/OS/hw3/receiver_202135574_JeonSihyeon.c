#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
//202135574 Jeon Sihyeon
int main(){
	char ch, tch;
	int terminate = 0;
	int file_desc_son;
	int file_desc_dau;
	int pid1, pid2;

	char *fifo_son = "/tmp/hw3_fifo_son";
	char *fifo_dau = "/tmp/hw3_fifo_dau";
	mkfifo(fifo_son, 0666);
	mkfifo(fifo_dau, 0666);
	
	pid1 = fork();
	if(pid1==0){
		printf("process son created\n");
		file_desc_son = open(fifo_son, O_RDONLY);
		char buf[10000];
		for (read(file_desc_son, buf, sizeof(buf));buf[0]!='0';read(file_desc_son, buf, sizeof(buf))){
			printf("Son receivers : %s\n", buf);
		}
	}
	else if (pid1>0){
		pid2 = fork();
		if (pid2 == 0){
			printf("process daughter created\n");
			file_desc_dau = open(fifo_dau, O_RDONLY);
			char buf[10000];
			for (read(file_desc_dau, buf, sizeof(buf));buf[0]!='0';read(file_desc_dau, buf, sizeof(buf))){
				printf("Daughter receivers : %s\n", buf);
			}
			
		}
		else if(pid2>0){
			wait(NULL);
		}
		else{
			printf("failed to fork\n");
			return -1;
		}
	}
	else{
		printf("failed to fork\n");
		return -1;
	}
	close(file_desc_son);
	close(file_desc_dau);


	unlink(fifo_son);
	unlink(fifo_dau);

	return 1;
}
