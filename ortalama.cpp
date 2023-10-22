// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int vize1;
    int final1;
    // Write C++ code here
    std::cout << "Vize notu giriniz "; // Vize notu istendi
    std::cin >> vize1; // Vize notu değişkene atandıı
    std::cout << "Final notu giriniz "; // final notu istedi
    std::cin >> final1;
    //notlar 0-100 ile arasında mı kontrol et
    if(vize1>100 || final1>100 || vize1<0 || final1<0)
        std::cout<<"Hata -> Notlardan en az biri hatalı girildi";
    else
    {
        double ortalama=vize1*0.4+final1*0.6;
        std::cout << ortalama;
        
        if(ortalama<=49 && ortalama>0)
            std::cout << "FF";
        else if(ortalama<=59 && ortalama>49)
            std::cout << "FD";
        else if(ortalama<=64 && ortalama>59)
            std::cout << "DD";
        else if(ortalama<=69 && ortalama>64)
            std::cout << "DC";
        else if(ortalama<=74 && ortalama>69)
            std::cout << "CC";
        else if(ortalama<=79 && ortalama>74)
            std::cout << "CB"; 
        else if(ortalama<=84 && ortalama>79)
            std::cout << "BB"; 
        else if(ortalama<=89 && ortalama>84)
            std::cout << "AB"; 
        else if(ortalama<=100 && ortalama>89)
            std::cout << "AA"; 
        else
            std::cout << "Notlar yanlış verildi";
    }
    return 0;
}