#include <iostream>     //������������� ��������

int main() {
    setlocale(LC_ALL, "RU");
    int D[] = { 7, 12, 5, 17, 3 };
    int sum = 0, sum_�� = 0, sum_��� = 0;

    for (int i = 0; i < 5; i++) {
        sum += D[i];
        sum_�� += D[i] * D[i];
        sum_��� += D[i] * D[i] * D[i];
    }

    std::cout << "����� ��������� " << sum << std::endl;
    std::cout << "����� ��������� " << sum_�� << std::endl;
    std::cout << "����� ����� " << sum_��� << std::endl;

    return 0;
}
