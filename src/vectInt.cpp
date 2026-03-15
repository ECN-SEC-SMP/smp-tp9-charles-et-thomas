#include "vectInt.h"
#include <iostream>

using namespace std;

void vectEntiersInit (vector<int> &v) {
    v.resize(3);
}

void vectEntiersSet (vector<int> &v, int pos, int val){
    if (pos >= 0 && pos < (int)v.size()) {
        v[pos] = val;
    }
}

void vectEntiersAdd(vector<int> &v, int val) {
    v.push_back(val);
    cout << "Valeur ajoutée : " << val << endl;
    cout << "Taille du vecteur : " << v.size() << endl;
}

void afficheVecteur(const vector<int> &v) {
    cout << "Le vecteur contient : ";
    for (int i : v)
        cout << i << " ";
    cout << endl;
}