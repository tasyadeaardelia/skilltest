#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;


string textWrap(string str, int location) {
    // your other code
    int n = str.rfind(' ', location);
    if (n != std::string::npos) {
        str.at(n) = '\n';
    }
    // your other code
    return str;
}

int main()
{
    string resto_name, cahsier_name;
    string item[15];
    int price[15];
    char again = 'Y';
    int i = 0;
    int total = 0;
    auto  time = std::time(nullptr);
    
    
    cout << "Masukkan nama restoran : ";
    getline(cin,resto_name);
    cout << "Masukkan nama kasir : ";
    getline(cin, cahsier_name);
     while(again == 'y' || again == 'Y') {
        cout << "Masukkan item : ";
        cin>>item[i];
        cout<<"Harga : Rp.";
        cin>>price[i];
        
        cout<<"Input lagi? (Ketik y, untuk input lagi. Ketik sembarang untuk selesai)";
        cin>>again;
        i++;
     }
     
     
    system("cls");
    
    cout << textWrap(resto_name, 30);
    cout << "\n";
    cout << put_time(localtime(&time), "%F %T%z"); // ISO 8601 format.
    cout << "\n";
    cout << "Nama Kasir : " << textWrap(cahsier_name, 30);
    cout << "\n";
    cout << "==============================\n";
    for(int j = 0; j < i; j++){
        cout<<item[j]<<"......................"<<"Rp."<<price[j]<<"\n";
        total = total + price[j];
    }
    cout << "Total "<<"......................."<<"Rp"<<total<<"\n";
    
    
    return 0;
}
