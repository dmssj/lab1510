#include <iostream>     //������������� �������� � �������


void sums(int D[], int s) {
    int sum = 0;
    int sum_�� = 0;
    int sum_��� = 0;

    for (int i = 0; i < s; i++) {
        sum += D[i];
        sum_�� += D[i] * D[i];
        sum_��� += D[i] * D[i] * D[i];
    }

    std::cout << "����� ���������  " << sum << std::endl;
    std::cout << "����� ���������  " << sum_�� << std::endl;
    std::cout << "����� �����  " << sum_��� << std::endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int D[] = { 7, 12, 5, 17, 3 };
    int s = 5;

    sums(D, s);
    
    return 0;
}
