#include <iostream>
using namespace std;
//level-3.4
int faktorial(int n) {
    int f=1;
    for(int i=1;i<=n;i++){
         f=f*i;
    }
    return f;


}

int main() {
    int n;
    cout<<"Eded daxil edin:";
    cin>>n;
    int netice=faktorial(n);
    cout<<netice;

	return 0;
}

