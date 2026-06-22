using namespace std;
#include "compteur.h"
#include <iostream>

compteur::compteur()
{
    valeur = 0;
}

compteur::~compteur()
{
}

void compteur::clic()
{
    valeur++;
}

void compteur::raz()
{
    valeur = 0;
}

void compteur::afficheValeur()
{
    cout << "Valeur : " << valeur << endl;
}