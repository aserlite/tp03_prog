#include <iostream>

int main() {
    int n;
    std::cout << "Entrez un entier positif: ";
    std::cin >> n;

    if (n > 0) {
        std::cout << "Voici un carré de côté " << n << ":" << std::endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "Veuillez entrer un entier positif." << std::endl;
    }

    return 0;
}
