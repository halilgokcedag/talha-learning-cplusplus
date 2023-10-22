// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int vize1;
    int final1;
    // Write C++ code here
    cout << "Vize notu giriniz "<< endl;; // Vize notu istendi
    cin >> vize1; // Vize notu değişkene atandıı
    cout << "Final notu giriniz "<< endl;; // final notu istedi
    cin >> final1;
    //notlar 0-100 ile arasında mı kontrol et
    if(vize1>100 || final1>100 || vize1<0 || final1<0)
        cout<<"Hata -> Notlardan en az biri hatalı girildi";
    else
    {
        double ortalama=vize1*0.4+final1*0.6;
        cout << ortalama << endl;
        
        if(ortalama<=49 && ortalama>0)
            cout << "FF";
        else if(ortalama<=59 && ortalama>49)
            cout << "FD";
        else if(ortalama<=64 && ortalama>59)
            cout << "DD";
        else if(ortalama<=69 && ortalama>64)
            cout << "DC";
        else if(ortalama<=74 && ortalama>69)
            cout << "CC";
        else if(ortalama<=79 && ortalama>74)
            cout << "CB"; 
        else if(ortalama<=84 && ortalama>79)
            cout << "BB"; 
        else if(ortalama<=89 && ortalama>84)
            cout << "AB"; 
        else if(ortalama<=100 && ortalama>89)
            cout << "AA"; 
        else
            cout << "Notlar yanlış verildi";
        cout << endl;
    }
    
    // İkinci dersin notları için
    cout << "Vize notu giriniz "<< endl;; // Vize notu istendi
    cin >> vize1; // Vize notu değişkene atandıı
    cout << "Final notu giriniz "<< endl;; // final notu istedi
    cin >> final1;
    //notlar 0-100 ile arasında mı kontrol et
    if(vize1>100 || final1>100 || vize1<0 || final1<0)
        cout<<"Hata -> Notlardan en az biri hatalı girildi";
    else
    {
        double ortalama=vize1*0.4+final1*0.6;
        cout << ortalama << endl;;
        
        if(ortalama<=49 && ortalama>0)
            cout << "FF";
        else if(ortalama<=59 && ortalama>49)
            cout << "FD";
        else if(ortalama<=64 && ortalama>59)
            cout << "DD";
        else if(ortalama<=69 && ortalama>64)
            cout << "DC";
        else if(ortalama<=74 && ortalama>69)
            cout << "CC";
        else if(ortalama<=79 && ortalama>74)
            cout << "CB"; 
        else if(ortalama<=84 && ortalama>79)
            cout << "BB"; 
        else if(ortalama<=89 && ortalama>84)
            cout << "AB"; 
        else if(ortalama<=100 && ortalama>89)
            cout << "AA"; 
        else
            cout << "Notlar yanlış verildi";
        cout << endl;
    }
    
    return 0;
}