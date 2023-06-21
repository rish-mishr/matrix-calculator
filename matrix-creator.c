#include <stdio.h>
#include <stdlib.h>

struct Matrix {
    int m;
    int n;
    int* matrix;
};

struct Matrix *createMatrix(int m, int n){

    struct Matrix a;
    
    struct Matrix *A = &a;

    A->m = m;
    A->n = n;
    A->matrix = (int *)malloc(m * n * sizeof(int));

    for (int i = 0; i < m; i++){

        for (int j = 0; j < n; j++){

            scanf("%d", (&A->matrix + (i * m) + (j * n)));

        }

    }

    return A;

}