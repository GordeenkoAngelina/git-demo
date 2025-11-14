#include <iostream>
int main(){
using namespace std;
int i = 0;
int x = 0,  y = 0 ;
char move;
    cout << "Map" << endl;
    for (int i = 1; i <= 3 ; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i > -j + 4) {
                cout << "b ";
            }
            else if (i < -j + 4) {
                cout << "o ";
            }
            else {
                cout << "f ";
            }
        }
        cout << endl;}
	enum location { beach, ocean, field };
	location loc;
	cout << "Where we are? " << endl;
	cin >> x >> y;
    while(true){
	   if (y > -x + 2)
	   {
		loc = beach;
	   }
	   else if (y < -x + 2)
	   {
		loc = ocean;
	   }
	   else {
		loc = field;
	   }
	switch (loc) {
	   case ocean:
		     cout << "You are in the ocean"<<endl;
		     break;
	   case beach:
		     cout << "You are in the beach"<<endl;
		     break;
	   default:
		cout << "You are in the field"<<endl;
	}

    cout << "Type in direction s,n,w,e";
    cin >> move;
switch(move)
{
    case 's': {
        y++;
    } break;

    case 'n': {
        y--;
    } break;

    case 'w': {
        x--;
    } break;

    case 'e': {
        x++;
    } break;

}
if (x==3 || y==3) break;
}
return 0;
}