#include<stdio.h>
int main()
{
 int mark;
 scanf("%d",&mark);
 if (mark<=100 && mark>=80)
 {
 printf("gradeA");
 }
 elseif (mark<80 && mark>=50)
 {
 printf("gradeB");
 }
 else
 {
 printf("fail");
 }
 printf("%d\n",mark);
 return 0;
 }
