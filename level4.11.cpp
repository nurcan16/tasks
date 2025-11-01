#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a = 0, b = 1, c;

    cout << "1000-den kicik Fibonacci ededleri: ";

    cout << a << " " << b << " ";

    c = a + b;

    while (c < 1000) {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
    }



