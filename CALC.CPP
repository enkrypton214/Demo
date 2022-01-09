#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y;
float sum, dif, pro, quo;
printf("Enter the first no. ");
scanf("%d",&x);
printf("Enter the second no. ");
scanf("%d",&y);
sum=float(x)+float(y);
dif=float(x)-float(y);
pro=float(x)*float(y);
quo=float(x)/float(y);
printf("\nSum= %f \nDifference = %f \nProduct=%f \nQuotient=%f",sum,dif,pro,quo);
getch();
}