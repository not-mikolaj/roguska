#include <iostream>
#include <vector>

void zastapUjemne(std::vector<double>& liczby) {
    for (double& liczba : liczby) {
        if (liczba < 0) {
            liczba = 0;
        }
    }
}

void wypiszTablice(const std::vector<double>& liczby) {
    std::cout << "Liczby w tablicy: ";
    for (double liczba : liczby) {
        std::cout << liczba << " ";
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
    
    zastapUjemne(liczby);
    wypiszTablice(liczby);
    
    return 0;
}