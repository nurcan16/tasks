#include <iostream>

using namespace std;

int main(){
  int ay;

  cout<<"ayin nomresin daxil et (1-12):";
  cin>>ay;

  if(ay==12 || ay==1 || ay==2) {
    cout<<"Qis feslidir.";
  }
  else if (ay==3 || ay==4 || ay==5) {
    cout<<"Yaz feslidir.";
  }
  else if (ay==6 || ay==7 || ay==8){
    cout<<"Yay feslidir.";
  }
  else {
    cout<<"Payiz feslidir.";
  }

    return 0;
}
