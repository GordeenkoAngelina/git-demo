#include <iostream>
#include <cmath>
#include <iomanip>



using namespace std;

double cosUser (double x, double eps){
double sum{1}, term{1};
int m = 0;
while(fabs(term)>eps){
     m++;
term=term * (-1)* x * x/ ((2*m-1) * (2 * m));
    sum = sum +term;
}
return sum;
}




int main(void){
double x, eps;

while(true){
cout<<"Enter x and eps";
cin>> x >> eps;
if( fabs(x)<1 && fabs(eps)<0.05) break;
cout<<"Error";


}

cout<<"result = "<< cosUser(x, eps)<<endl<<"result 2 = "<<cos(x);
return 0;


}


