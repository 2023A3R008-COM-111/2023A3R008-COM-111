#include<stdio.h>
int main ()

 {
     int x, y, z, t;
     float ratio;
    printf ("Enter the values of integers");
     scanf("%d %d %d %d", &x,&y,&z,&t);

     if (z-t!=0)

     {
         ratio =(float)(x+y)/(float)(z-t);
         printf("ratio=%f\n",ratio);
     }
     else
     {
         printf("Operation is invalid");
     }
     return 0 ;
 }
