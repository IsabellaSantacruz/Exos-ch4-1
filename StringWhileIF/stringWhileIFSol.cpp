// trouver toutes les positions  du 
// caractère espace dans une phrase 
// utiliser while
// et for 

# include<iostream>
#include<string>

using namespace std;
int main()
{
	cout << "Donner une phrase";
	string phrase;
	getline(cin, phrase);
	int position = phrase.find(" ", 0);
	int positionNouvelle;
	while (position != -1)
	{
		cout << position << endl;
		positionNouvelle = phrase.find(" ", position + 1);
		position = positionNouvelle;
	}
	for (int i = 0; i < phrase.length(); i++)
	{
		if (phrase[i] == ' ')
			cout << i << endl;
	}
	return 0;
}