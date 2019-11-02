#include"apue.h"
#include<dirent.h>
int main(int argc, char *argv[]){
	DIR *dp;//目录结构指针
	struct dirent *dirp;
	printf("%d\n", argc);
	if(argc != 2)
		err_quit("usage: ls directory_name");
		
	if((dp = opendir(argv[1])) == NULL)
		err_sys("can't open %s", argv[1]);
	while((dirp = readdir(dp)) != NULL)
		printf("%s\n", dirp->d_name);
	closedir(dp);
	exit(0);
}


