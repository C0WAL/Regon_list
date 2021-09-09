#ifndef DANE_H_INCLUDED
#define DANE_H_INCLUDED

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct dane
{
private:
    string regon;
    string miasto;
    string kod;
    string nazwa;
    double koszta;
    double przychod;
    double zysk;
public:
    string getRegon();
    string getMiasto();
    string getNazwa();
    string getKod();
    double getKoszta();
    double getPrzychod();
    double getZysk();
    bool operator==(dane &c2);
    void setRegon(string regon);
    void setMiasto(string miasto);
    void setKod(string kod);
    void setNazwa(string nazwa);
    void setKoszta(double koszta);
    void setPrzychod(double przychod);
    void setZysk();
};



#endif // DANE_H_INCLUDED
