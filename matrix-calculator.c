#include <stdio.h>

int main(void){

	printf("Welcome to the Matrix Calculator!\n");
	printf("Enter {1} to calculate a determinant\nEnter {2} to solve a system through row reduction\nEnter {3} to quit\n");

	int option;
	scanf("%d", &option);
	struct Matrix *matrix;

	do{
		if (option == 1){

			printf("Enter the dimensions of the coefficient matrix in the format m x n\n");
			int m, n;
			scanf("%d x %d", &m, &n);

			if (m == n){
				
				matrix = createMatrix(m, n);
				//calculateDeterminant(matrix);
			
			} else {
				printf("No determinant; not a square matrix\n");
			}

		} else if (option == 2){

			printf("Enter the dimensions of the augmented matrix in the format m x n\n");
			int m, n;
			scanf("%d x %d", &m, &n);
			matrix = createMatrix(m, n);
			//rowReduce(matrix);
			//solveMatrix(matrix);

		} else if (option == 3){

			printf("Thanks for using the Matrix Calculator!\n");
			return 0;

		} else {

			printf("Invalid Entry; Try Again!\n");
		}
	} while (option != 1 || option != 2 || option != 3);
	
	return 0;
}
