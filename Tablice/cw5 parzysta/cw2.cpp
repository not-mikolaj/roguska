#include <iostream>
#include <cstdlib>
#include <ctime>

// Funkcja do generowania losowych liczb całkowitych z zakresu [min, max]
int losujLiczbe(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Funkcja do sprawdzania parzystości liczby
bool czyParzysta(int liczba) {
    return liczba % 2 == 0;
}

int main() {
    srand(time(nullptr)); // Inicjalizacja generatora liczb pseudolosowych

    const int n = 10;
    int tablica[n];

    std::cout << "Losowanie liczb:" << std::endl;
    for (int i = 0; i < n; ++i) {
        tablica[i] = losujLiczbe(2, 20);
    }

    std::cout << "Parzyste liczby to: ";
    for (int i = 0; i < n; ++i) {
        if (czyParzysta(tablica[i])) {
            std::cout << tablica[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}