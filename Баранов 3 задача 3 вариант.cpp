#include <iostream> // Заголовочный файл для std::cout и std::cin
#include <cstdlib>  // Заголовочный файл для rand()

// Функция вывода пар чисел из массива с заданной разностью
void pairs(int* a, int b, int c) {
    for (int i = 0; i < b; i++) {
        for (int o = i + 1; o < b; o++) { // начинаем со следующего номер после i
            if (abs(a[i] - a[o]) == c || abs(a[o] - a[i]) == c) { // проверяем модуль разницы
                std::cout << a[i] << " and " << a[o] << std::endl;
            }
        }
    }
}

// Функция для вывода содержимого массива на экран
void printArray(int* arr, int length) {
    for (int i = 0; i < length; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    srand(time(nullptr)); // Инициализация генератора случайных чисел текущим временем

    int n = 50;
    int* array = new int[n]; // Создаем динамический одномерный массив

    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 50 + 1 ;// Заполняем случайными числами от 1 до 50
    }

    printArray(array, n); // Показываем его на экран

    int k;
    std::cout << "Введите число: ";

    std::cin >> k;

    if (!std::cin.fail()) {
        pairs(array, n, k);
    } else {
        std::cout << "Неверный ввод!"<<std :: endl;
    }

    delete[] array;
    return 0;
}
