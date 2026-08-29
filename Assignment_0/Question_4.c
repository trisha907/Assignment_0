#include<stdio.h>
void main() {
	int a=10;
	int b=20;
	int temp;
	
	printf("Value of a is %d and b is %d\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf(" %d and %d ",a ,b);
}