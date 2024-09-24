#include <iostream>

int main() {
    int number;
    int majeur {18};

    std::cout << "Veuillez saisir un entier: ";
    std::cin >> number;

    std::cout << (number >= majeur ? "Majeur." : (number > 0 ? "Mineur." : "Menteur.")) << std::endl;


    return 0;
}
