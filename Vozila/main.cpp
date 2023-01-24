#include <iostream>
#include "Kontejner.h"
using namespace std;

inline int main() {
	cout << "1. Dodavanje automobila\n";
	cout << "2. Dodavanje motora\n";
	cout << "3. Broj elemenata u kontejneru\n";
	cout << "4. Ispis vozila po indeksu\n";
	cout << "5. Ispis svih old tajmera iz kontejnera\n";
	cout << "0. Izlaz\nIzbor: ";
	int izbor = 0;
	do {
		cin >> izbor;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>max());
		}
	} while (izbor < 0 || izbor>5);
	return izbor;
}

int main() {
	Kontejner kontejner;
	int izbor;
	while ((izbor = meni())) {
		cin.ignore();
		switch (izbor) {
		case 1:
			cout << "Unesite marku automobila: ";
			string marka;
			getline(cin, marka);

			cout << "Unesite tip automobila: ";
			string tip;
			getline(cin, tip);

			cout << "Unesite ime proizvodjaca automobila: ";
			string proizvodjac;
			getline(cin, proizvodjac);

			int brojTockova, godinaProizvodnje;
			cout << "Unesite broj tockova automobila: ";
			cin >> brojTockova;
			cout << "Unesite godinu proizvodnje automobila: ";
			cin >> godinaProizvodnje;

			int gorivaIndex;
			cout << "Unesite tip goriva autobobila (0 - DIZEL, 1 - BENZIN, 2 ELEKTRICNO VOZILO): ";
			do {
				cin >> gorivaIndex;
			} while (gorivaIndex < 0 || gorivaIndex>2);
			Automobil::Gorivo gorivo;
			switch (gorivaIndex) {
			case 0:gorivo = Automobil::Gorivo::DIZEL; break;
			case 1:gorivo = Automobil::Gorivo::BENZIN; break;
			case 2:gorivo = Automobil::Gorivo::ELEKTRICNO_VOZILO; break;
			default: gorivo = Automobil::Gorivo::DIZEL; break;
			}
			Kontejner.dodajAutomobil(marka, tip, gorivo, brojTockova, godinaProizvodnje, proizvodjac);
			break;
		}
		case 2:
			cout << "Unesite ime proizvodjaca motora: ";
			string proizvodjac;
			getline(cin, proizvodjac);

			int brojTockova, godinaProizvodnje, brojKubika;
			cout << "Unesite broj tockova motora: ";
			cin >> brojTockova;
			cout << "Unesite godinu proizvodnje motora: ";
			cin >> godinaProizvodnje;
			cout << "Unesite broj kubika motora: ";
			cin >> brojKubika;

			kontejner.dodajMotor(brojTockova, godinaProizvodnje, proizvodjac, brojKubika);
			break;
	}
	case 3: {
		cout << "Uneseno je " << !kontejner << " vozila!\n";
		break;
	}
	case 4: {
		try {
			cout << "Unesite indeks vozila za ispis: ";
			int index;
			cin >> index;
			kontejner[index]->ispis(cout);
		}
		catch (...) {
			cout << "Neispravan indeks ili nepoznata greska!\n";
		}
		break;
	}
	case 5: {
		vector<Vozilo*>oldTajmeri () = kontejner.sviOldTajmeri();
		if (oldTajmeri.empty()) {
			cout << "Nema unesenih old tajmera\n";
			break;
		}
		cout << "Old tajmeri u kontejneru su:\n";
		for (const auto& vozilo : oldTajmeri) vozilo->ispis(cout);
		break;
	}
	default: {
		cout << "Pogresan izbor!\n";
		break;
	}
}}
return 0;
}