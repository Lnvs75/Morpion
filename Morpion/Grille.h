#include <string>

using namespace std;


class Grille
{
public:
	Grille();
	void afficherGrille();
	void placeValue();
	void winWithX(char signe);
	void winWithO(char signe);
private:
	char value;
	bool winning = false;

};

