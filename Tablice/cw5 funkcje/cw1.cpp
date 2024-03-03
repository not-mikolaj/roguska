#include <iostream>
#include <vector>

std::pair<int, int> znajdzNajwieksza(const std::vector<int>& liczby) {
    int najwieksza = liczby[0];
    int liczbaWystapien = 1;
    
    for (size_t i = 1; i < liczby.size(); ++i) {
        if (liczby[i] > najwieksza) {
            najwieksza = liczby[i];
            liczbaWystapien = 1;
        } else if (liczby[i] == najwieksza) {
            liczbaWystapien++;
        }
    }
    
    return std::make_pair(najwieksza, liczbaWystapien);
}

int main() {
    int n;
    std::cout << "Podaj liczbe elementow: ";
    std::cin >> n;
    
    std::vector<int> liczby(n);
    std::cout << "Podaj " << n << " liczb calkowitych: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> liczby[i];
    }
    
    std::pair<int, int> wynik = znajdzNajwieksza(liczby);
    std::cout << "Najwieksza liczba to: " << wynik.first << std::endl;
    std::cout << "Wystapila " << wynik.second << " razy." << std::endl;
    
    return 0;
}