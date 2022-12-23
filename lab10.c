#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void insert(double **arr, int n){
        for (int i = 0; i < n; i++)
            for (int j = 0; j < 2; j++){
                scanf("%lf", &arr[i][j]);
    }
}

    float** length(double **point, double **arr, int n) {
    int i;
    int j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            arr[i][j] = sqrt(pow((point[i][0] - point[j][0]), 2) + pow((point[i][1] - point[j][1]), 2));
         }
        
    }
}

    void output(double **arr, int n){
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
            printf("%d - %d: %lf", i+1, j+1, arr[i][j]);
            printf("\n");
        }
    }
}


    int main(){
    int n;
    double **arr, **mass;
    scanf("%d", &n);
    
    arr = (double**)malloc(sizeof(double*)*n);
    
    for (int i = 0; i < n; i++){
        arr[i] = (double *)malloc(n*sizeof(double));
    }

    mass = (double**)malloc(sizeof(double*)* n);
 
    for (int i = 0; i < n; i++) {
        mass[i] = (double *) malloc(n * sizeof(double));
    }
    
    insert(arr,n);
    length(arr,mass,n);
    output(mass, n);
    return 0;
}
