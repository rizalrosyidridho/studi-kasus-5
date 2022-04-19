#include <iostream>
using namespace std;
 int main(){
    string nm,pd,matkul;
    long int nim;
    int a,mk,sks;
   int dis1, dis2;
    int total,ts=0,tarif=120000;
    cout<<" Nama      : ";cin>>nm;
    cout<<" NIM       : ";cin>>nim;
    cout<<" Prodi     : ";cin>>pd;
    cout<<"----------------------------------------"<<endl;
    cout<<" Input Jumlah matkul : ";cin>>mk;
    cout<<"----------------------------------------"<<endl;

    for (a=0; a<mk; a++){
        cout<<" Matkul      : ";cin>>matkul;
        cout<<" sks : ";cin>>sks;
        ts+=sks;
    }
    total=tarif*ts;
    cout<<"----------------------------------------"<<endl;
    cout<<" Total SKS       : ";cout<<ts<<endl;
   dis1= total*0.1;
   total-=dis1;
   dis2=total*0.05;
   total-=dis2;
    
    cout<<" Total Tarif SKS : ";cout<<total<<endl;   
  ;
    cout<<"----------------------------------------"<<endl;
}
