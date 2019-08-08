#include<stdio.h>
int main()
{
unsigned long long int start,end,flag=0,i,j;
scanf("%llu %llu",&start,&end);
for(i=start+1;i<end;i++)
{
for(j=1;j<=i/2;j++)
{
if(i%j==0)
{
flag=1;
break;

}
}
if(flag==0)
{
printf("%llu ",i);
}
}
}
