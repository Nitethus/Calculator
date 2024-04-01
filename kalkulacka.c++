#include <iostream>
#include <string>

int main(){

    std::cout << "Vítejte v kalkulačce" << '\n';
    std::cout << "Zadejte první čílo: ";
    float a;
    std::cin >> a;
    std::cout << "Zadejte druhé číslo: ";
    float b;
    std::cin >> b;
    float soucet = a + b;
    float rozdil = a - b;
    float soucin = a * b;
    float podil = a / b;
    std::cout << "Součet: " << soucet << '\n';
    std::cout << "Rozdíl " << rozdil << '\n';
    std::cout << "Součin " << soucin << '\n';
    std::cout << "Podíl " << podil << '\n';
    std::cout << "Děkuji za použití kalkulačky, aplikaci ukončíte libivolnou klávesou." << '\n';
    std::cin.get(); std::cin.get();

    return 0;
}