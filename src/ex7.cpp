#include <iostream>
#include <limits>

enum class Article { Alimentation, Vetements, Chaussures, Autre };

std::istream& operator>>(std::istream& is, Article& article)
{
    std::string articleAsString;
    is >> articleAsString;

    if (articleAsString == "Alimentation") {
        article = Article::Alimentation;
    } else if (articleAsString == "Vetements") {
        article = Article::Vetements;
    } else if (articleAsString == "Chaussures") {
        article = Article::Chaussures;
    } else if (articleAsString == "Autre") {
        article = Article::Autre;
    } else {
        is.setstate(std::ios::failbit);
    }

    return is;
}

double calculateDiscount(Article article, bool carteFidelite) {
    double discount = 0.0;

    switch (article) {
        case Article::Alimentation:
            discount = carteFidelite ? 0.08 : 0.05;
            break;
        case Article::Vetements:
            discount = carteFidelite ? 0.15 : 0.10;
            break;
        case Article::Chaussures:
            discount = carteFidelite ? 0.18 : 0.12;
            break;
        case Article::Autre:
            discount = 0.0;
            break;
    }

    return discount;
}

int main()
{
    Article article;
    double prix;
    bool carteFidelite;
    int age;

    std::cout << "Veuillez saisir le type de produit dans cette liste: \"Alimentation\", \"Vetements\", \"Chaussures\" ou \"Autre\": ";
    std::cin >> article;

    while (std::cin.fail()) {
        std::cout << " \n \n \n Erreur dans les données, veuillez respecter les attentes \n";

        std::cout << "Veuillez saisir le type de produit dans cette liste: \"Alimentation\", \"Vetements\", \"Chaussures\" ou \"Autre\": \n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> article;
    }

    if (article == Article::Alimentation) {
        std::cout << "Vous avez saisi un article de type Alimentation" << std::endl;
    } else if (article == Article::Vetements) {
        std::cout << "Vous avez saisi un article de type Vetements" << std::endl;
    } else if (article == Article::Chaussures) {
        std::cout << "Vous avez saisi un article de type Chaussures" << std::endl;
    } else if (article == Article::Autre) {
        std::cout << "Vous avez saisi un article de type Autre" << std::endl;
    }

    std::cout << "Veuillez saisir le prix de l'article: ";
    std::cin >> prix;

    while (std::cin.fail() || prix < 0) {
        std::cout << " \n \n \n Erreur dans les données, veuillez respecter les attentes : price > 0 \n";

        std::cout << "Veuillez saisir le prix de l'article: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> prix;
    }

    std::cout << "Avez-vous une carte de fidélité ? (1 pour oui, 0 pour non): ";
    std::cin >> carteFidelite;
    while (std::cin.fail() || (carteFidelite != 0 && carteFidelite != 1)) {
        std::cout << " \n \n \n Erreur dans les données, veuillez respecter les attentes : 1 or 0 \n";

        std::cout << "Avez-vous une carte de fidélité ? (1 pour oui, 0 pour non): ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> carteFidelite;
    }

    std::cout << "Veuillez saisir votre âge: ";
    std::cin >> age;
    while (std::cin.fail() || age < 0) {
        std::cout << " \n \n \n Erreur dans les données, veuillez respecter les attentes : Age > 0 \n";

        std::cout << "Veuillez saisir votre âge: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> age;
    }

    double discount = calculateDiscount(article, carteFidelite);
    double finalPrice = prix * (1 - discount);

    if (age < 26) {
        finalPrice *= 0.90; 
    }

    std::cout << "Le prix final après réduction est: " << finalPrice << " euros" << std::endl;

    return 0;
}