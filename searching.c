#include<stdio.h>
int main()
{
int number,s1,s2;
scanf("%d",&number);
int a[10],i,j;
for(i=0;i<number;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&s1);
scanf("%d",&s2);
for(j=0;j<number;j++)
{
if(s1==a[j])
printf("%d",j);
if(s2==a[j])
printf("%d\n",j);
}
return 0;
}
