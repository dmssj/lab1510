#include <iostream>     //использование процедур и функций


void sums(int D[], int s) {
    int sum = 0;
    int sum_кв = 0;
    int sum_куб = 0;

    for (int i = 0; i < s; i++) {
        sum += D[i];
        sum_кв += D[i] * D[i];
        sum_куб += D[i] * D[i] * D[i];
    }

    std::cout << "сумма элементов  " << sum << std::endl;
    std::cout << "сумма квадратов  " << sum_кв << std::endl;
    std::cout << "сумма кубов  " << sum_куб << std::endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int D[] = { 7, 12, 5, 17, 3 };
    int s = 5;

    sums(D, s);
    
    return 0;
}
