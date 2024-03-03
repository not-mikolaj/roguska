#include <iostream>

int main() {
    const int m = 8; // Rozmiar tablicy
    float tablicaRzeczywista[m];

    std::cout << "Wprowadź " << m << " liczb rzeczywistych: ";
    for (int i = 0; i < m; ++i) {
        std::cin >> tablicaRzeczywista[i];
    }

    std::cout << "Liczby po zamianie ujemnych na zera: ";
    for (int i = 0; i < m; ++i) {
        if (tablicaRzeczywista[i] < 0) {
            tablicaRzeczywista[i] = 0;
        }
        std::cout << tablicaRzeczywista[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}