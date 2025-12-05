#include <iostream>
#include <cmath>
using namespace std;


double sqrtUser(double x, double eps) {
    // Ряд для sqrt(1+x) = (1+x)^(1/2): 
    // 1 + (1/2)x - (1/8)x² + (1/16)x³ - (5/128)x⁴ + ...
    
    double sum = 1.0;         
    double term = 1.0;        
    int i = 1;                
    
    while (fabs(term) > eps) {
       
        term = term * x * (3.0 - 2.0*i) / (2.0*i);
        sum = sum + term;
        i++;
    }
    return sum;
}

int main(void) {
    double x, eps;

    while(true) {
        cout << "Введите x и точность: ";
        cin >> x >> eps;
        if (fabs(eps) < 0.05 && x >= -1 && x <= 1) break;
        cout << "Параметры введены неверно. Попробуйте еще раз!\n";
    }

    cout << "Вычисленное значение = " << sqrtUser(x, eps)
         << "Значение встроенной функции = " << sqrt(1 + x);
    return 0;
}

