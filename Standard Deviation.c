#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, array[100];
    float sum = 0;
    printf("How many elemnts?: ");
    scanf("%d" ,&N);
    printf("Enter the numbers: ");
    for(int i = 0; i < N; i++){
        scanf("%d" ,&array[i]);
        sum = sum + array[i];
        }
        float mean = sum / N;
            float sum2 = 0;
        for(int i = 0; i < N; i++){
            sum2 = sum2 + ((array[i] - mean) * (array[i] - mean));
            }
            float variance = sum2 / N;
            float SV = sqrt(variance);
            printf("Standard Deviation: %f" ,SV);
    return 0;
}
