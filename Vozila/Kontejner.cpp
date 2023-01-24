#include "Kontejner.h"
#include "Motor.h"

void
Kontejner::dodajAutomobil(const std::string& marka, const std::string& tip, Automobil::Gorivo gorivo, int brojTockova,
    int godinaProizvodnje, const std::string& proizvodjac) {
    auto* automobil = new Automobil();
    automobil->setMarka(marka);
    automobil->setTip(tip);
    automobil->setGorivo(gorivo);
    automobil->setBrojTockova(brojTockova);
    automobil->setGodinaProizvodnje(godinaProizvodnje);
    automobil->setProizvodjac(proizvodjac);
    vozila.push_back(automobil);
}

void Kontejner::dodajMotor(int brojTockova, int godinaProizvodnje, const std::string& proizvodjac, int brojKubika) {
    auto* motor = new Motor();
    motor->setBrojKubika(brojKubika);
    motor->setBrojTockova(brojTockova);
    motor->setGodinaProizvodnje(godinaProizvodnje);
    motor->setProizvodjac(proizvodjac);
    vozila.push_back(motor);
}