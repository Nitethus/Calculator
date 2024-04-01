#include <iostream>
#include <cmath>

int main() {

    double firstNumber;
    double secondNumber;
    int choice;
    int continu;

    std::cout << "****************** KALKULAČKA ********************\n";
    do {
        std::cout << "Zadej první číslo: ";
        std::cin >> firstNumber;
        std::cout << "Zadej druhé číslo: ";
        std::cin >> secondNumber;

        std::cout << "Nyní zadej volbu výpočtu\n\n";
        std::cout << "1: Pro sčítání (+)\n2: Pro odčítání (-)\n3: Pro násobení (*)\n4: Pro dělení (/)\n: ";
        std::cin >> choice;

        switch(choice){
            case 1: std::cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << '\n';
                break;
            case 2: std::cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << '\n';
                break;
            case 3: std::cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << '\n';
                break;
            case 4: std::cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << '\n';
                break;
            default: std::cout << "Neplatná hodnota, prosím zvolte 1-4\n";
                break;
        }
        
        std::cout << "Pokud si přejete ukončit program, stisknete 2:\nJinak stiskněte 1: \n";
        std::cin >> continu;
    }while (continu != 2);
    std::cout << "Děkuji za používání programu!\n";
    std::cout << "************************** M&M ***************************";

    return 0;
}
