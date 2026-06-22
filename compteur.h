#ifndef COMPTEUR_H
#define COMPTEUR_H



 
class compteur
{
    private:
        int valeur;

    public:
        compteur();
        ~compteur();

    void clic();
    void raz();
    void afficheValeur();
};
#endif