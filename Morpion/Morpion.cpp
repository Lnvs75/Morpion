// Morpion.cpp : définit le point d'entrée pour l'application console.//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Joueur.h"
#include "Grille.h"
#include <limits>

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int jeu() {
	int pause;
	string input;
	Joueur Players("Quentin", "Loic");

	Players.afficher();
	Players.choixDuSigne();
	Players.getChoix();


	Grille grille;
	grille.afficherGrille();
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
	system("cls");
}
int menu() {

	string Menu[3] = { "Jouer", "A Propos", "Quitter" };
	int pointer = 0;

	while (true)
	{
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		cout << "----------------------------------------------------------------" << endl;
		cout << "-------------------------- MORPION MENU ------------------------" << endl;
		cout <<	"----------------------------------------------------------------" << endl;

		for (int i = 0; i < 3; ++i)
		{
			if (i == pointer)
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

		while (true)
		{
			if (GetAsyncKeyState(VK_UP) != 0)
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 2;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				pointer += 1;
				if (pointer == 3)
				{
					pointer = 0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0)
			{
				switch (pointer)
				{
				case 0:
				{
					cout << "\n\n\nLancement d'une Nouvelle Partie"<< endl;
					jeu();
					
				} break;
				case 1:
				{
					aPropos();
					menu();
				} break;
				case 2:
				{
					quiterLeJeu();
					return 0;
				} break;
				}
				break;
			}
		}

		
	}

	return 0;
	
}


int main() {

	/*Présentation des deux joueurs*/
	menu();
	return 0;
}
