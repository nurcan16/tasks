#include <iostream>
using namespace std;

int main(){
   int n,i=1;
   cout<<"n sayda eded daxil et:";
   cin>>n;
   int m,s,l;
   cout<<"1 ci ededi daxil et:";
   cin>>m;
   s=s+m;
   l=l+1;
   int max=m,min=m;

   while(i<n){
        int a;
        i=i+1;
        cout<<"ededi daxil et:";
        cin>>a;
        s=s+a;
        l=l+1;

        if (m<a){
            max=a;
        }
        else if (min>0){
            min=a;
        }
   }
   double ortalama=s/l;
   cout<<"Boyuk eded:"<<max<<endl<<"Kicik eded:"<<min<<endl<<"ortalama:"<<ortalama;
    return 0;
    }





