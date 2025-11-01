#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b;
    char emel;

    cout << "Birinci ededi daxil edin: ";
    cin >> a;

    cout << "Emel daxil edin (+, -, *, /): ";
    cin >> emel;

    cout << "Ikinci ededi daxil edin: ";
    cin >> b;

    double netice;

    if (emel == '+')
        netice = a + b;
    else if (emel == '-')
        netice = a - b;
    else if (emel == '*')
        netice = a * b;
    else if (emel == '/') {
        if (b != 0)
            netice = a / b;
        else {
            cout << "Sifira bolme yoxdur!";
            return 0;
        }
    }
    else {
        cout << "Yanlis emel daxil etdiniz!";
        return 0;
    }

    cout << "Netice: " << netice;
    return 0;
    }



