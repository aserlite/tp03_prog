#include <iostream>

int main() {
    int number;
    std::cout << "Veuillez saisir un entier: ";
    std::cin >> number;
    
    if (number % 2 == 0) {
        std::cout << "Le nombre est pair." << std::endl;
        std::cout << "Les nombres pairs positifs inférieurs à " << number << " sont: ";
        for (int i = 2; i < number; i += 2) {
            std::cout << i << " ";
        }
    } else {
        std::cout << "Le nombre est impair." << std::endl;
        std::cout << "Les nombres impairs positifs inférieurs à " << number << " sont: ";
        for (int i = 1; i < number; i += 2) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
