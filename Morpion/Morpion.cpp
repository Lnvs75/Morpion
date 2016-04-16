// Morpion.cpp�: d�finit le point d'entr�e pour l'application console.//

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
	Joueur Players("Quentin", "Loic");

	Players.afficher();
	Players.choixDuSigne();
	Players.getChoix();


	Grille grille;
	grille.afficherGrille();
	return 0;
}

void quiterLeJeu() {
	cout << "Au revoir!" << endl;
}

void aPropos() {
	cout << "Morpion cree par Quentin et Loic" << endl;
}
void menu() {
	string Menu[3] = {"Jouer", "A Propos", "Quitter"};
	int menu = 0;
	
	while(true)
	{
		system("cls");
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << " ----------------------- Morpion MENU -----------------------"<< endl;
		
		for (int i = 0; i < 3; ++i)
		{
			if (i == menu)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout << Menu[i] << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << Menu[i] << endl;
			}
		}
		
		while(true)
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
						break;
				}
				break;
			}
		}
		
		
	}
	
	
}


int main() {

	/*Pr�sentation des deux joueurs*/
	menu();

	return 0;
}