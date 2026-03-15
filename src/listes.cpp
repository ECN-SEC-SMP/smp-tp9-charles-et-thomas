#include "listes.h"
#include <iostream>

using namespace std;

void listeEntiersInit (list<int> &l) {
    for (int i = 0; i < 8; i++) {
        l.push_back(i);
    }
}

void afficheListeEntiers (list<int> &l) {
    for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
        cout << *it << " ";
    }
}

void listeEntiersRemove (list<int> &l, int pos) {
    l.remove(pos);
}