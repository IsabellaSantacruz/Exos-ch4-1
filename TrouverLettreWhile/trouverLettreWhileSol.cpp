// lire une phrase
// afficher chaque lettre sur une ligne
// trouver si la lettre z est dans la  phrase
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string phrase;
	char lettre = 'z';
	int i = 0;
	cout << "Veuillez entrer une phrase" << endl;
	getline(cin, phrase);

	for (i = 0; i < phrase.size(); i++)
		cout << phrase[i] << endl;
	i = 0;

	while ((i < phrase.size()) && (phrase[i] != lettre))

		i++;

	if (i  < phrase.size())

		cout << "La position de z est " << i << endl;
	else
		cout << " la lettre est introuvable" << endl;

	return 0;
}