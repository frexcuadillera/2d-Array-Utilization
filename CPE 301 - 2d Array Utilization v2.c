#include <stdio.h>
#include <stdlib.h>

int row, column;

void printArray(int array[10][10], int maxIndex){

	for(row = 0; row <= maxIndex/10; row++){
		for(column = 0; column <= 9 && column + (row*10) <= maxIndex; column++){
			printf("%d\t",array[row][column]);
		}
		printf("\n");
	}
}

void search(int array[10][10], int maxIndex){
	int valueToSearch, foundValue = 0;
	printf("\nWhat value are you searching?: ");
	scanf("%d",&valueToSearch);
	
	for(row = 0; row <= maxIndex/10; row++){
		for(column = 0; column <= 9 && column + (row*10) <= maxIndex; column++){
			if(valueToSearch == array[row][column]){
				foundValue = 1;
				printf("Found at row %d at column %d\n", (row+1), (column+1));
			}
		}
	}
	
	if(foundValue == 0){
		printf("Value not found.\n");
	}	
}

void ascendSort(int array[10][10], int maxIndex){
	printf("ascendsort");	
}

void descendSort(int array[10][10], int maxIndex){
}

void sort(int array[10][10], int maxIndex){
	int sortOrder;
	printf("Sort array in what order? 1 for ascending and 2 for descending: ");
	scanf("%d",&sortOrder);
	
	switch(sortOrder){
		case 1:
			ascendSort(array, maxIndex);
			break;
		case 2:
			descendSort(array, maxIndex);
			break;
		default:
			break;
	}
}

void minimumMaximum(int array[10][10], int maxIndex){
	int maxRow, maxColumn, minRow, minColumn;
	int min = array[0][0];
	int max = array[0][0];

	for(row = 0; row <= maxIndex/10; row++){
		for(column = 0; column <= 9 && column + (row*10) <= maxIndex; column++){
			if(max < array[row][column]){
				max = array[row][column];
			}
			if(min > array[row][column]){
				min = array[row][column];
			}
		}
	}

	printf("The maximum value of the array is %d and found in the:",max);
	for(row = 0; row <= maxIndex/10; row++){
		for(column = 0; column <= 9 && column + (row*10) <= maxIndex; column++){
			if(max == array[row][column]){
				printf(" row %d column %d |", (row+1), (column+1));
			}
		}
	}

	printf("\nThe minimum value of the array is %d and found in the:",min);
	for(row = 0; row <= maxIndex/10; row++){
		for(column = 0; column <= 9 && column + (row*10) <= maxIndex; column++){
			if(min == array[row][column]){
				printf(" row %d column %d |", (row+1), (column+1));
			}
		}
	}
	printf("\n");
}

void insertDelete(int array[10][10], int maxIndex){
	int insertOrDeleteSelection, insertRow, insertColumn, valueToInsert;
	printf("Insert or Delete values? 1 for Insert and 2 for delete: ");
	scanf("%d",&insertOrDeleteSelection);
}

void main(){
	int maxIndex = 49;
	int operationNumber;
	int continuation = 1;
	
	int array[10][10] = {
		{36,89,12,16,75,55,60,67,45,57},
		{44,18,99,30,62,43,21,11,19,72},
		{46,97,14,31,77,10,13,22,91,88},
		{24,28,69,70,56,17,15,58,73,90},
		{51,92,61,52,98,32,47,74,39,23},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};
	
	menu:
	printArray(array, maxIndex);
	
	printf("\n1. Searching\n");
	printf("2. Sorting\n");
	printf("3. Min/Max Values\n");
	printf("4. Insert/Deletion of values\n");
	printf("5. Continue or Exit.\n\n");
	printf("Enter the number of operation that you wish to perform: ");
	scanf("%d",&operationNumber);
	
	switch(operationNumber){
		case 1:
			search(array, maxIndex);
			break;
		case 2:
			sort(array, maxIndex);
			break;
		case 3:
			minimumMaximum(array, maxIndex);
			break;
		case 4:
			insertDelete(array, maxIndex);
			printArray(array, maxIndex);
			break;
		default:
			printf("invalid ");
			break;							
	}
	
	printf("\nContinue or Exit? Enter 1 to continue and 2 to exit: ");
	scanf("%d",&continuation);
	
	if(continuation == 1){
		system("@cls||clear");
		goto menu;
	}
}
