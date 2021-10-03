#include<stdio.h>
#include<conio.h>
int main()
{
    int ch,x,y,z;
    printf("1. multiplication\n2. division\n3. addition\n4. substraction\n5. reverse\n6. odd-even\n");
    printf("enter your choice");
    scanf("%d", &ch);
    switch(ch)
    {
              case 1:
                   printf("enter any two numbers: ");
                   scanf("%d%d", &x,&y);
                   z=x*y;
                   printf("product is %d", z);
                   break;
                   case 2:
                   printf("enter any two numbers: ");
                   scanf("%d%d", &x,&y);
                   z=x/y;
                   printf("quotient is %d", z);
                   break;
                   case 3:
                   printf("enter any two numbers: ");
                   scanf("%d%d", &x,&y);
                   z=x+y;
                   printf("sum is %d", z);
                   break;
                   case 4:
                   printf("enter any two numbers: ");
                   scanf("%d%d", &x,&y);
                   z=x-y;
                   printf("difference is %d", z);
                   break;
                   case 5:
                        y=0;
                      printf("enter any number: "); 
                      scanf("%d", &x);
                      while(x!=0)
                      {
                                 z=x%10;
                                 y=z+y*10;
                                 x=x/10;
                                 }
                                 printf("reversed number is %d", y); 
                                 break;
                                 case 6:
                                      printf("enter any number: ");
                                      scanf("%d", &x);
                                      if(x%2==0)
                                      {
                                                printf("%d is even number", x);
                                                } else
                                                {
                                                      printf("%d is odd number",x);
                                                      }
                                                      break;
                   default:
                           printf("wrong choice");
                           }
                           getch();
                           return 0;
                           }
