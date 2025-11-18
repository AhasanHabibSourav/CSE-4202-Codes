#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, array[100];
    float sum = 0;
    printf("Welcome to the Average Calculator\n");
    printf("How many numbers you want to average?: ");
    scanf("%d" ,&N);
    printf("Enter the numbers: ");
    for(int i = 0; i < N; i++){
        scanf("%d" ,&array[i]);
        sum = sum + array[i];
        }
        float average = sum / N;
        printf("Average: %.2f" ,average);
    return 0;
}
