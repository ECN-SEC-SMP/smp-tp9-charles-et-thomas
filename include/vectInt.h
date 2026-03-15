#include <vector>

using namespace std;

/**
 * @brief Initialise un vecteur d'entiers avec une taille de 3 éléments.
 * 
 * @param v //Vecteur à initialiser
 */
void vectEntiersInit (vector<int> &v);

/**
 * @brief Définit la valeur d'un élément du vecteur à une position donnée.
 * 
 * @param v //Vecteur à modifier
 * @param pos //Position de l'élément à modifier
 * @param val //Nouvelle valeur à assigner à l'élément
 */
void vectEntiersSet (vector<int> &v, int pos, int val);

/**
 * @brief Ajoute une valeur à la fin du vecteur.
 * 
 * @param v //Vecteur à modifier
 * @param val //Valeur à ajouter
 */
void vectEntiersAdd(vector<int> &v, int val);

/**
 * @brief Affiche le contenu du vecteur.
 * 
 * @param v //Vecteur à afficher
 */
void afficheVecteur(const vector<int> &v);