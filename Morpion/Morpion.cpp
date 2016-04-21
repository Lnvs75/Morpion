#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Joueur.h"
#include "Grille.h"
#include "Point.h"
#include <limits>
#include <string>
#include <windows.h>

using namespace std;

int jeu() {
	int pause;
	string input;
	Joueur Players("Quentin", "Loic");
	Players.afficher();
	Players.choixDuSigne();

	Point point;

	Grille grille;
	grille.afficherGrille();
	grille.placeValue();
	cin >> pause;

	return 0;
}

void quiterLeJeu() {
	int pause;
	cout << "Au revoir!" << endl;

	return;
}

void aPropos() {
	int pause;
	cout << "Morpion cree par Quentin et Loic" << endl;
	cin >> pause;

}
void menu() {
	string Menu[3] = { "Jouer", "A Propos", "Quitter" };
	int menu = 0;

	while (true)
	{

		system("cls");


		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << " ----------------------- Morpion MENU -----------------------" << endl;

		int i;
		for (i = 0; i < 3; ++i)
		{
			if (i == menu)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout << Menu[i] << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << Menu[i] << endl;
			}
		}
		i = 0;

		while (true)
		{
			if (GetAsyncKeyState(VK_UP) != 0)
			{
				menu -= 1;
				if (menu == -1)
				{
					menu = 2;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				menu += 1;
				if (menu == 3)
				{
					menu = 0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0)
			{
				switch (menu)
				{
				case 0:
					jeu();
					break;
				case 1:
					aPropos();

					break;
				case 2:
					quiterLeJeu();
					return;
					break;
				}
				break;
			}
		}


	}


}


int main() {

	/*Présentation des deux joueurs*/
	menu();
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