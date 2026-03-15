#include "vectInt.h"
#include "listes.h"
#include <iostream>

using namespace std;

void vectEntiersTest();

void listeEntiersTest();

int main() {
    // vectEntiersTest();
    // listeEntiersTest();
    return 0;
}

void vectEntiersTest() {
    vector<int> v;
    vectEntiersInit(v);
    
    cout << "Taille du vecteur : " << v.size() << endl;

    vectEntiersSet(v, 0, 10);
    vectEntiersSet(v, 1, 20);
    vectEntiersSet(v, 2, 30);

    afficheVecteur(v);

    vectEntiersAdd(v, 40);
    afficheVecteur(v);

    // Test de la copie du vecteur
    vector<int> v2;
    //copy(v.begin(), v.end(), back_inserter(v2));
    v2.assign(v.begin(), v.end());
    cout << "Vecteur v2 après copie : ";
    afficheVecteur(v2);
}

void listeEntiersTest() {
    list<int> l;
    listeEntiersInit(l);
    afficheListeEntiers(l);
    cout << endl;

    listeEntiersRemove(l, 2);
    cout << "Liste après suppression de l'élément en position 3 : ";
    afficheListeEntiers(l);
}