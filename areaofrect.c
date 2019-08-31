/*program to find area and perimeter of rectangle*/
#include<stdio.h>
main()
{
int l,b;
printf("enter leangth of rectangle");
scanf("%d",&l);
printf("enter breath of rectangle");
scanf("%d",&b);
printf("area is%d\nperimeter is%d",l*b,2 * (l + b));
getch();
}
