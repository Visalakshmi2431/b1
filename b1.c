#include<stdio.h>
int main()
{
int a;
printf("Enter value of a:");
scanf("%d",&a);
if(a>0)
{
printf("\nnumber is positive ",a);
}
else if(a<0)
{
printf("\nnumber is negative ",a);
}
else
{
printf("\n number is zero ",a);
}
getch();
return 0;
}

