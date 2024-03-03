#include <iostream>

// Funkcja do znajdowania najmniejszej liczby w tablicy
int znajdzNajmniejsza(const int tablica[], int n) {
    int najmniejsza = tablica[0];
    for (int i = 1; i < n; ++i) {
        if (tablica[i] < najmniejsza) {
            najmniejsza = tablica[i];
        }
    }
    return najmniejsza;
}

// Funkcja do zliczania wystąpień danej liczby w tablicy
int zliczWystapienia(const int tablica[], int n, int szukana) {
    int licznik = 0;
    for (int i = 0; i < n; ++i) {
        if (tablica[i] == szukana) {
            licznik++;
        }
    }
    return licznik;
}

int main() {
    const int n = 8;
    int tablica[n];

    std::cout << "Wprowadź " << n << " liczb całkowitych: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> tablica[i];
    }

    int najmniejsza = znajdzNajmniejsza(tablica, n);
    int liczbaWystapien = zliczWystapienia(tablica, n, najmniejsza);

    std::cout << "Najmniejsza liczba to: " << najmniejsza << ", występuje " << liczbaWystapien << " razy." << std::endl;

    return 0;
}