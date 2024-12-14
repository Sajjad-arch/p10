
//Write a program in C that takes three inputs a, b, and c from user and prints them in ascending order.




#include <stdio.h>
int main(void)


{
      int a,b,c;

      printf("Enter the number of a,b,c: ");
       scanf("%d %d %d", &a,&b,&c);
       if (a>b && a>c)
       {


        printf("%d", a);

         if (b>c)
         {


            printf("%d %d\n", b, c);
         }

          else
         {
             printf("%d %d\n", c, a);
         }
       }
       else  if (b>a && b>c)
       {


        printf("%d", b);

        if (a>c)
         {


            printf("%d %d\n", a, c);
         }

          else
         {
             printf("%d %d\n", c, a);
         }
       }
       else if
       {


        printf("%d", c);


        if (a>b)
         {


            printf("%d %d\n", a, b);
         }

          else
         {
             printf("%d %d\n", b, a);
         }
       }

















    return 0;





}
