#include<stdio.h>
void main() {
	int maths=70;
	int physics=80;
	int chemistry=50;
	int biology=35;
	int geography=90;
	float total_marks;
	float percentage;
	
	total_marks=maths+physics+chemistry+biology+geography;
	
	printf("Total marks: %.2f\n",total_marks);
	
	percentage=total_marks/500*100;
	
	printf("Percentage: %.2f",percentage);

}