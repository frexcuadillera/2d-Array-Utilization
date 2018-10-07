/*
CPE301 Project: 2d Array Utilization
Group 2
Last update: 12/1/2017

notes:
insertion / deletion not yet done
*/

#include <stdio.h>
#include <stdlib.h>


void printArray(int array[10][10]){
	int row, column;
	printf("Current Array:\n\n");

	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			printf("%d\t",array[row][column]);
		}
		printf("\n");
	}
}

void search(int array[10][10]){
	int row, column, valueToSearch, foundValue = 0, printColumn = 1;
	
	printf("\nWhat value are you searching?: ");

	scanf("%d", &valueToSearch);
	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			if(valueToSearch == array[row][column]){
				foundValue++;
			}
		}
	}
	
	if(foundValue > 0){
		printf("Found at location:\n\n");		
	}
	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			if(valueToSearch == array[row][column]){				
				if(printColumn == 5){
					printf("\n");
					printColumn = 1;
				}
				printf("row %d column %d\t\t", (row+1), (column+1));
				printColumn++;
			}
		}
	}
	printf("\n");
	
	if(foundValue == 0){
		printf("Value not found.\n");
	}	
}

void ascendSort(int array[10][10]){
	int row, column, index, arraySort[100], currentValueIndex, currentValueTemporaryHolder;
	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			arraySort[(row*10) + column] = array[row][column];
		}
	}
	
	for(index = 1; index < 100; index++){
		currentValueIndex = index;
		
		while(currentValueIndex > 0 && arraySort[currentValueIndex] < arraySort[currentValueIndex - 1]){
			currentValueTemporaryHolder = arraySort[currentValueIndex];
			arraySort[currentValueIndex] = arraySort[currentValueIndex - 1];
			arraySort[currentValueIndex - 1] = currentValueTemporaryHolder;
			currentValueIndex--;
		}
	}
	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			array[row][column] = arraySort[(row*10) + column];
		}
	}	
}

void descendSort(int array[10][10]){
	int row, column, index, arraySort[100], currentValueIndex, currentValueTemporaryHolder;
	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			arraySort[(row*10) + column] = array[row][column];
		}
	}
	
	for(index = 1; index < 100; index++){
		currentValueIndex = index;
		
		while(currentValueIndex > 0 && arraySort[currentValueIndex] > arraySort[currentValueIndex - 1]){
			currentValueTemporaryHolder = arraySort[currentValueIndex];
			arraySort[currentValueIndex] = arraySort[currentValueIndex - 1];
			arraySort[currentValueIndex - 1] = currentValueTemporaryHolder;
			currentValueIndex--;
		}
	}
	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			array[row][column] = arraySort[(row*10) + column];
		}
	}
}

void sort(int array[10][10]){
	int sortOrder;
	
	printf("Sort array in what order? 1 for ascending and 2 for descending: ");
	scanf("%d",&sortOrder);
	
	switch(sortOrder){
		case 1:
			ascendSort(array);
			break;
		case 2:
			descendSort(array);
			break;
		default:
			printf("Invalid Input");
			break;
	}
}

void minimumMaximum(int array[10][10]){
	int row, column, maxRow, maxColumn, minRow, minColumn, printColumn = 1;
	int min = array[0][0];
	int max = array[0][0];

	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			if(max < array[row][column]){
				max = array[row][column];
			}
			if(min > array[row][column]){
				min = array[row][column];
			}
		}
	}

	printf("\nThe maximum value of the array is %d and found in the:\n\n",max);	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			if(max == array[row][column]){
				if(printColumn == 5){
					printf("\n");
					printColumn = 1;
				}
				printf("row %d column %d\t\t", (row+1), (column+1));
				printColumn++;
			}
		}
	}
	
	printColumn = 1;
	
	printf("\n\nThe minimum value of the array is %d and found in the:\n\n",min);	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			if(min == array[row][column]){
				if(printColumn == 5){
					printf("\n");
					printColumn = 1;
				}
				printf("row %d column %d\t\t", (row+1), (column+1));
				printColumn++;
			}
		}
	}
	
	printf("\n");
}

int insertValueAlgorithm(int array[10][10], int valueToInsert, int valueToInsertLocation){
	int row , column, insertIndex, arrayInsert[100];
	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			arrayInsert[(row*10) + column] = array[row][column];
		}
	}
	
	if(arrayInsert[99] == 0){
		for(insertIndex = 99; insertIndex >= valueToInsertLocation; insertIndex--){
			arrayInsert[insertIndex + 1] = arrayInsert[insertIndex];		
		}
	
		arrayInsert[valueToInsertLocation] = valueToInsert;
	}
	
	for(row = 0; row < 10; row++){
		for(column = 0; column < 10; column++){
			array[row][column] == arrayInsert[(row*10) + column];
		}
	}	
}

void insertValue(int array[10][10]){
	int row, column, insertRow, insertColumn, valueToInsertLocation, valueToInsert;
	
	printf("\nLocation where you wish to insert:\n");
	printf("row: ");
	scanf("%d", &insertRow);
	printf("column: ");
	scanf("%d", &insertColumn);
	
	valueToInsertLocation = ((insertRow - 1) * 10) + insertColumn - 1;
	
	if((insertRow*10) + insertColumn > 100 || (insertRow*10) + insertColumn < 0){
		printf("Invalid Location");
	}
	else{
		printf("Enter the value that you wish to insert: ");
		scanf("%d", &valueToInsert);
		insertValueAlgorithm(array, valueToInsert, valueToInsertLocation);
	}
}

void deleteValue(int array[10][10]){	
}

int insertDelete(int array[10][10]){
	int insertOrDeleteSelection;
	
	printf("Insert or Delete values? 1 for Insert and 2 for delete: ");
	scanf("%d", &insertOrDeleteSelection);
	
	switch(insertOrDeleteSelection){
		case 1:
			insertValue(array);		
			break;
		case 2:
			deleteValue(array);	
			break;
		default:
			printf("Invalid Input\n");
			break;
	}
}

void mainMenu(int array[10][10]){
	int operationNumber;
	int continuation = 1;	
	
	menu:
	printArray(array);
	
	printf("\n1. Searching\n");
	printf("2. Sorting\n");
	printf("3. Min/Max Values\n");
	printf("4. Insert/Deletion of values\n\n");
	printf("Enter the number of operation that you wish to perform: ");
	scanf("%d",&operationNumber);
	
	switch(operationNumber){
		case 1:
			search(array);
			break;
		case 2:
			sort(array);
			printf("\n");
			printArray(array);
			break;
		case 3:
			minimumMaximum(array);
			break;
		case 4:
			insertDelete(array);
			printf("\n");
			printArray(array);
			break;
		default:
			printf("Invalid Input\n");
			break;							
	}
	
	printf("\nContinue or Exit? Enter 1 to continue and 2 to exit: ");
	scanf("%d",&continuation);
	
	if(continuation == 1){
		system("@cls||clear");
		goto menu;
	}
}

void main(){
	
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
	
	mainMenu(array);
}
