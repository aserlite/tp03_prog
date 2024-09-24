#include <iostream>

int main() {
    int number;
    std::cout << "Entrez un entier positif: ";
    std::cin >> number;

    if (number > 0) {
        for (int i = 1; i <= number; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Veuillez entrer un entier positif." << std::endl;
    }
    return 0;
}
