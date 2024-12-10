//主函数
//若要使用其他定义的.c文件，必须提前将其存在#include "其他.h"
#include <stdio.h>
#include <stdlib.h>
#include "add.h"
#include "sub.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a=0;
	int b=0;
	scanf("%d %d",&a,&b);
	int sum=Add(a,b);
	printf("%d\n",sum);
	int ret=sub(a,b);
	printf("%d\n",ret);

	return 0;
}