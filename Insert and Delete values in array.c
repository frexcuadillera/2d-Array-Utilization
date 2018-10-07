#include <stdio.h>

int main(){
	int size, index, selection, hole;
	
	printf("Enter size of  array:");
	scanf("%d",&size);
	int array[size];
	
	
	printf("\nEnter values of the array:\n");
	
	for(index = 0; index < size; index++){
		scanf("%d",&array[index]);
	}
	
	for(index = 0; index < size; index++){
		printf("%d\t",array[index]);
	}
	
	printf("\nEnter the location of the element you want to delete: ");
	scanf("%d",&selection);
	
	
	
	for(hole = selection; hole < size - 1; hole++){
		array[hole] = array[hole+1];
	}
	
	for(index = 0; index < size-1; index++){
		printf("%d\t",array[index]);
	}

}
