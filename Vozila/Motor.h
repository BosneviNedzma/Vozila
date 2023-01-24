#pragma once
#include "Vozilo.h"

class Motor :public Vozilo {
	int brojKubika;
public:
	Motor() = default;
	int getBrojKubika() const;
	void setBrojKubika(int brojKubika);
	bool oldTimer() const override;
	void ispis(ostream& out) const override;
	~Motor() override = default;
};
