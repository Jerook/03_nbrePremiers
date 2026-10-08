/*
  ------------------------------------------------------------------------------
  Fichier     : nbre_1er.cpp
  Auteur(s)   : Jeroshan Jegatheeswaran
  Date        : 07.10.2026

  But         : identifier tous les nombres premiers compris
                et une valeur choisie par l'utilisateur

  Remarque(s) : les erreurs de saisie ne sont pas vérifiées

  Compilateur : gcc
  ------------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>
using namespace std;

int main() {

    const int n_col = 5;

    char recommencer;
    do {

        int limite;

        do {
            cout<<"entrer une valeur [2-1000] : "<<endl;
            cin>>limite;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // vidage du buffer après saisie
        }while(limite < 2 || limite > 1000);


        cout << "Voici la liste des nombres premiers"<<endl;

        int nbAffiche = 0;
        for (int i = 2; i <= limite; i++) {

            bool premier = true;

            for (int d = 2; d < i; d++) {
                if (i % d == 0) {
                    premier = false;
                }

            }

            if (premier == true) {
                cout << i << " ";
                ++nbAffiche;

                if (nbAffiche % n_col == 0) {
                    cout << "\n" ;
                }
            }
        }

        cout << "\n" ;
        cout << "Voulez-vous recommencer [O/N] : ";
        cin>>recommencer;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // vidage du buffer après saisie

    }while(recommencer == 'O' && recommencer != 'N');


    cout << "Fin de programme" << endl;

    return 0;

}
