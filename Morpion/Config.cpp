#include "stdafx.h"
#include "Config.h"
#include <iostream>
#include <iomanip>
#include "Joueur.h"
#include "Grille.h"
#include "Point.h"
#include <limits>
#include <string>
#include <windows.h>

Config::Config()
{
}


Config::~Config()
{
}

int Config::jeu() {
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

void Config::quitterLeJeu() {
	int pause;
	cout << "Au revoir!" << endl;

	return;
}
void Config::aPropos() {
	int pause;
	cout << "Morpion cree par Quentin et Loic" << endl;
	cin >> pause;

}

void Config::menu() {
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
					quitterLeJeu();
					return;
					break;
				}
				break;
			}
		}
	}
}