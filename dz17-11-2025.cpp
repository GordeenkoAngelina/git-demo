#include <iostream>
using namespace std;
enum location { beach, ocean, field };
void Location(location loc){
    switch (loc) {
	   case ocean:
		     cout << "You are in the ocean"<<endl;
		     break;
	   case beach:
		     cout << "You are in the beach"<<endl;
		     break;
	   default:
		cout << "You are in the field"<<endl;
	}}
location coord(int x,int y){
 if (y > -x + 2)
	   {
		return location::beach;
	   }
	   else if (y < -x + 2)
	   {
		return location:: ocean;
	   }
	   else {
		return location::field;
	   }   
}



void move(char m, int&x, int&y){
   switch(m)
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
}
int main(){

int i = 0;
int x = 0,  y = 0 ;
char m;
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

	location loc;
	cout << "Where we are? " << endl;
	cin >> x >> y;
    while(true){
	  loc= coord(x,y);
	Location(loc);

    cout << "Type in direction s,n,w,e";
    cin >> m;
    move(m,x,y);
if (x==3 || y==3) break;
}
return 0;
}