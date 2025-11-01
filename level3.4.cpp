#include <iostream>

using namespace std;

int main(){
    int faktorial=1,a;
    cout<<"ededi daxil edin:";
    cin>>a;

    for(int i=1;i<=a;i++){
        faktorial=faktorial*i;
    }
    cout<<faktorial;
    return 0;
}
