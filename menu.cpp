#include <iostream>
#include <string>
#include "menu.h"
#include "encryption.h"
#include "keystream.h"

void menu()
{
    char x;
    std::cin >> x;
    std::string slowo;
    std::string klucz;
    int dlugosc;
    
    switch(x)
    {
        case 'i':     
            std::cout << "i - podaj slowo" <<std::endl;
            std::cin >> slowo;
            std::cin >> klucz;
            std::cout << encrypt(slowo, klucz);
            break;
        case 'w':
            std::cout << "keytostream"<<std::endl;
            std::cin >> slowo;
            std::cin >> dlugosc;
            key_to_stream(slowo, dlugosc);
            break;
        case 'k':
            std::cout << "k";
            break;
        case 'o':
            std::cout << "o";
            break;
        default:
            menu();
            break;
    }
}