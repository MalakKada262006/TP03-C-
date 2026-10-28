#ifndef COMPTE_BANCAIRE_HPP
#define COMPTE_BANCAIRE_HPP

#include <string>
#include <iostream>

class CompteBancaire {
private:
    std::string numero;
    double solde;
    std::string* historique;
    std::size_t capacite;
    std::size_t nbOps;

    void agrandirHistorique();
    void ajouterOperation(const std::string& op);

public:
    CompteBancaire();

    CompteBancaire(const std::string& num, double s);

    CompteBancaire(const CompteBancaire& other);

    CompteBancaire(CompteBancaire&& other) noexcept;

    ~CompteBancaire();

    void deposer(double montant);
    void retirer(double montant);
    void afficher() const;
};

#endif
