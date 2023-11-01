#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    if (i == size) {
        return; // Базовий випадок рекурсії: коли досягнуто кількість елементів size
    }

    a[i] = Low + rand() % (High - Low + 1);
    Create(a, size, Low, High, i + 1); // Рекурсивний виклик для наступного елемента
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int Count(int* a, const int size, int i) {
    if (i == size) {
        return 0; // Базовий випадок рекурсії: коли досягнуто кінця масиву
    }

    int count = Count(a, size, i + 1); // Рекурсивний виклик для наступного елемента

    if (a[i] % 2 != 0) {
        count += 1;
    }

    return count;
}

int main() {
    srand(time(0));
    const int size = 15;
    int a[size];

    int Low = 1;
    int High = 100;

    Create(a, size, Low, High, 0);
    cout << "generated array = " << endl;
    Print(a, size);

    cout << "number of odd numbers = " << Count(a, size, 0) << endl;

    return 0;
}
