#include <iostream>
#include <fstream> 
#include <cstdlib>

using namespace std;

int main()
{
    //to leci do klient.txt
    string imiona[8] = { "Wiktor\t", "Kamil\t", "Kacper\t", "Leon\t", "Mariusz\t", "Zbigniew\t", "Mateusz\t", "Gabriel\t" };
    string nazwiska[10] = { "Malinowski\t", "Sawko\t", "Tarasiewicz\t", "Markowski\t", "Sajewicz\t", "Nowak\t", "Magierski\t", "Sznajder\t", "Baginski\t", "Swiech\t" };

    //to leci do ceny.txt
    string ceny[16] = { "500\t", "600\t", "700\t", "800\t", "900\t", "1000\t", "1100\t", "1200\t", "1300\t", "1400\t", "1500\t", "1600\t", "1700\t", "1800\t", "1900\t", "2000\t" };

    //leci do rodzaj_projektu.txt
    string rodzaj_projektu[5] = { "Remont generalny\t", "Odnowienie pomieszczenia\t", "Odnowienie mieszkania\t", "Odnowienie domu\t", "Malowanie scian\t" };

    //leci do dostawcy.txt
    string dostawcy[4] = { "Pol-bud\t", "Kliwo\t", "Nig-bud\t", "Kam-bud\t" };


    ofstream Rodzaj_projektu("rodzaj_projektu.txt");
    ofstream Cena("cena.txt");
    ofstream Klient("klient.txt");
    ofstream Dostawcy("dostawcy.txt");

    

    for (int i = 0; i < 1000; i++) {
        int randomCena = rand() % 16;
        Cena << "\t";
        Cena << ceny[randomCena];
        Cena << "\n";
    }
    Cena.close();

    for (int j = 0; j < 1000; j++) {
        int randomImie = rand() % 8;
        int randomNazwisko = rand() % 10;


        Klient << "\t";
        Klient << imiona[randomImie];
        Klient << nazwiska[randomNazwisko];
        Klient << "\n";
    }
    Klient.close();

    for (int k = 0; k < 1000; k++) {
        int randomDostawca = rand() % 4;

        Dostawcy << "\t";
        Dostawcy << dostawcy[randomDostawca];
        Dostawcy << "\n";
    }
    Dostawcy.close();

    for (int l = 0; l < 1000; l++) {
        int randomRodzajProjektu = rand() % 5;
        Rodzaj_projektu << "\t";
        Rodzaj_projektu << rodzaj_projektu[randomRodzajProjektu];
        Rodzaj_projektu << "\n";
    }
    Rodzaj_projektu.close();

    //generuje 1000 klientow, cen, dostawcow, rodzajow projektow
    return 0;
}
