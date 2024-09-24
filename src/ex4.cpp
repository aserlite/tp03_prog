#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    int number;
    std::srand(std::time(nullptr));
    int random_variable { std::rand() % 100 + 1 }; // Génère un nombre entre 1 et 100

    std::cout << "Devinez le nombre entre 1 et 100: ";

    do {
        std::cin >> number;
        if (number > random_variable) {
            std::cout << "Trop haut! Essayez encore: ";
        } else if (number < random_variable) {
            std::cout << "Trop bas! Essayez encore: ";
        } else {
            std::cout << "Félicitations! Vous avez deviné le bon nombre." << std::endl;
        }
    } while (number != random_variable);

    return 0;
}
