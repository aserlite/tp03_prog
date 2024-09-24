#include <iostream>

int syracuse(int n) {
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    std::cout << "Entrez un entier positif: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "L'entier doit être positif." << std::endl;
        return 1;
    }

    int result = syracuse(n);
    std::cout << "Nombre de termes nécessaires pour atteindre 1: " << result << std::endl;

    return 0;
}