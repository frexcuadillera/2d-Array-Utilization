#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

void printArray(int arr[10][10]);
void search(int arr[10][10]);
void sort(int arr[10][10]);
void minmax(int arr[10][10]);
void insert_delete(int arr[10][10]);
int rowSize = 5;
int columnSize = 10;
int numberOfElements = 50;
int valueToSearch;
int searchValueLocationRow;
int searchValueLocationColumn;
int continue_exit;
int sortOrder;
int insertOrDelete;
int insertRow;
int insertColumn;

int main(){

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
	
	loop:
	printArray(array);
	menu(array);
	
	printf("\n\nContinue or Exit? Enter 1 to continue and 2 to exit: ");
	scanf("%d",&continue_exit);
	switch(continue_exit){
		case 1:
			system("@cls||clear");
			goto loop;
			break;
		case 2:
			break;
		case 3:
			printf("\r");
			break;
	}
}

void menu(array){
	int operation_number;
	printf("\n1. Searching\n");
	printf("2. Sorting\n");
	printf("3. Min/Max Values\n");
	printf("4. Insert/Deletion of values\n\n");
	printf("Enter the number of operation that you wish to perform: ");
	scanf("%d",&operation_number);
	
	switch(operation_number){
		case 1:
			search(array);
			break;
		case 2:
			sort(array);
			break;
		case 3:
			minmax(array);
			break;
		case 4:
			insert_delete(array);
			break;
		default:
			system("@cls||clear");							
	}
}

void printArray(int arr[10][10]){
	for(int row = 0; row < rowSize; row++){
		for(int column = 0; column < columnSize; column++){
			printf("%d\t",arr[row][column]);
		}
		printf("\n");
	}	
}

void search(int arr[10][10]){
	searchValueLocationRow = -1;
	searchValueLocationColumn = -1;
	
	printf("\nWhat value are you searching?: ");
	scanf("%d",&valueToSearch);		
	for(int row = 0; row < 5; row++){
		for(int column = 0; column < 10; column++){
			if(valueToSearch == arr[row][column]){
				searchValueLocationRow = row + 1;
				searchValueLocationColumn = column + 1;
			}
		}
	}
	
	if(searchValueLocationRow  > -1 && searchValueLocationColumn > -1){
		printf("Found at row %d ",searchValueLocationRow);
		printf("at column %d",searchValueLocationColumn);
	}
	else{
		printf("Value not found");
	}

}

void sort(int arr[10][10]){
	printf("Sort the array in what order? 1 for ascending and 2 for descending: ");
	scanf("%d",&sortOrder);
}

void minmax(int arr[10][10]){
	int max = arr[0][0];
	int min = arr[0][0];
	int maxValueRow;
	int maxValueColumn;
	int minValueRow;
	int minValueColumn;
	
	for(int row = 0; row < rowSize; row++){
		for(int column = 0; column < columnSize; column++){
			if(arr[row][column] > max){
				max = arr[row][column];
				maxValueRow = row + 1;
				maxValueColumn = column + 1;
			}
			if(arr[row][column] < min){
				min = arr[row][column];
				minValueRow = row + 1;
				minValueColumn = column + 1;
			}
		}
	}
	
	printf("\nThe maximum value of the array is %d ",max);
	printf("and found in the row %d ",maxValueRow);
	printf("column %d\n",maxValueColumn);
	printf("The minimum value of the array is %d ",min);
	printf("and found in the row %d ",minValueRow);
	printf("column %d\n",minValueColumn);
}



void insert_delete(int arr[10][10]){
	printf("Insert or Delete values? 1 for insert and 2 for delete: ");
	scanf("%d",&insertOrDelete);
	
	switch(insertOrDelete){
		case 1:
			printf("Location where you wish to insert");
			printf("row: ");
			scanf("%d",&insertRow);
			printf("column: ");
			scanf("%d",&insertColumn);
			break;
		case 2:
			break;
		default:
			break;
	}
}


