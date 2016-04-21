#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Joueur.h"
#include "Grille.h"
#include "Point.h"
#include "Config.h"
#include <limits>
#include <string>
#include <windows.h>

using namespace std;

int main() {
	Config config;
	/*Présentation des deux joueurs*/
	config.menu();
	return 0;
}

/*
	int pause;
	string input;
	Présentation des deux joueurs
	Joueur Players("Quentin", "Loic");
	Players.afficher();
	Players.choixDuSigne();

	Point point;

	Grille grille;
	grille.afficherGrille();
	grille.placeValue();

	cin >> pause;
	return 0;
*/