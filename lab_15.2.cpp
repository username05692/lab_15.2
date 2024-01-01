#include <stdio.h>
#define SIZE 3 // визначення розміру масиву 

int main() {
    int array[SIZE];// ініціалізвція масиву
    //введення елементів масиву
    printf("VVedit nom1:");
    scanf_s("%d", &array[0]);

    printf("VVedit nom2:");
    scanf_s("%d", &array[1]);

    printf("VVedit nom3:");
    scanf_s("%d", &array[2]);
    //пошук мінімального числа
    int minimum = array[0];
    if (array[1] < minimum) {
        minimum = array[1];
    }
    if (array[2] < minimum){
        minimum = array[2];
    }
    // виведення результату
    printf("Minimum is: %d\n",minimum);
    return 0; 
}