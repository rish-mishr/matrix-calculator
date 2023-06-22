struct Matrix {
    int m;
    int n;
    int* matrix;
};

struct Matrix *createMatrix(int, int);

struct Matrix *createDetMatrix(int, int, int, struct Matrix*);