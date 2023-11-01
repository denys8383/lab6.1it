#include <iostream>

using namespace std;
// Функція для заповнення масиву цілих чисел 'a' випадковими значеннями в заданому діапазоні [Low, High].
void Create(int* a, const int size, const int Low, const int High) {
    if (High >= Low) {
        for (int i = 0; i < size; i++) {
            a[i] = Low + rand() % (High - Low + 1);
        }
    }
}
// Функція для обчислення суми позитивних елементів у масиві 'mas', які не діляться на 3.
int Sum(int mas[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] > 0 && mas[i] % 3 != 0)
        s += mas[i];
    }
    return s;
}
// Функція для підрахунку кількості позитивних елементів у масиві 'mas', які не діляться на 3.
int Num(int mas[], const int n) {
    int num = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] > 0 && mas[i] % 3 != 0) {
            num++;
        }
    }
    return num;
}
// Функція для встановлення значення 0 для позитивних елементів у масиві 'mas', які не діляться на 3.
void Fun0(int mas[], const int n) {
    for (int i = 0; i < n; i++) {
        if (mas[i] > 0 && mas[i] % 3 != 0) {
            mas[i] =0;
        }
    }
}

int main() {
    srand((unsigned(time(nullptr))));
    const int n = 22;
    int a[n];
    int Low = -10;
    int High = 35;
    // Заповнюємо масив 'a' випадковими значеннями в діапазоні [-10, 35].
    Create(a, n, Low, High);
    // Виводимо значення в масиві 'a'.
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    // Рахуємо та виводимо суму позитивних елементів у 'a', які не діляться на 3.
    cout << "\nS = " << Sum(a, n) << endl;
    // Рахуємо та виводимо кількість позитивних елементів у 'a', які не діляться на 3.
    cout << "\nN = " << Num(a, n) << endl;
    // Встановлюємо значення 0 для позитивних елементів у 'a', які не діляться на 3 за допомогою функції Fun0.
    Fun0(a, n);
    // Виводимо змінений масив після використання Fun0.
    cout << "\nFun0" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
