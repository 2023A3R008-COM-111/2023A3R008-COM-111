#include <stdio.h>
int main()
{
	// To find Largest of two numbers
	int numx, numy;
	printf("Enter numx: ");
	scanf("%d", &numx);

	printf("Enter numy: ");
	scanf("%d", &numy);

	if(numx>numy){
		printf("%d is greater than %d.", numx, numy);
	}else if(numx == numy){
		printf("%d(numx) is equals to %d(numy).", numx, numy);
	}else{
		printf("%d is greater than %d.", numy, numx);
	}
	printf("\n");
    
	// To find Largest of two numbers
	printf("Enter numx: ");
	scanf("%d", &numx);

	printf("Enter numy: ");
	scanf("%d", &numy);

	if(numx<numy){
		printf("%d is smallest than %d.", numx, numy);
	}else if(numx == numy){
		printf("%d(numc) is equals to %d(numy).", numx, numy);
	}else{
		printf("%d is smallest than %d.", numy, numx);
	}
	printf("\n");

	return 0;
}