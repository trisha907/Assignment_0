#include<stdio.h>
void main() {
	int hour ;
	int reMain;
	int min=70;
	printf("Given minutes %d\n",min);
	
	hour = min/60;
	reMain=min%60;
	printf("Converted Hour %d and reMain %d minutes",hour,reMain);
}