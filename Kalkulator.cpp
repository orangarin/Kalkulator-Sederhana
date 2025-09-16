#include <iostream>
#include <string>

using namespace std;
  int main (){
  int bilangan1, bilangan2, pilihan;
  float hasil;
  char operasi;
  
  cout<<"KALKULATOR SEDERANA"<<endl;
  cout<<endl;
  cout<<"PILIH MENU OPERASI"<<endl;
  cout<<"1. PENJUMLAHN"<<endl;
  cout<<"2. PENGURANGAN"<<endl;
  cout<<"3. PERKALIAN"<<endl;
  cout<<"4. PEMBAGIAN"<<endl;
  cout<<"5. MODULUS"<<endl;
  cout<<endl;
  
  cout<<"MASUKKAN PILIHAN"<<endl;
  cin>>pilihan;
  
  cout<<"MASUKKAN BILANGAN PERTAMA"<<endl;
  cin>>bilangan1;
  
  cout<<"MASUKKAN BILANGAN KEDUA"<<endl;
  cin>>bilangan2;
  
  switch(pilihan){
    case 1 : hasil=bilangan1+bilangan2;
             operasi='+';
             break;
    case 2 : hasil=bilangan1-bilangan2;
             operasi='-';
             break;
    case 3 : hasil=bilangan1*bilangan2;
             operasi='*';
             break;
    case 4 : hasil=bilangan1/bilangan2;
             operasi='/';
             break;
    case 5 : hasil=bilangan1%bilangan2;
             operasi='%';
             break;
    default : cout<<"SALAH MEMASUKKAN OPERASI"<<endl;
    
  }
  
  
  cout<<"__________________"<<endl;
  cout << bilangan1 << " " << operasi << " " << bilangan2 << " = " << hasil << endl;
  
}

