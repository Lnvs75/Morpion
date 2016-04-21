#include "stdafx.h"
#include "Joueur.h"
#include <iostream>
#include <string.h>
using namespace std;

Joueur::Joueur()
{
}

Joueur::Joueur(string player1, string player2)
{
	this->username1 = player1;
	this->username2 = player2;
}

string Joueur::getUsername()
{

	return username1;
}

char Joueur::getChoix()
{
	return choix;
}

void Joueur::choixDuSigne()
{
	char lettre1 = 'X';
	char lettre2 = 'O';

	char lettre3 = 'x';
	char lettre4 = 'o';

	cout << "Tapper X ou O :" << endl;
	cin >> choix;

	/*Si il y a une erreur*/
	for (int err = 3; err > 0; err--)
	{

		if (choix != lettre1 && choix != lettre2 && choix != lettre3 && choix != lettre4)
		{
			cout << "Erreur!!" << endl;
			cout << "Il ne vous reste que " << err << " chances" << endl;
			cout << "Tapper X ou O : " << endl;
			cin >> choix;
		}
	}

	/*Si le joueur choisit X ou x*/
	if (choix == lettre1 && isX == true)
	{
		cout << username1 << " a choisi le caractere : " << choix << endl;
		cout << " Le deuxieme joueur a choisi le caractere : " << lettre2 << endl;
	}

	if (choix == lettre3 && isX == true)
	{

		cout << username1 << " a choisi le caractere : " << choix << endl;
		cout << username2 << " a choisi le caractere : " << lettre4 << endl;
	}

	/*Si le joueur choisit O ou o*/
	if (choix == lettre2 && isO == true)
	{

		cout << username1 << " a choisi le caractere : " << choix << endl;
		cout << username2 << " a choisi le caractere : " << lettre1 << endl;
	}

	if (choix == lettre4 && isO == true)
	{

		cout << username1 << " a choisi le caractere : " << choix << endl;
		cout << username2 << " a choisi le caractere : " << lettre3 << endl;
	}


}

void Joueur::afficher()
{
	cout << "Nom du joueur 1 : " << username1 << endl;
	cout << "Nom du joueur 2 : " << username2 << endl;
}