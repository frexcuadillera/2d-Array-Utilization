#include <stdio.h>

int main(){
	int size1, size2;
	int firstArray[10];
	int secondArray[10];
	
	printf("Enter the number of integers in array 1: ");
	scanf("%d",&size1);
	printf("Enter the number of integers in array 2: ");
	scanf("%d",&size2);
	printf("\n");
	
	printf("Enter the values of the first array:\n");
	
	for(int index1 = 0; index1 <size1;index1++){
		scanf("%d",&firstArray[index1]);




	}
	
	printf("Enter the values of the second array:\n");
	
	for(int index2 = 0; index2 <size2;index2++){
		scanf("%d",&secondArray[index2]);
	}
	
	printf("\n");
	
	printf("The resultant array is:\n");
	
	for(int resultantIndex = 0; resultantIndex < size1 || resultantIndex < size2; resultantIndex++){
		printf("%d \t",firstArray[resultantIndex]);
		printf("%d \t\n",secondArray[resultantIndex]);
	}
	
	printf("\n");
	
	
	
	printf("The Final array is:\n");
	
	for(int finalIndex = 1; finalIndex < size1 && finalIndex < size2; finalIndex++){
		
		if(finalIndex%2 == 1){
			printf("%d\t",firstArray[finalIndex]);
			printf("%d\t",secondArray[finalIndex+1]);
			printf("%d\n",(firstArray[finalIndex]+secondArray[finalIndex+1]));
		}
		

		
		
	}
}
