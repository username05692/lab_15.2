#include <stdio.h>
#define SIZE 3 // ���������� ������ ������ 

int main() {
    int array[SIZE];// ����������� ������
    //�������� �������� ������
    printf("VVedit nom1:");
    scanf_s("%d", &array[0]);

    printf("VVedit nom2:");
    scanf_s("%d", &array[1]);

    printf("VVedit nom3:");
    scanf_s("%d", &array[2]);
    //����� ���������� �����
    int minimum = array[0];
    if (array[1] < minimum) {
        minimum = array[1];
    }
    if (array[2] < minimum){
        minimum = array[2];
    }
    // ��������� ����������
    printf("Minimum is: %d\n",minimum);
    return 0; 
}