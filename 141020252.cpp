#include <iostream>
int main(){
    using namespace std;
int a, b, c, d;
     cout <<"Enter a/b, c/d"<<endl;
     char dummy;
     cin >>a >> dummy>> b >> c >> dummy >> d;
     cout << "What operation? Enter"<< endl;
     char x;
     cin >> x;
      float n,m;
      n = static_cast<float>(a)/b; 
        m = static_cast<float>(c)/d;
   cout << "Common or non-common? Enter 'C' if common and 'n' if non-common"<< endl;
     char p;
     cin >> p;
     switch (p)
     {
     case 'C':{
     switch (x)
     {
     case '+' :{
        float t = n+m; 
        cout <<t;}
    break;
    case '-': {
        float o = n-m; 
     cout <<o;}
        break;
     case '*' : {
        float l = n*m; 
     cout <<l;}
        break;
        case '/' : {
        float p = n/m; 
     cout <<p;}
        break;} }
        break;
        default :{
         switch(x) {
            case '+': {
                int r,e;
     r = a*d + b*c;
     e = b*d;
     cout << r<<"/"<<e;
            } break;
            case '/' :{
                int r3,e3;
     r3 = a*d;
     e3 = b*c;
     cout << r3<<"/"<<e3; 
            } break;
            case '-':{
               int r1,e1;
     r1 = a*d - b*c;
     e1 = b*d; break;
     case '*':{
      int r2,e2; 
           r2 = a*c;
     e2 = b*d;
     cout << r2<<"/"<<e2; 
     } break; 

            }
         }
        }
} }