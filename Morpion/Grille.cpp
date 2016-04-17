#include "stdafx.h"
#include "Grille.h"
#include <iostream>
#include <iomanip>

using namespace std;

Grille::Grille()
{
}

void Grille::afficherGrille()
{
	
	cout << setfill('-') << setw(80) << "\n";
	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "\n";
	cout << setfill('-') << setw(80) << "\n";

	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "\n";

	cout << setfill('-') << setw(80) << "\n";
	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "";
	cout << "|" << setfill(' ') << setw(25) << "\n";
	cout << setfill('-') << setw(80) << "\n";
	


}

