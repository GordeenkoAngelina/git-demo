#include <iostream>
#include <cmath>
using namespace std;


double cosUser(double x, double eps) {
    double sum = 1.0;     
    double term = 1.0;    
    int i = 1;            
    
    
    while (fabs(term) > eps) {
       
        term = term * (-1) * x * x / ((2*i - 1) * (2*i));
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
        if (fabs(eps) < 0.05) break;
        cout << "Параметры введены неверно. Попробуйте еще раз!\n";
    }

    cout << "Вычисленное значение = " << cosUser(x, eps)
         << "значение встроенной функции = " << cos(x);
    return 0;
}

