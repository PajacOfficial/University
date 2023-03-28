#include <iostream>
#include <vector>
using namespace std;

class Telewizor
{
private:
    int glosnosc;
    int jasnosc;
    int kontrast;
    bool wieksze0mniejsze100(int x){return (x>0) &&  (x<100);};

public:
    void wypisz();
    Telewizor() {glosnosc = 50; jasnosc = 50; kontrast = 50;};
    Telewizor(int glosnosc1, int jasnosc1, int kontrast1){
        if(wieksze0mniejsze100(glosnosc1))
            glosnosc = glosnosc1;
        if(wieksze0mniejsze100(jasnosc1))
            jasnosc = jasnosc1;
        if(wieksze0mniejsze100(kontrast))
            kontrast = kontrast1;
        }
};

void Telewizor::wypisz()
{

    printf("Telewizor:\nglosnosc: %d\njasnosc: %d\nkontrast: %d",glosnosc, jasnosc, kontrast);

}

class TelewizorKolorowy: public Telewizor{
private:
    int nasycenie;
protected:
    int glosnosc;
    int jasnosc;
    int kontrast;
    bool wieksze0mniejsze100(int x){return (x>0) &&  (x<100);};
public:
    TelewizorKolorowy() {};
    TelewizorKolorowy(int vol, int bright, int contr): Telewizor(vol,bright,contr) {};
    TelewizorKolorowy(int glosnosc, int jasnosc, int kontrast, int nasycenie1): Telewizor(glosnosc, jasnosc, kontrast){
    if(wieksze0mniejsze100(nasycenie1))
        nasycenie = nasycenie1;
    };
    void show_nasycenie(){cout <<"\nnasycenie: " << nasycenie << endl;};

};

class Osoba
{
   private:
       string imie;
       string nazwisko;
       int rokUr;
       bool IsValidYear(int Y) {return (Y>1900) && (Y<3000);};
   public:
    Osoba() {imie = "<BRAK DANYCH>"; nazwisko = "<BRAK DANYCH>"; rokUr = 1900;};
    Osoba(string name, string surname, int birth_date) {
        imie = name;
        nazwisko = surname;
        if(IsValidYear(birth_date))
            rokUr = birth_date;
    };
    virtual void wypisz();

};

void Osoba::wypisz()
{
     cout << "Imie: " << imie <<endl;
     cout << "Nazwisko: " << nazwisko << endl;
     cout << "Rok urodzenia: "<< rokUr << endl;
}

class Pracownik: public Osoba{
private:
    string stanowisko;
public:
    Pracownik() {stanowisko = "cleaner";};
    Pracownik(string name, string surname, int birth_date): Osoba(name,surname,birth_date) {};
    Pracownik(string name, string surname, int birth_date, string role): Osoba(name,surname,birth_date) {stanowisko = role;};
    void wypisz(){
        Osoba::wypisz();
        cout << "Stanowisko: " << stanowisko << endl;};
};

class Boss: public Pracownik{
public:
    Boss(string name, string surname, int Y): Pracownik(name,surname,Y,"Szef") {};
    void wypisz(){
    Pracownik::wypisz();
    }

};



int main()
{
    Osoba osoba2;
    Pracownik emp;

    vector<Osoba*> per_vector = {&osoba2,&emp};
    for(int i=0; i<per_vector.size();i++)
    {
        per_vector[i]->wypisz();
    }


    return 0;
}
