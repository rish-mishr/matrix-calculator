#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matrix.h"


int calculateDeterminant(struct Matrix *a){

    int determinant = 0;

    int* matrix = a->matrix; 
    int m = a->m;
    int n = a->n;

    if (a->m == 2 && a->n == 2){
        
        determinant = (*matrix * *(matrix + 3)) - ((*(matrix + 1) * *(matrix + 2)));
        return determinant;
    
    } else {

        for (int i = 0; i < m; i++){ //each element of the top row


            //TODO

        }

    }

}