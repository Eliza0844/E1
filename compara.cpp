#include<iostream>
using namespace std;
int main()
{
  float a,b;
  cout<<"Ingrese a  : "; cin>>a;
  cout<<"Ingrese b  : "; cin>>b;
  if(a==b){
     cout<<"Son iguales"<<endl;
  }else{
     if(a<b){
       cout<<a<<" es el menor que "<<b<<"\n";
     }else{
       cout<<b<<" es el menor que "<<a<<"\n";
     }
  }

return (0);




}
