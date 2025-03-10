#include <iostream>
#include <iomanip>

int main() {
    double N1, N2, N3, N4;
    std::cin >> N1 >> N2 >> N3 >> N4;

    double media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;

    std::cout << "Media: " << std::fixed << std::setprecision(1) << media << std::endl;

    if (media >= 7.0) {
        std::cout << "Aluno aprovado." << std::endl;
    } else if (media < 5.0) {
        std::cout << "Aluno reprovado." << std::endl;
    } else {
        std::cout << "Aluno em exame." << std::endl;

        double nota_exame;
        std::cin >> nota_exame;
        std::cout << "Nota do exame: " << std::fixed << std::setprecision(1) << nota_exame << std::endl;

        double nova_media = (media + nota_exame) / 2;

        if (nova_media >= 5.0) {
            std::cout << "Aluno aprovado." << std::endl;
        } else {
            std::cout << "Aluno reprovado." << std::endl;
        }

        std::cout << "Media final: " << std::fixed << std::setprecision(1) << nova_media << std::endl;
    }

    return 0;
}