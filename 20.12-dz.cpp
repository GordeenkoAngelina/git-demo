/*#include <format>
#include <iostream>
using namespace std;

void initArray(int*,int*);
void printArray(int*,int*);
void prnArray(int*,int*);
size_t maxIndArray(int*,int*);
bool isOdd(int)


    int main(){
unsigned int size{};
cout<<"Enter size:" ;
cin>> size;
unsigned int* array {new int[size]};
initArray(array, array + size);
cout<<"Array: ";
printArray(array, array + size);
cout<<"Bit: ";
prnBitArray(array, array + size);
cout<<"Index nechetn " << maxIndArray(array, array + size);
return 0;
 }

void initArray(int* begin, int* end){
srand(time(0));
for(int* p {begin}; p < end; p++){
*p = rand() % 19;

}
void printArray(int *begin, int *end){
    for(int* p {begin}; p < end; p++){
        cout << (*p) << ' ';
    }
}


}*/



#include <iostream>
#include <bitset>
#include <cstdlib>
#include <ctime>
using namespace std;

// Прототипы функций
void initArray(int*, int*);
void printArray(int*, int*);
void prnBitArray(int*, int*);
void task1(int*, int*);      // Побитовая инверсия
void task2(int*, int*);      // Установка бита в 1
void task3(int*, int*);      // Подсчет установленных битов

int main() {
    int size {};
    
    cout << "Введите размерность: ";
    cin >> size;
    int* array {new int[size]};
    
    initArray(array, array + size);
    cout << "Инициализированный массив: ";
    printArray(array, array + size);
    cout << "\nДвоичсное представление чисел массива: ";
    prnBitArray(array, array + size);
    
    cout << "\n\n Побитовая инверсия \n";
    task1(array, array + size);
    
    cout << "\n\n Установка бита в 1 \n";
    task2(array, array + size);
    
    cout << "\n\n Задание 3: Количество установленных битов \n";
    task3(array, array + size);
    
    delete[] array;
    return 0;
}

void initArray(int* begin, int* end) {
    srand(time(0));
    for(int* p {begin}; p < end; p++) {
        *p = rand() % 19;
    }
}

void printArray(int* begin, int* end) {
    for(int* p {begin}; p < end; p++) {
        cout << (*p) << ' ';
    }
}

void prnBitArray(int* begin, int* end) {
    for(int* p {begin}; p < end; p++) {
        
        cout << bitset<8>(*p) << ' ';
    }
}

// Задание 1: Побитовая инверсия чисел массива
void task1(int* begin, int* end) {
    cout << "Массив после побитовой инверсии: ";
    for(int* p {begin}; p < end; p++) {
        cout << (~(*p)) << ' ';
    }
    
    cout << "\nДвоичное представление после инверсии: ";
    for(int* p {begin}; p < end; p++) {
        cout << bitset<8>(~(*p)) << ' ';
    }
}

// Задание 2: Установка заданного бита в 1
void task2(int* begin, int* end) {
    int bitPos;
    cout << "Введите позицию бита для установки в 1 (0-31): ";
    cin >> bitPos;
    
    if (bitPos < 0 || bitPos > 31) {
        cout << "Ошибка: позиция бита должна быть от 0 до 31\n";
        return;
    }
    
    cout << "Двоичное представление исходного массива:\n";
    prnBitArray(begin, end);
    
    cout << "\nДвоичное представление после установки бита " << bitPos << " в 1:\n";
    for(int* p {begin}; p < end; p++) {
        int modified = *p | (1 << bitPos);  // Устанавливаем бит в 1
        cout << bitset<8>(modified) << ' ';
    }
}

// Задание 3: Подсчет количества установленных битов для каждого элемента
void task3(int* begin, int* end) {
    cout << "Двоичное представление массива:\n";
    prnBitArray(begin, end);
    
    cout << "\nКоличество установленных битов для каждого элемента:\n";
    for(int* p {begin}; p < end; p++) {
        int count = 0;
        int num = *p;
        
        // Подсчитываем установленные биты
        for(int i = 0; i < 32; i++) {
            if (num & (1 << i)) {
                count++;
            }
        }
        
        cout << count << ' ';
    }
}
