#include <iostream>
#include <vector>

void wypiszParzyste(const std::vector<int>& liczby) {
    std::cout << "Parzyste liczby: ";
    for (int liczba : liczby) {
        if (liczba % 2 == 0) {
            std::cout << liczba << " ";
        }
    }
    std::cout << std::endl;
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
    
    wypiszParzyste(liczby);
    
    return 0;
}