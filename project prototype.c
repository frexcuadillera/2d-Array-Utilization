#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#include <stdlib.h>


int main(){
	int size, operation_number;

	int array[10][10] = {
		{36,89,12,16,75,55,60,67,45,57},
		{44,18,99,30,62,43,21,11,19,72},
		{46,97,14,31,77,10,13,22,91,88},
		{24,28,69,70,18,17,15,58,73,90},
		{51,92,61,52,98,32,47,74,39,23},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};
	
	for(int row = 0; row < 5; row++){
		for(int column = 0; column < 10; column++){
			printf("%d\t",array[row][column]);
		}
		printf("\n");
	}
	
	printf("\n1. Searching\n");
	printf("2. Sorting\n");
	printf("3. Min/Max Values\n");
	printf("4. Insert/Deletion of values\n");
	printf("5. Continue or Exit\n\n");
	printf("Enter the number of operation that you wish to perform: ");
	scanf("%d",&operation_number);
	
	switch(operation_number){
		case 1:
			printf("What value are you searching?: ");
			
			for(int row = 0; row < 5; row++){
				for(int column = 0; column < 10; column++){
					printf("Found at row")
				}
			}
			break;
		case 2:
			sort();
			break;
		case 3:
			minmax(int array);
			break;
		case 4:
			insert_delete();
			break;
					
	}
}

void clrscr()
{
    system("@cls||clear");
}
