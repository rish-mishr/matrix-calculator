#include <stdio.h>
#include <stdlib.h>

struct Matrix {
    int m;
    int n;
    int* matrix;
};

struct Matrix *createMatrix(int m, int n){ //create an initial matrix via user input

    struct Matrix *A = (struct Matrix*)malloc(2*sizeof(int) + m*n*sizeof(int));

    A->m = m;
    A->n = n;

    for (int i = 0; i < m; i++){

        for (int j = 0; j < n; j++){

            scanf("%d", (&A->matrix + (i * m) + (j * n)));

        }

    }

    return A;

}

struct Matrix *createDetMatrix(int m, int n, int m1, struct Matrix *a){ //create a subMatrix for use in calculating a determinant
    
    struct Matrix *A = (struct Matrix*)malloc(2*sizeof(int) + m*n*sizeof(int));
    A->m = m;
    A->n = n;

    for (int i = 0; i < m; i++){

        for (int j = 0; j < n; j++){

            //TODO

        }

    }

}