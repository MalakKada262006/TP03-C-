#include "CompteBancaire.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    std::cout << "=== 1. Test du constructeur paramétré et des opérations ===" << std::endl;
    CompteBancaire c1("FR123456", 500.0);
    c1.deposer(200.0);
    c1.retirer(150.0);
    c1.afficher();

    std::cout << "\n=== 2. Test du constructeur de copie ===" << std::endl;
    CompteBancaire c2 = c1;
    c2.afficher();

    std::cout << "\n=== 3. Test du constructeur de déplacement ===" << std::endl;
    CompteBancaire c3 = std::move(c1);
    c3.afficher();

    return 0;
}
