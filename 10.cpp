#include<stdio.h>
int main()
{int a,b,c,temp,max;
printf("������3������:");
 scanf("%d,%d,%d",&a,&b,&c);
 temp=(a>b)? a:b;
 max=(temp>c)? temp:c;
 printf("3���������������%d\n",max);
 return 0;
}