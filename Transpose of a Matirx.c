#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3], b[3][3];
    printf("Enter a 3X3 Matrix:\n");
    for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("A[%d][%d]: " ,i+1, j+1);
                scanf("%d",&a[i][j]);
    }}

     for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                b[i][j] = a[j][j];
    }}
    printf("The Transposed Matirx is:\n");

     for (int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d\t" ,b[i][j]);
    }printf("\n");
    }



    return 0;
}
