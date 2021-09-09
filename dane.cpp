#include "dane.h"


void dane::setZysk()
{
    this->zysk = this->przychod-this->koszta;
}
void dane::setPrzychod(double p)
{
    this->przychod = p;
}
void dane::setKoszta(double k)
{
    this->koszta = k;

}
void dane::setNazwa(string n)
{
    this->nazwa = n;
}
void dane::setMiasto(string m)
{
    this->miasto = m;
}
void dane::setRegon(string r)
{
    this->regon = r;
}
void dane::setKod(string k)
{
    this->kod = k;
}
double dane::getZysk()
{
    return this->zysk;
}
double dane::getPrzychod()
{
    return this->przychod;
}
double dane::getKoszta()
{
    return this->koszta;
}
string dane::getNazwa()
{
    return this->nazwa;
}
string dane::getMiasto()
{
    return this->miasto;
}
string dane::getRegon()
{
    return this->regon;
}
string dane::getKod()
{
    return this->kod;
}

bool dane::operator==(dane &c2)
{
    if(this->getNazwa() == c2.getNazwa() &&
        this->getRegon() == c2.getRegon() &&
        this->getKoszta() == c2.getKoszta() &&
        this->getPrzychod() == c2.getPrzychod() &&
        this->getMiasto()==c2.getMiasto() &&
        this->getZysk() == c2.getZysk() &&
        this->getKod() == c2.getKod())
    {
        return true;
    }
    return false;

}


