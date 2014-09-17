#include<stdio.h>

int main()
{
	int *num = NULL;
	int *x,y[] = {1,2,3}, z=100;

	x = &z;
	printf("*x=%d,x[0]=%d\n",*x,x[0]);

	x = y;
	printf("*x=%d,x[0]=%d,x[1]=%d,x[2]=%d\n",*x,x[0],x[1],x[2]);
	printf("*x=%d,*(x+1)=%d,*(x+2)=%d\n",*x,*(x+1),*(x+2));
	
	x = y + 2;
	printf("*x=%d,x[-1]=%d,x[-2]=%d\n",*x,x[-1],x[-2]);
	printf("ok\n");
}
