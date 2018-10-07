#include <stdio.h>

int main(){
	
	int array[] = {38,11,96,38,20};
	int index;
	int indexOfValueToDelete = -1;
	
	printf("Initial Array\n");
	
	for(index = 0; index < 5; index++){
		printf("%d\t",array[index]);
	}
	
	printf("\n\nEnter the index of the value you want to delete: ");
	scanf("%d",&indexOfValueToDelete);
	
	if(indexOfValueToDelete >= 0 && indexOfValueToDelete < 5){
		for(index = indexOfValueToDelete; index < 4; index++){
			array[index] = array[index+1];
		}
		
		printf("\nFinal Array\n");
		
		for(index = 0; index < 4; index++){
			printf("%d\t",array[index]);
		}
	}
	else{
		printf("\nFinal Array\n");
	
		for(index = 0; index < 5; index++){
			printf("%d\t",array[index]);
		}
	}
}
