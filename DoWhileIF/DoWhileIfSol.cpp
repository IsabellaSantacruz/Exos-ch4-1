// demander  � l'usager une valeur 
// si la valeur est paire 
// faire l'addition
// tant que l'usager veut continuer 

#include <iostream>
using namespace std;


void main(void)
{
	
	char reponse = 'o';				//Pour stocker la r�ponse de l'utilisateur
	int nombre;						//Pour stocker le nombre entr� par l'utilisateur
	int somme = 0;					//Pour stocker la somme (initialis�e � 0)

	//R�p�ter
	do
	{
		//Demander et obtenir un nombre entier
		cout << "Rentre un nombre entier: ";
		cin >> nombre;

		//Calculer et afficher la nouvelle somme
		if (nombre % 2 == 0)
			somme += nombre;
		

		//Demander � l'utilisateur si il veut continuer
		cout << "Voulez vous entrer un autre nombre ? (o/n) ";
		cin >> reponse;
	} while (reponse == 'o');			//Tant que l'utilisateur veut continuer
	cout << "La  somme est:" << somme << endl;


}