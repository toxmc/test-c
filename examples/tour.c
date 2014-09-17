#include<stdio.h>
#include<stdlib.h>
/*定义符号常量*/
#define INT_MAX 10000
#define n 12
/*---------------------------------------------------------------------*/
/*定义全局变量*/
int cost[n][n];/* 边的值*/
int shortest[n][n];/* 两点间的最短距离*/
int path[n][n];/* 经过的地点*/
/*---------------------------------------------------------------------*/
/*自定义函数原型说明*/
void introduce();
int shortestdistance();
void floyed();
void display(int i,int j);
/*---------------------------------------------------------------------*/
void main()
{/*主函数*/
int i,j;
char k;
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
cost[i][j]=INT_MAX;
cost[1][2]=cost[2][1]=339;
cost[1][3]=cost[3][1]=28;
cost[1][4]=cost[4][1]=69;
cost[1][5]=cost[5][1]=127;
cost[1][7]=cost[7][1]=342;
cost[1][10]=cost[10][1]=107;
cost[2][7]=cost[7][2]=283;
cost[3][6]=cost[6][3]=165;
cost[7][11]=cost[11][7]=218;
cost[8][12]=cost[12][8]=313;
cost[8][10]=cost[10][8]=90;
cost[12][9]=cost[9][12]=211;
cost[1][1]=cost[2][2]=cost[3][3]=cost[4][4]=cost[5][5]=0;
cost[6][6]=cost[7][7]=cost[8][8]=cost[9][9]=cost[10][10]=0;
while(1)
{
printf("-----------Welcome to the trunk highway system in Shaanxi Province!-----------\n");
printf("1.Location Information\n");
printf("2.The shortest path query\n");
printf("0.exit\n");
printf("locations:\n");
printf("1:Xi'an");
printf("2:AnKang");
printf("3:XianYang");
printf("4:WeiNan");
printf("5:ShangLuo");
printf("6:BaoJi\n");
printf("7:HanZhong");
printf("8:YanAn");
printf("9:YuLin");
printf("10:TongChuan");
printf("11:GuangYuan");
printf("12:SuiDe\n");
printf("------------------------------------------------------------------------------\n");
printf("Please select the services you need:");
scanf("\n%c",&k);
switch(k)
{
case '1':
printf("Into the place of information:\n");
introduce();
break;
case '2':
printf("Inquiries into the shortest path:");
shortestdistance();
break;
case '0':
exit(0);
default:
printf("Error！\nPlease input1,2or0.\n");
break;
}
}
}/*main*/
/*---------------------------------------------------------------------*/
void introduce()
{/*地点介绍*/
int a;
printf("Inquiries as to which site you would like more information?\nPlease enter the location code:");
scanf("%d",&a);
printf("\n");
switch(a)
{
case 1:
printf("1:Xi'an\n\n Shaanxi Province's political center.\n\n");break;
case 2:
printf("2:AnKang \n\n Is located in Xi'an, Wuhan, Chongqing Economic Area, the three geometric center.");break;
case 3:
printf("3:XianYang\n\n International Airport.\n\n");break;
case 4:
printf("4:WeiNan\n\n Is next to the Huashan.\n\n");break;
case 5:
printf("5:ShangLuo\n\n There are a result of mountain, named after Waterinfo.\n\n");break;
case 6:
printf("6:BaoJi\n\n Another Gu Cheng, China is the ancestor of Yan Emperor's hometown.\n\n");break;
case 7:
printf("7:HanZhong\n\n is a beautiful and richly endowed in the central Hanzhong Basi.n\n\n");break;
case 8:
printf("8:YanAn\n\n The old revolutionary base areas.\n\n");break;
case 9:
printf("9: YuLin\n\n Shaanxi Province is now the focus of development.\n\n"); break;
case 10:
printf("10: TongChuan\n\n Leading to the tomb and the humanities Chuzu revolutionary Yan'an of the Holy Land must pass through to.\n\n");break;
case 11:
printf("11:GuangYuan\n\n Earthquake hit\n\n\n");break;
case 12:
printf("12: SuiDe\n\n My hometown！\n\n");break;
default:
printf("Error！Please input1->10！\n\n"); break;
}
getchar();
}/*introduce*/
 
/*---------------------------------------------------------------------*/
int shortestdistance()
{/*要查找的两地点的最短距离*/
int i,j;
printf("Please input two location code (1->12 devided by ','):");
scanf("%d,%d",&i,&j);
if(i>n||i<=0||j>n||j<0)
{
printf("Error!\n\n");
printf(" Please input two location code (1->12 devided by ','):\n");
scanf("%d,%d",&i,&j);
}
else
{
floyed();
display(i,j);
}
return 1;
}/*shortestdistance*/
 
/*---------------------------------------------------------------------*/
void floyed()
{/*用floyed算法求两个地点的最短路径*/
int i,j,k;
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
shortest[i][j]=cost[i][j];
path[i][j]=0;
}
for(k=1;k<=n;k++)
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
if(shortest[i][j]>(shortest[i][k]+shortest[k][j]))
{/*用path[][]记录从i到j的最短路径上点j的前驱地点的序号*/
shortest[i][j]=shortest[i][k]+shortest[k][j];
path[i][j]=k;
path[j][i]=k;
}
}/*floyed*/
 
/*---------------------------------------------------------------------*/
void display(int i,int j)
{/* 打印两个地点的路径及最短距离 */
int a,b;
a=i;
b=j;
printf("Which is theshortest path between two locations do you required:\n\n");
if(shortest[i][j]!=INT_MAX)
{
if(i<j)
{
printf("%d",b);
while(path[i][j]!=0)
{/* 把i到j的路径上所有经过的地点按逆序打印出来*/
printf("<-%d",path[i][j]);
if(i<j)
j=path[i][j];
else
i=path[j][i];
}
printf("<-%d",a);
printf("\n\n");
printf("(%d->%d)The shorest path is:%dkm\n\n",a,b,shortest[a][b]);
}
else
{
printf("%d",a);
while(path[i][j]!=0)
{/* 把i到j的路径上所有经过的地点按顺序打印出来*/
printf("->%d",path[i][j]);
if(i<j)
j=path[i][j];
else
i=path[j][i];
}
printf("->%d",b);
printf("\n\n");
printf("(%d->%d)The shorest path is:%dkm\n\n",a,b,shortest[a][b]);
}
}
else
printf("Error！This path is not exsist！\n\n");
printf("\n");
getchar();
}/*display*/
