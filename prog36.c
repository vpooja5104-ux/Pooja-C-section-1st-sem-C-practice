#include<stdio.h>
int main()
{ 
int a,b,c,rent=100,sp=0,cp=0,x=0,profit=0,perc=0;
scanf("%d%d%d",&a,&b,&c);
sp=a*b;
x=b-c;
cp=c*a;
profit=sp-cp;
perc=cp-rent;
printf("%d",perc);
return 0;
}
