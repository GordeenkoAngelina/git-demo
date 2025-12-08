#include <iostream>
#include <cmath>
/*using namespace std;
void bubblesort(int* arr, int n);
void printbubble(int*arr, int n);

int main() {
  setlocale(LC_ALL, "RU");
  int n;
  cout << "Введи размер массива: ";
  cin >> n;
  int* arr = new int[n];
  for (int i{ 0 }; i < n; i++) {
    cout << "arr[" << i << "]" << endl;
    cin >> arr[i];
  }
  bubblesort(arr, n);
  printbubble(arr, n);
  delete[] arr;
  return 0;
}
void bubblesort(int* arr, int n) {
  for (int i{ 0 }; i < n; i++) {
    for (int j{ 0 }; j < n - 1; j++) {
      if( arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
void printbubble(int* arr, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout << " " << arr[i];
  }
  cout <<endl;
}

using namespace std;
void selectsort(int* arr, int n);
void printselect(int* arr, int n);
int main() {
  setlocale(LC_ALL, "RU");
  int n;
  cout << "Введи размер массива: ";
  cin >> n;
  int* arr = new int[n];
  for (int i{ 0 }; i < n; i++) {
    cout << "arr[" << i << "]" << endl;
    cin >> arr[i];
  }
  selectsort(arr, n);
  printselect(arr, n);
  delete[] arr;
  
  return 0;
}
void selectsort(int* arr, int n) {
  for (int i{ 0 }; i <= n-1; i++) {
    int min = 1;
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[min]) {
        min = j;
      }
    }
    swap(arr[i], arr[min]);
  }
}

void printselect(int* arr, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout << " " << arr[i];
  }
  cout << endl;
}*/



/*using namespace std; // 1 задание кол-во кратных 4



void input(int*, int);  //input_arr
void print(int*, int);  // print
int mult(int*, int);  // dev_4


int main() {
  setlocale(LC_ALL, "RU");
  size_t size{};
  cout << "Введи размерность: ";
  cin >> size;
  int* array = new int[size];


  input(array, size);
  print(array, size);

  int count= mult(array, size);
  cout << "Количество элементов, кратных 4: " << count << endl;
  delete [] array;
  return 0;
}

void input(int* a, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout  <<"a["<<i<<"]" << endl;
    cin >> a[i];
    
  }

}
void print(int* a, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout << a[i] << endl;
  }

}
int mult(int* a, int n) {
  double count = 0;
  for (int i{ 0 }; i < n; i++) {
    if (a[i] % 4 == 0) count++;
  }
  return count;
}*/
using namespace std; /* сумма остатков деления на 4 чисел кратных 3

void input(int*, int);  //input_arr
void print(int*, int);  // print
int mult(int*, int);  // dev_4


int main() {
  setlocale(LC_ALL, "RU");
  size_t size{};
  cout << "Введи размерность: ";
  cin >> size;
  int* array = new int[size];


  input(array, size);
  print(array, size);

  int s = mult(array, size);
  cout << " Сумма остатков деления на 4 чисел кратных 3: " << s << endl;
  delete [] array;
  return 0;
}

void input(int* a, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout  <<"a["<<i<<"]" << endl;
    cin >> a[i];
    
  }

}
void print(int* a, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout << a[i] << endl;
  }

}
int mult(int* a, int n) {
    int s=0;
  for (int i{ 0 }; i < n; i++) {
    if (a[i] % 3 == 0) {
s = s + a[i]%4;

    };
  }
  return s;
}*/

/*
void input(int*, int);  //input_arr
void print(int*, int);  // print
int mult(int*, int);  // dev_4


int main() {
  setlocale(LC_ALL, "RU");
  size_t size{};
  cout << "Введи размерность: ";
  cin >> size;
  int* array = new int[size];


  input(array, size);
  print(array, size);

  int m = mult(array, size);
  cout << " Среднее арифметическое чисел кратных 3: " << m << endl;
  delete [] array;
  return 0;
}

void input(int* a, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout  <<"a["<<i<<"]" << endl;
    cin >> a[i];
    
  }

}
void print(int* a, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout << a[i] << endl;
  }

}
int mult(int* a, int n) {
    double count=0;
    double m=0;
    int s=0;

  for (int i{ 0 }; i < n; i++) {
    if (a[i] % 3 == 0) {
count++;
s=s + a[i];
m = s / count;

    };
  }
  return s,m;
}*/


void input(int*, int);  //input_arr
void print(int*, int);  // print
 double mult(int*, int);  // dev_4


int main() {
  setlocale(LC_ALL, "RU");
  size_t size{};
  cout << "Введи размерность: ";
  cin >> size;
  int* array = new int[size];


  input(array, size);
  print(array, size);

  double m = mult(array, size);
  cout << " Среднее геометрическое модулей четных элементов: " << m << endl;
  delete [] array;
  return 0;
}

void input(int* a, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout  <<"a["<<i<<"]" << endl;
    cin >> a[i];
    
  }

}
void print(int* a, int n) {
  for (int i{ 0 }; i < n; i++) {
    cout << a[i] << endl;
  }

}
double mult(int* a, int n) {
    double count=0;
    
    double c;
    double b=1;

  for (int i{ 0 }; i < n; i++) {
    if (i% 2 == 1) {
        count++;
c=fabs(a[i]);
b*=c;

    };
  } 
 

  return pow(b, 1.0/count);
}

