#include<stdio.h>

typedef int Units;
typedef float Marks;
int main()
{
    Units batch1, batch2;
	Marks studentx_marks, studentz_marks;

	printf("Enter the number of units for batch 1: ");
	scanf("%d", &batch1);
	printf("Enter the number of units for batch 2: ");
	scanf("%d", &batch2);

	printf("Enter the marks of student x: ");
	scanf("%f", &studentx_marks);
	printf("Enter the marks of student z: ");
	scanf("%f", &studentz_marks);

	printf("\nNumber for batch 1: %d\n", batch1);
	printf("\nNumber for batch 2: %d\n", batch2);
	printf("\nMarks of Student A: %.2f\n", student1_marks);
	printf("\nMarks of Student B: %.2f\n", student2_marks);
	return 0;
}
    
