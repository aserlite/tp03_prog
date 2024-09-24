#include <iostream>

int main() {
    int number;
    int sum = 0;
    int count = 0;

    std::cout << "Entrez un nombre positif ou un entier négatif pour terminer: ";
    while (true) {
        std::cin >> number;
        if (number < 0) {
            break;
        }
        sum += number;
        count++;
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        std::cout << "somme: " << sum << std::endl;
        std::cout << "moyenne: " << average << std::endl;
    } else {
        std::cout << "Pas de résultat." << std::endl;
    }
    return 0;
}
