#include<stdio.h>
int main()
{
int perc;
scanf("%d",&perc);
if(perc<=100&&perc>=90)
{
printf("Grade A");
}
else if(perc<90&&perc>=70)
{
printf("Grade B");
}
else if(perc<70&&perc>=50)
{
printf("Grade C");
}
else if (perc<50&&perc>=0)
{
printf("Grade D");
}
else
{
printf("enter a valid number between 0 to 100");
}
}
