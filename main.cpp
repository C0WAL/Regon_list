#include "kontener.h"
#include <cstdlib>

int main()
{
    dane A;
    A.setRegon("999");
    A.setNazwa("Bla");
    A.setKoszta(123);
    A.setPrzychod(321);
    A.setMiasto("wwa");
    A.setKod("95-100");
    A.setZysk();

    dane B;
    B.setRegon("999");
    B.setNazwa("Bla");
    B.setKoszta(123);
    B.setPrzychod(321);
    B.setMiasto("wwa");
    B.setKod("95-100");
    B.setZysk();


    //-------------------------file

    kontener naPlik;
    string line;
    double placehold;
    ifstream daneFile;
    ifstream kosztFile;
    ifstream zyskFile;
    daneFile.open("firmy.txt");
    kosztFile.open("koszt.txt");
    zyskFile.open("przychod.txt");
    while(!daneFile.eof())
    {
        dane zPliku;
       getline(daneFile,line);
       zPliku.setRegon(line);
       getline(daneFile,line,' ');
       zPliku.setKod(line);
       getline(daneFile,line);
       zPliku.setMiasto(line);
       getline(daneFile,line);
       zPliku.setNazwa(line);
       getline(kosztFile,line);
       placehold = atof(line.c_str());
       zPliku.setKoszta(placehold);
       getline(zyskFile,line);
       placehold = atof(line.c_str());
       zPliku.setPrzychod(placehold);
       zPliku.setZysk();
       naPlik.add(zPliku);
       getline(daneFile,line);

    }

    naPlik.print();

    if(A==B)
    {
        cout<<"Overloading works just fine" << endl;
    }

    naPlik.sortDesc();
    naPlik.print();


}
