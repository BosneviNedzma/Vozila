#pragma once

#include <vector>
#include <stdexcept>
#include "Vozilo.h"
#include "Automobil.h"
using namespace std;

class Kontejner {
	vector<Vozilo*>vozila;
public:
	Kontejner() = default;
	inline size_t operator!() {
		return vozila.size();
	}
	inline Vozilo* operator[](int index) const {
		return vozila.at(index);
	}
	void dodajAutomobil(const string& marka, const string& tip, Automobil::Gorivo gorivo, int brojTockova, int godinaProizvodnje, const string& proizvodjac);
	void dodajMotor(int brojTockova, int godinaProizvodnje, const string& proizvodjac, int brojKubika);
	inline vector<Vozilo*> sviOldTajmeri() const {
		vector<Vozilo*>pomocniVektor;
		for (const auto& vozilo : vozila)
			if (vozilo->oldTimer()) pomocniVektor.push_back(vozilo);
		return pomocniVektor;
	}
	inline ~Kontejner() {
		for (const auto& vozilo : vozila) delete vozilo;
	}

};
