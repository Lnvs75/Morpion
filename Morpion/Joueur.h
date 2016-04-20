#include <string>
using namespace std;

class Joueur
{
public:
	Joueur();
	Joueur(string username1, string username2);
	string getUsername();
	char getChoix();
	void choixDuSigne();
	void afficher();

private:
	string username1;
	string username2;
	char choix;
	bool isX = true;
	bool isO = true;
};