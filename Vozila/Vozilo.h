#pragma once
#include <string>
using namespace std;

class Vozilo {
protected:
	int godinaProizvodnje, brojTockova;
	string proizvodjac;

public:
	Vozilo() = default;
	static int trenutnaGodina();
	int getGodinaProizvdnje() const;
	void setGodinaProizvodnje(int godinaProizvodnje);
	int getBrojTockova() const;
	void setBrojTockova(int brojTockova);
	const string& getProizvodjac() const;
	void setProizvodjac(const string& proizvodjac);
	virtual void ispis(ostream& out) const;
	virtual bool oldTimer() const = 0;
	virtual ~Vozilo() = default;
};
