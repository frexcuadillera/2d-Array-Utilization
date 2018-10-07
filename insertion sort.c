#include <stdio.h>

int main(){
	int index, currentValueIndex, currentValueTemporaryHolder;
	int array[5]={5,2,6,8,4};
	
	printf("Unsorted Array\n\n");
	
	for(index = 0; index < sizeof(array)/sizeof(array[0]); index++ ){
		printf("%d\t",array[index]);
	}
	
	for(index = 1; index < sizeof(array)/sizeof(array[0]); index++){
		currentValueIndex = index;
		
		while(currentValueIndex > 0 && array[currentValueIndex] < array[currentValueIndex - 1]){
			currentValueTemporaryHolder = array[currentValueIndex];
			array[currentValueIndex] = array[currentValueIndex - 1];
			array[currentValueIndex - 1] = currentValueTemporaryHolder;
			currentValueIndex--;
		}
	}
	
	printf("\n\nSorted Array\n\n");
	
	for(index = 0; index < sizeof(array)/sizeof(array[0]); index++){
		printf("%d\t",array[index]);
	}
}




