#include <stdio.h>
void matrixMultiplication(int matrix1R,int matrix1C,
                          int matrix2R,int matrix2C,
                          int matrix1[][matrix1C],
                          int matrix2[][matrix2C],
                          int fMatrix[][matrix2C]);
int main(){
    int matrix1R,matrix1C,matrix2R,matrix2C;
    printf("Input Matrix 1 dimensions: ");
    scanf("%d %d",&matrix1R,&matrix1C);
    printf("Input Matrix 2 dimensions: ");
    scanf("%d %d",&matrix2R,&matrix2C);
    if(matrix1C==matrix2R){
        printf("\nMatrix multiplication is possible\n");
    }else{
        printf("\nMatrix multiplication is not possible\n");
        return 0;
    }
    int matrix1[matrix1R][matrix1C];
    int matrix2[matrix2R][matrix2C];
    int fMatrix[matrix1R][matrix2C];

    for(int i=0;i<matrix1R;i++){
        for(int j=0;j<matrix2C;j++){
            fMatrix[i][j]=0;
        }
    }

    printf("\nInput values for Matrix 1: \n");
    for(int i=0;i<matrix1R;i++){
        for(int j=0;j<matrix1C;j++){
            printf("Value for %d %d: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nInput values for Matrix 2: \n");
    for(int i=0;i<matrix2R;i++){
        for(int j=0;j<matrix2C;j++){
            printf("Value for %d %d: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    matrixMultiplication(matrix1R,matrix1C,matrix2R,matrix2C,matrix1,matrix2,fMatrix);
    printf("\nThe final Matrix is: \n");
    for(int i=0;i<matrix1R;i++){
        for(int j=0;j<matrix2C;j++){
            printf("%d ",fMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void matrixMultiplication(int matrix1R,int matrix1C,
                          int matrix2R,int matrix2C,
                          int matrix1[][matrix1C],
                          int matrix2[][matrix2C],
                          int fMatrix[][matrix2C]){
    for(int i=0;i<matrix1R;i++){
        for(int j=0;j<matrix2C;j++){
            for(int k=0;k<matrix1C;k++){
                fMatrix[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}