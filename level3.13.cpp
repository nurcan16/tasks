#include <iostream>

using namespace std;

int main(){
    int a,qaliq,ters=0,c;
    cout<<"Ededi daxil et:";
    cin>>a;
    c=a;
    while(a>0){
        qaliq=a%10;
        ters=ters*10+qaliq;
        a/=10;
    }
    if(c==ters){
        cout<<"Polindromdur.";
    }
    else{
        cout<<"Polindrom deyil.";
    }


   return 0;
    }




