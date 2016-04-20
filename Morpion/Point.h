#include <string>
//#include"Joueur.h"

using namespace std;

class Point
{
public:
	Point();
	~Point();
	void placerPoints(char signe);
	void afficherLeTableau();
	void modifCase(int ligne, int colonne, char signe);
	void gagnerAvecX(char signe);
	void gagnerAvecO(char signe);

	void diagonale(char signe);
	void colonne(char signe);
	void ligne(char signe);
	bool gagner();
	//void winX();

private:
	//Joueur player;
	int abscisse;
	int ordonnee;
	bool win = false;

};

