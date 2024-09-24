#include <iostream>

int main() {
    int number;
    std::cout << "Entrez un entier positif: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Voici un sapin de Noël de hauteur " << number << ":" << std::endl;
        for (int i = 1; i <= number; ++i) {
            for (int j = 1; j <= number - i; ++j) {
                std::cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; ++k) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Veuillez entrer un entier positif." << std::endl;
    }

    return 0;
}
