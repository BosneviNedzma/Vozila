#include "Automobil.h"
#include <iostream>

bool Automobil::oldTimer() const {
	return trenutnaGodina() - godinaProizvodnje > 30;
}

void Automobil::ispis(ostream& out) const {
	Vozilo::ispis(out);
	out << marka << " " << tp << " - Gorivo: ";
	switch (gorivo) {
	case Gorivo::BENZIN: out << "BENZIN"; break;
	case Gorivo::DIZEL: out << "DIZEL"; break;
	case Gorivo::ELEKTRICNO_VOZILO:out << "ELEKTRICNO VOZILO"; break;
	}
	out << endl;
}

const string& Automobil::getMarka() const {
	return marka;
}

void Automobil::setMarka(const string& marka) {
	Automobil::marka = marka;
}

const string& Automobil::getTip() const {
	return tip;
}

void Automobil::setTip(const string& tip) {
	Automobil::tip = tip;
}

Automobil::Gorivo Automobil::getGorivo() const {
	return gorivo;
}

void Automobil::setGorivo(Automobil::Gorivo gorivo) {
	Automobil::gorivo = gorivo;
}