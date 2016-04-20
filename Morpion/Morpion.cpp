// Morpion.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <limits>

#include "Joueur.h"
#include "Grille.h"
#include "Point.h"

using namespace std;

int jeu() {
	/*Présentation des deux joueurs*/
	Joueur Players("Quentin", "Loic");
	Players.afficher();
	Players.choixDuSigne();

	Point point;

	Grille grille;
	grille.afficherGrille();
	grille.placeValue();

	return 0;
}
void quiterLeJeu() {
	cout << "Au revoir!" << endl;
}

void aPropos() {
	cout << "Morpion cree par Quentin et Loic" << endl;
}
void menu() {
	int menu;
	cout << endl << " ----------------------- Morpion MENU -----------------------" << endl << endl;
	do {
		cout << "1. Jouer" << endl;
		cout << "2. A Propos" << endl;
		cout << "3. Quiter" << endl;
		cout << "Choix : " << endl;
		cin >> menu;
		cout << endl;

		switch (menu)
		{
		case 0:
			break;

		case 1:
			jeu();
			break;
		case 2:
			aPropos();
			break;
		case 3:
			quiterLeJeu();
			break;
		}


	} while (menu != 3 && menu != 1);
}

int main() {
	menu();

	return 0;
}