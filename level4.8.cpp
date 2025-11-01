#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cout << "Ededi daxil edin: ";
    cin >> n;

    int ikilik = 0;
    int yer = 1;

    while (n > 0) {
        int qaliq = n % 2;
        ikilik = ikilik + qaliq * yer;
        n = n / 2;
        yer = yer * 10;
    }

    cout << "2-lik formada: " << ikilik;
    return 0;
    }



