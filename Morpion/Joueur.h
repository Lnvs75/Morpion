#include <string>
using namespace std;

class Joueur
{
public:
	Joueur(string username1, string username2);
	string getUsername();
	string getChoix();
	void choixDuSigne();
	void afficher();

private:
	string username1;
	string username2;
	string choix;
	bool isX = true;
	bool isO = true;
};