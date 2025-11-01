#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout << "Element sayini daxil edin: ";
    cin >> n;

    int a[100];
    cout << n << " ededi daxil edin:\n";

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cut_s = 0, tek_s = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            cut_s += a[i];
        else
            tek_s += a[i];
    }

    cout << "Cut indekslerdeki ededlerin cemi: " << cut_s<< endl;
    cout << "Tek indekslerdeki ededlerin cemi: " << tek_s;

    return 0;
    }



