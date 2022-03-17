//file name : five.c
#include "stdio.h"

main(){
	double money; //declare variable
	int num_person;
	double pay;
	
	printf("------------------\n");
	printf("  American Share\n");
	printf("------------------\n");
	printf("Input money : ");
	scanf( "%lf" , &money );
	printf("Input person : ");
	scanf( "%d" , &num_person );
	printf("------------------\n");
	pay = money / num_person;
	printf("Pay for one person %.2lf Bath\n", pay);
	printf("------------------\n");
	
	getch();
}
