#include "Motor.h"
#include <iostream>

int Motor::getBrojKubika() const {
	return brojKubika;
}

void Motor::setBrojKubika(int brojKubika) {
	Motor::brojKubika = brojKubika;
}

bool Motor::oldTimer() const {
	return trenutnaGodina() - godinaProizvodnje > 15;
}

void Motor::ispis(ostream& out) const {
	Vozilo::ispis(out);
	out << "Broj kubika: " << brojKubika << endl;
}