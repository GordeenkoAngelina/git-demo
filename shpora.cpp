#include <iostream>
#include <iomanip>
#include <limits>
int main(){

/*
                size                    min_val 
char            sizeof(char)            std::numeric_limits<char>::min()
int             sizeof(int)             std::numeric_limits<int>::min()
unsigned int    sizeof(unsigned int)    std::numeric_limits<unsigned int>::min()
float           sizeof(float)           std::numeric_limits<float>::min()
double          sizeof(double)          std::numeric_limits<double>::min()
*/
using namespace std;


cout << setw(12) << "type" << setw(12) << "size" 
<< setw(12) << "min"
<< setw(12) <<  "max" << endl;


cout << setw(12) << "int" << setw(12) << sizeof(int) 
<< setw(12) << static_cast<int>(numeric_limits<int>::min())
<< setw(12) <<  static_cast<int>(numeric_limits<int>::max()) << endl;


cout << setw(12) << "char" << setw(12) << sizeof(char) 
<< setw(12) << static_cast<int>(numeric_limits<char>::min())
<< setw(12) <<  static_cast<int>(numeric_limits<char>::max()) << endl;


cout << setw(12) << "unsigned int" << setw(12) << sizeof(unsigned int) 
<< setw(12) << static_cast<int>(numeric_limits<unsigned int>::min())
<< setw(12) <<  static_cast<int>(numeric_limits<unsigned int>::max()) << endl;


cout << setw(12) << "float" << setw(12) << sizeof(float) 
<< setw(12) << static_cast<int>(numeric_limits<float>::min())
<< setw(12) <<  static_cast<int>(numeric_limits<float>::max()) << endl;

cout << setw(12) << "double" << setw(12) << sizeof(double) 
<< setw(12) << static_cast<int>(numeric_limits<double>::min())
<< setw(12) <<  static_cast<int>(numeric_limits<double>::max()) << endl;
}
