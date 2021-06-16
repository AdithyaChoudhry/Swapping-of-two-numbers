#include<stdio.h>
int main()
{
	int a,b; //declarinng that giving numbers are integers
	printf("Enter the value of a :",a);
	scanf("%d",&a);//getting input of value a
	printf("Enter the value of b :",b);
	scanf("%d",&b);//getting input of value b
	a=a+b;//using mathematical logic to get output easily
	b=a-b;
	a=a-b;
	printf("after swap the value of a:%d \n",a);
	printf("after swap the value of b:%d",b);
	return 0;
}
