#include <iostream>


int min_dif(int i, long long sum_1, long long sum_2, int* variab){
    if (i == start)
        return abs(sum_1 - sum_2); //если рекурсия полностью прошла, то возвращает последюю разницу
    int fst_var = min_dif(i + 1, sum_1 + variab[i], sum_2, variab);
    int scnd_var = min_dif(i + 1, sum_1, sum_2 + variab[i], variab);
    return std::min()
}

int main() {
    int start, i = 0;
    long long cur = 0, dif = 1000, dif_cur;
    const int size = 32;
    std::cin >> start;
    if (1 <= start && start <= 32) { // проверка на то, что что 1 <= n <= 32
        std::cout << start << std::endl;
    }
    else {
        exit(42); // выход из работы с кодом 42, потому что 42 это прикольное число
    }

    int variab[start]; //создание массива для записывания данных

    for (i; i < start; ++i){ //этот for записывает граммовки чашечек в variab
        std::cin >> cur;
        variab[i] = cur;
    }

    for (int i = 0; i < start; ++i) {
        dif = min_dif(0, 0, 0, variab);
    }

    std::cout << dif;

    return 0;
    }