#include <stdio.h>

int main() {
    
    char name[3][20] = {"Sourav", "Habib", "Ahasan"};
    int ID[3] = {25024001,25024002, 25024003};
    int age[3] = {22, 23, 25};
    
    printf("%-15s %-15s %-10s\n", "Name", "ID", "Age");
    printf("----------------------------------------\n");
    
    for (int i = 0; i < 3; i++) {
        printf("%-12s %-18d %-10d\n", name[i], ID[i], age[i]);
    }
    


    
    
    return 0;
}
