#include <iostream>
#include <vector>

void wypiszParzysteIndeksy(const std::vector<double>& liczby) {
    std::cout << "Liczby o parzystych indeksach: ";
    for (size_t i = 0; i < liczby.size(); i += 2) {
        std::cout << liczby[i] << " ";
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
    
    wypiszParzysteIndeksy(liczby);
    
    return 0;
}