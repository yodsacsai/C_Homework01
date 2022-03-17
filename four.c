//file name : four.c
#include "stdio.h"

showA(){
	printf("AAA\n");
}
showB(){
	printf("BBB\n");
}

main(){
	showB();
	showA();
	printf("CCC\n");
	showA();
	showA();
	showB();
	getch();
}
