#include <stdio.h>

int main(){
	int array[] = {1,2,3,4,5};
	int valueToDelete;
	int valueToDeleteIndex = -1;
	int index;
	
	printf("Initial Array\n");
	
	for(index = 0; index < 5; index++){
		printf("%d\t",array[index]);
	}
	
	printf("\n\nEnter the value you want to delete: ");
	scanf("%d",&valueToDelete);
	
	for(index = 0; index < 5; index++){
		if(array[index]==valueToDelete){
			valueToDeleteIndex = index;
		}
	}
	
	if(valueToDeleteIndex >= 0){
		for(index = valueToDeleteIndex; index < 5;index++ ){
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

