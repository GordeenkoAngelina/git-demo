#include <iostream>
#include <cmath>

using namespace std;


double shUser(double x, double eps) {
    double sum{x};          
    double term{x};         
    int m = 1;              
    
    while (fabs(term) > eps) {
        m++;
        term = term * x * x / ((2*m - 1) * (2*m - 2));
        sum = sum + term;
    }
    
    return sum;
}

int main() {
    double x, eps;

    while (true) {
        cout << "Enter x and eps: ";
        cin >> x >> eps;
        
        if (eps > 0 && eps < 1) break;
        cout << "Error: eps must be between 0 and 1" << endl;
    }

    cout << "**Вычисленное значение = " << shUser(x, eps) << endl;
    cout << "**Встроенная функция = " << sinh(x) << endl;

    return 0;
}