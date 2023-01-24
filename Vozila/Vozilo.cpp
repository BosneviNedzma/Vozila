#include "Vozilo.h"
#include <iostream>
#include <ctime>
using namespace std;

int Vozilo::getGodinaProizvodnje() const {
	return godinaProizvodnje;
}

void Vozilo::setGodinaProizvodnje(int godinaProizvodnje) {
	Vozilo::godinaProizvodnje = godinaProizvodnje;
}

int Vozilo::getBrojTockova() const {
	return brojTockova;
}

void Vozilo::setBrojTockova(int brojTockova) {
	Vozilo::brojTockova = brojTockova;
}

const string &Vozilo::getProizvodjac() const {
	return proizvodjac;
}

void Vozilo::setProizvodjac(const string &proizvodjac) {
	Vozilo::proizvodjac = proizvodjac;
}

void Vozilo::ispis(ostream& out) const {
	out << proizvodjac << " (" << godinaProizvodnje << ") - " << brojTockova << "-tockas\n";
}

int Vozilo::trenutnaGodina() {
	const time_t time = time(nullptr);
	struct tm* tm = localtime(&time);
	return tm->tm_year + 1900;
}