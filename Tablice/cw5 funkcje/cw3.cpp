#include <iostream>
#include <vector>

void wypiszPrzedzial(const std::vector<double>& liczby) {
    std::cout << "Liczby z przedzialu [4;15]: ";
    for (double liczba : liczby) {
        if (liczba >= 4 && liczba <= 15) {
            std::cout << liczba << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Podaj liczbe elementow: ";
    std::cin >> n;
    
    std::vector<double> liczby(n);
    std::cout << "Podaj " << n << " liczb rzeczywistych: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> liczby[i];
    }
    
    wypiszPrzedzial(liczby);
    
    return 0;
}