#include "stdafx.h"
#include "Point.h"
#include <iostream>
#include"Joueur.h"
#include "Grille.h"

using namespace std;

const int colMax = 3;
const int ligMax = 3;

char tab[colMax][ligMax] = { { '.','.','.' },{ '.','.','.' },{ '.','.','.' } };

char x = 'x';
char o = 'o';
Joueur joueur1;
Grille grille;

Point::Point()
{

}

Point::~Point()
{
}



bool Point::gagner()
{
	return win = true;
}

void Point::afficherLeTableau() {

	/*Affichage du tableau*/
	/*for (int i = 0; i < 3; i++)
	{
	for (int x = 0; x < 3; x++)
	{
	cout << tab[x][i] << '\t';
	}
	cout << endl;
	}
	cout << endl;*/
}

void Point::modifCase(int ligne, int colonne, char signe)
{
	tab[colonne][ligne] = { signe };

}

void Point::gagnerAvecO(char signe)
{

}

void Point::diagonale(char signe)
{
	/*3 'signes' en diagonale en haut à gauche*/

	/*for (int j=0; j < 3; j++)
	{
	int i = 0;
	tab[i][j] = signe;
	i++;
	}*/
	/*3 'signes' en diagonale en haut à droite*/

	/*for (int j=0; j < 3; j++)
	{
	int i = 2;

	tab[i][j] = signe;
	i--;
	}*/
}

void Point::colonne(char signe)
{
	/*3 'signes' sur la 1ère colonne*/
	/*for (int i = 0; i < 3; i++)
	{
	int j = 0;
	tab[i][j] = signe;
	}*/
	/*3 'signes' sur la 2e colonne*/
	/*for (int i = 0; i < 3; i++)
	{
	int j = 0;
	tab[i][j] = signe;

	}*/
	/*3 'signes' sur la 3e colonne*/

	/*for (int i = 0; i < 3; i++)
	{
	int j = 0;
	tab[i][j] = signe;
	}*/
}

bool Point::ligne(char signe)
{
	signe = 'x';

	/*3 'signe' sur la 1ère ligne*/
	if (tab[0][0] == signe && tab[0][1] == signe && tab[0][2] == signe)
	{
		gagnerAvecX(signe);
	}

	/*3 'signe' sur la 2e ligne*/
	if (tab[1][0] == signe && tab[1][1] == signe && tab[1][2] == signe)
	{
		gagnerAvecX(signe);
	}

	/*3 'signe' sur la 3e ligne*/
	if (tab[2][0] == signe && tab[2][1] == signe && tab[2][2] == signe)
	{
		gagnerAvecX(signe);
	}
	return true;
}

void Point::gagnerAvecX(char signe)
{
	/*diagonale(signe);
	colonne(signe);
	ligne(signe);*/
	cout << "Bravo " << joueur1.getUsername() << ", vous avez gagne!!" << endl;
}

/*void winX() {

}*/
void Point::placerPoints(char signe)
{
	/*Placement des X ou O*/
	modifCase(0, 1, signe);
	modifCase(1, 1, signe);
	modifCase(2, 1, signe);
	afficherLeTableau();
	//gagnerAvecX(signe);
	cout << endl;

}