#include "stdafx.h"
#include "Grille.h"
#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Joueur.h"

using namespace std;

const int colMax = 3;
const int ligMax = 3;
char tabs[colMax][ligMax] = { { '1','2','3' },{ '4','5','6' },{ '7','8','9' } };

Grille::Grille()
{
}

void Grille::afficherGrille()
{
	cout << setfill('-') << setw(77) << "\n";
	cout << "|" << setfill(' ') << setw(12.5) << tabs[0][0] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(12.5) << tabs[0][1] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(12.5) << tabs[0][2] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(25) << "\n";
	cout << setfill('-') << setw(77) << "\n";

	cout << "|" << setfill(' ') << setw(12.5) << tabs[1][0] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(12.5) << tabs[1][1] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(12.5) << tabs[1][2] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(25) << "\n";

	cout << setfill('-') << setw(77) << "\n";
	cout << "|" << setfill(' ') << setw(12.5) << tabs[2][0] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(12.5) << tabs[2][1] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(12.5) << tabs[2][2] << setfill(' ') << setw(12.5) << "";
	cout << "|" << setfill(' ') << setw(25) << "\n";
	cout << setfill('-') << setw(77) << "\n";
}

void Grille::placeValue()
{
	Joueur joueurs;
	Point pt;

	/*if (tabs[0][0] == '1')
	{
	cin >> value;
	tabs[0][0] = value;
	}*/
	/*for (int i = 0; i < 3; i++)
	{
	for (int j = 0; j < 3; j++) {
	cin >> value;
	tabs[i][j] = value;
	//cout << tabs[i][j];
	afficherGrille();
	}
	}*/
	for (int i = 0; i < 9; i++)
	{
		cout << "Veuillez entrer une valeur entre 1 et 9 : ";
		cin >> value;
		if (value == '1')
		{
			cin >> value;
			tabs[0][0] = value;
			afficherGrille();
		}
		if (value == '2')
		{
			cin >> value;
			tabs[0][1] = value;
			afficherGrille();
		}
		if (value == '3')
		{
			cin >> value;
			tabs[0][2] = value;
			afficherGrille();
		}
		if (value == '4')
		{
			cin >> value;
			tabs[1][0] = value;
			afficherGrille();
		}
		if (value == '5')
		{
			cin >> value;
			tabs[1][1] = value;
			afficherGrille();
		}
		if (value == '6')
		{
			cin >> value;
			tabs[1][2] = value;
			afficherGrille();
		}
		if (value == '7')
		{
			cin >> value;
			tabs[2][0] = value;
			afficherGrille();
		}
		if (value == '8')
		{
			cin >> value;
			tabs[2][1] = value;
			afficherGrille();
		}
		if (value == '9')
		{
			cin >> value;
			tabs[2][2] = value;
			afficherGrille();
		}
	}

	/*if (pt.gagner())
	{
	pt.gagnerAvecX(joueurs.getChoix());
	}*/

}

