#include<stdio.h>

int mul(int,int);

int main(int argc,char* argv[])
{
	if(argc != 3)
	{
		printf("error args\n");
		return -1;
	}
	int a,b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("the a*b is %d\n",mul(a,b)*2);
	return 0;
}
