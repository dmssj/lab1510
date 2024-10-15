#include <iostream>     //использование процедур

int main() {
    setlocale(LC_ALL, "RU");
    int D[] = { 7, 12, 5, 17, 3 };
    int sum = 0, sum_кв = 0, sum_куб = 0;

    for (int i = 0; i < 5; i++) {
        sum += D[i];
        sum_кв += D[i] * D[i];
        sum_куб += D[i] * D[i] * D[i];
    }

    std::cout << "сумма элементов " << sum << std::endl;
    std::cout << "сумма квадратов " << sum_кв << std::endl;
    std::cout << "сумма кубов " << sum_куб << std::endl;

    return 0;
}
