#include "ratio.h"

Ratio::Ratio(int num, int denom)
{
	_num = num;
	_denom = denom;
}

Ratio::Ratio()
{
}

void Ratio::Saisie()
{
	cout << "Veuillez rentrer un num\x82rateur :\n";
	cin >> _num; cout << "";
	cout << "Veuillez rentrer un denominateur :\n";
	cin >> _denom; cout << "";
	while (_denom < 0) {
	cout << "Le dénominateur ne peut \x88tre négatif, réessayez : " << endl;
	cin >> _denom;
	}
}

void Ratio::Afficher()
{
	cout << "\nVotre fraction est \x82gale \x85 " << _num << " / " << _denom << "\n" << endl;
}

Ratio Ratio::Ajouter(Ratio f1, Ratio f2)
{
	cout << ((f1._num * f2._denom) + (f2._num * f1._denom)) << " / " << (f1._denom * f2._denom) << "\n" << endl;
	return Ratio(((f1._num * f2._denom) + (f2._num * f1._denom)), (f1._denom * f2._denom));
}

float Ratio::Valeur()
{
	return float(_num) / float(_denom);
}

Ratio Ratio::Multiplier(Ratio f1, Ratio f2)
{
	cout << (f1._num * f2._num) << " / " << (f1._denom * f2._denom) << "\n" << endl;
	return Ratio((f1._num * f2._num), (f1._denom * f2._denom));
}

Ratio Ratio::Diviser(Ratio f1, Ratio f2)
{
	cout << (f1._num * f2._denom) << " / " << (f2._num * f1._denom) << "\n" << endl;
	return Ratio((f1._num * f2._denom), (f2._num * f1._denom));
}

Ratio Ratio::Inverser(Ratio f3)
{
	cout << f3._denom << "/" << f3._num << "\n" << endl;
	return	Ratio(f3._denom, f3._num);
}

void Ratio::Entier()
{
	if (_num > _denom && _num % _denom == 0) {
		cout << _num / _denom << endl;
	}
	else {
		cout << "Pas d'entiers\n" << endl;
	}
}

Ratio::~Ratio()
{
}
