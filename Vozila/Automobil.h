#pragma once
#include "Vozilo.h"
using namespace std;

class Automobil :public Vozilo {
	string marka, tip;
public:
	enum class Gorivo {	DIZEL, BENZIN, ELEKTRICNO_VOZILO};
	Automobil() = default;
	void ispis(ostream& out) const override;
	bool oldTimer() const override;
	const string& getMarka() const;
	void setMarka(const string& marka);
	const string& getTip() const;
	void setTip(const string &tip);
	Gorivo getGorivo() const;
	void setGorivo(Gorivo gorivo);
	~Automobil() override = default;
private:
	Gorivo gorivo;
};