// lecture d'un fichier Valeur.txt
// afficher  le contenu
// vérifier l'existence du fichier

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	ifstream  lecture;
	int entier;
	lecture.open("valeur.txt");
	if (!lecture.fail())
	{
		while (!ws(lecture).eof())
		{
			lecture >> entier;
			cout << entier << endl;

		}
	}
	else
		cout << " le fichier n'existe pas " << endl;
	return 0;
}
