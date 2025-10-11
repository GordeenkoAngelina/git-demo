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
     cout << "Common or non-common?"<< endl;
     char p;
     cin >> p;
     if (p== 'common'&&'Common'){
     float n,m;
      n = static_cast<float>(a)/b; 
        m = static_cast<float>(c)/d;
     if (x== '*')
      {
      float k = n*m; 
     cout <<k;
      }
     else 
     { 
      if (x== '+') {
      float t = n+m; 
     cout <<t;}
         else { 
      if (x== '-') {
      float l = n-m; 
     cout <<l;}
     else {if (x== '/') {
      float o = n/m; 
     cout <<o;}}
   
   }
   }
}
else if (x== '+'){
    int r,e;
     r = a*d + b*c;
     e = b*d;
     cout << r<<"/"<<e;
} else {
   if(x== '-') {
       int r1,e1;
     r1 = a*d - b*c;
     e1 = b*d;
     cout << r1<<"/"<<e1;
   } else { if(x== '*') {
    int r2,e2;
     r2 = a*c;
     e2 = b*d;
     cout << r2<<"/"<<e2;   
   } else { if (x== '/') {
       int r3,e3;
     r3 = a*d;
     e3 = b*c;
     cout << r3<<"/"<<e3;  
   } else {cout << "unknown operation"; }
  
   }

   }
}

}

