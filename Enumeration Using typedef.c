#include <stdio.h>
typedef enum Day {
    Saturday,
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
}day;

int main() {
    day myVar;
    myVar = Tuesday;
    printf("%d\n", myVar);

    return 0;
}