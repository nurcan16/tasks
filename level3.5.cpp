#include <iostream>

using namespace std;

int main(){
    int a,cem=0,qaliq;
    cout<<"Ededi daxil edin:";
    cin>>a;
    if(a<0){
        a=-a;
    }

    while(a>0){
        qaliq=a%10;
        cem+=qaliq;
        a/=10;
    }
    cout<<cem;


    return 0;
}
