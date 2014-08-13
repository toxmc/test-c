#include<stdio.h>
struct stu{
	int num;
	char *name;
	char sex;
	float score;
}boy[5]={
	{1,"a",'f',12},
	{2,"b",'f',13},
	{2,"c",'m',14},
	{4,"d",'m',15}		
};
main(){
	struct stu *ps;
	void listdata(struct stu *ps);
	printf("Num\tName\tSex\tScore\t\n");
	for(ps=boy;ps<boy+4;ps++){
		listdata(ps);
	}
}
void listdata(struct stu *ps){
	 printf("%d\t%s\t%c\t%02f\n",ps->num,ps->name,ps->sex,ps->score);
}
