#  include <stdio.h>
#  include <conio.h>
main( )
{
int n,f;
printf(“enter  a number:”)
scanf(“%d”,&n);
f= fact(n);
printf(“factorial value is %d”,f);
getch();
} 
int fact(int n)
{
 int i, fa=1;
for(i=n;i>=1;i--)
fa=fa*i;
return fa;
}
