#include <stdio.h>
int main()
{
  char name[10];
  int register_number;
  char department [15];
  scanf ("%[^\n]",name);
  printf("Enter your name:");
  scanf("%d\n",&register_number );
  printf("Enter your register number:");
  scanf("%[^\n]",department);
  printf("Enter your department:");
  return 0;
  }
