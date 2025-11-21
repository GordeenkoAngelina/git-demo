#include <iostream>
using namespace std;
bool isp(char* arr, int SIZE)
{for(int i=0; i<SIZE-1-i;i++)
    if (arr[i]!=arr[SIZE - 1 - i]){return false;}
return true;}

int main(){ 
string word;
cin>>word;
char arr[100];
for(int i=0; i < word.length(); i++) 
{arr[i]=word[i];}
int SIZE = word.length();
if(isp(arr, SIZE)){
    cout<<"respect";
} else cout<<"lox";


}

