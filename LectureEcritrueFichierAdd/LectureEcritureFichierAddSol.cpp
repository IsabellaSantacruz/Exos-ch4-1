// lire un fichier  poeme.txt
// afficher le contenu
// ajout de ligne dans le fichier

// relire le fichier
// et  si le premier caractère de la ligne est une voyelle
//  stocker la  ligne dans le fichier voyelle.txt
// sinon   stocker la ligne dans le fichier consonne.txt

# include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{  // afficher les accents
	setlocale(LC_ALL, "");
	ifstream lecture;
	string phrase;
	fstream fichierAjouter;
	lecture.open("poeme.txt");
	if (!lecture.fail())
	{
		while (!ws(lecture).eof())
		{
			getline(lecture, phrase);
			cout << phrase << endl;
		}
		lecture.close();

		fichierAjouter.open("poeme.txt", ios::app);
		cout << "ajout d'une ligne" << endl;
		getline(cin, phrase);
		fichierAjouter << endl << phrase << endl;
		fichierAjouter.close();


		ofstream  fichierVoy, fichierCons;
		lecture.open("poeme.txt");
		fichierVoy.open("voyelle.txt");
		fichierCons.open("consonne.txt");
		while (!ws(lecture).eof())
		{
			getline(lecture, phrase);
			if (tolower(phrase[0]) == 'a' || tolower(phrase[0]) == 'e' ||
				tolower(phrase[0]) == 'i' || tolower(phrase[0]) == 'o' ||
				tolower(phrase[0]) == 'u' || tolower(phrase[0]) == 'y')
				fichierVoy << phrase << endl;
			else
				fichierCons << phrase << endl;

		}
	}
	else

		cout << "le fichier n'existe pas" << endl;
	
	
	
	

	return 0;
}
