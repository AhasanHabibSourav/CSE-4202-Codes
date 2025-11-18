#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, array[100];
    printf("How many elements?: ");
    scanf("%d" ,&N);
    printf("Enter the elements: ");
    for(int i = 0; i < N; i++){
        scanf("%d" ,&array[i]);
    }
    int max = array[0];
    for(int i = 0; i < N; i++){
            if (array[i] > array[0]){
                max = array[i];
            }}
            printf("The largest element in the array is %d", max);
    return 0;
}
