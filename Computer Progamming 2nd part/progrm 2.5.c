#include <stdio.h>
#include <conio.h>
void main ()
{
     int i,sum=0,n;
     printf("Enter value for n =");
     scanf("%d",&n);

for(i=1;i<=n;i=1+2) {
     sum=sum+(i*i); }
printf("\n\tSum of odd square numbers from 1 to %d is = %d",n,sum);
     getch() ;
}
