using namespace std;
#include "compteur.h"
#include <iostream>
#include <string>

int main()
{
    compteur c1;

    c1.clic();
    c1.afficheValeur();
    c1.raz();
    c1.afficheValeur();
    c1.clic();
    c1.clic();
    c1.afficheValeur();


    return 0;
}