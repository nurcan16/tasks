#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, cem = 0;
    cout << "Ededi daxil edin: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            cem += i;
    }

    if (cem == n)
        cout << n << " mukemmel ededdir.";
    else
        cout << n << " mukemmel eded deyil.";

    return 0;
    }



