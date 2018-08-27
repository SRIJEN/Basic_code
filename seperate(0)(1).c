/*
separate number
ip:a[]={1,0,0,1}
op:a[]={0,0,1,1}
*/
#include<stdio.h>
int main()
{
int number;
scanf("%d",&number);
int a[10],i,j,k;
for(i=0;i<number;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<number;j++)
{
if(a[j]==0)
printf("0");
}
for(k=0;k<number;k++)
{
if(a[k]==1)
printf("1");
}
return 0;
}
