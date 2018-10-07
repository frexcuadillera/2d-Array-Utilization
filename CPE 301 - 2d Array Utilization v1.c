#include <stdio.h>

int main(){
	int numberOfElements = 51;
	
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
	
	printArray(array, numberOfElements);
}

void printArray(int arr[10][10], int numberOfElementsPrintArray){
	int row = 0, column = 0;
	
	while(row + column <= numberOfElementsPrintArray){
		for(row = 0; row < 10; row++){
			for(column = 0; column < 10; column++){
				printf("%d\t",arr[row][column]);
			}
			printf("\n");
		}	
	}
}
