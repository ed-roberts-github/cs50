#include <stdio.h>

int main(){
	int height;
	
	do {
		printf("Entre height: ");
		scanf("%d", &height);
	}
	while (height < 1 || height > 8);
	
	for (int i = 1; i < height+1; ++i){
		
		for (int j = 0; j < height-i; j++){
			printf(" ");
		}
		for (int q = 1; q < i+1; q++){
			printf("#");
		}
		
		printf("  ");
		
		for (int q = 1; q < i+1; q++){
			printf("#");
		}	

		printf("\n");
	}
	return 0;
}
