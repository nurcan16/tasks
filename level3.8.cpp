#include <iostream>

using namespace std;

int main(){
    int a,qaliq,ters=0;
    cout<<"Ededi daxil edin:";
    cin>>a;
    while(a>0){
        qaliq=a%10;
        ters=ters*10+qaliq;
        a/=10;
    }
    cout<<ters;
   return 0;
    }




