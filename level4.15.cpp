#include <iostream>

using namespace std;

int main(){

    int n,max;

    cout << "Eded daxil edin (bitirmek ucun 0 daxil edin): ";
    cin >> n;

    max= n;

    while (n != 0) {
        if (n > max)
           max = n;

        cout << "Eded daxil edin (bitirmek ucun 0 daxil edin): ";
        cin >> n;
    }

    cout << "En boyuk eded: " << max;

    return 0;
    }



