#include "ratio.h"

int main() {
	Ratio f1;
	Ratio f2;

	cout << "Bienvenue !\n";
	f1.Saisie();
	f1.Afficher();
	f2.Saisie();
	f2.Afficher();

	cout << "Votre addition :\n";
	Ratio f3 = Ratio::Ajouter(f1, f2);
	cout << "L'inverse de l'addition :\n";
	Ratio::Inverser(f3);
	cout << "Sa valeur approch\x82\e :\n" << endl;
	cout << f3.Valeur(); cout << "\n" << endl;
	cout << "Son entier si possible :\n" << endl;
	f3.Entier();
	cout << "Votre multiplication :\n";
	Ratio::Multiplier(f1, f2);
	cout << "Votre division :\n";
	Ratio::Diviser(f1, f2);	
}