#include <iostream>

int main() {
    int number;
    std::cout << "Veuillez saisir un entier: ";
    std::cin >> number;

    std::cout << (number > 0 ? "L'entier est positif." : (number < 0 ? "L'entier est négatif." : "L'entier est zéro.")) << std::endl;

    return 0;
}
