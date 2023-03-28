#include <iostream>
#include <string.h>
#include <sstream>


using namespace std;

struct Osoba
{
private:
    string imie = "<brak danych>";
    string nazwisko = "<brak danych>";
    string dataUr = "????-??-??";
    bool isValidYear(int Y) {if(Y>=minYear && Y<=maxYear) return true;  else{return false;}}
    bool isValidMonth(int M) {if(M>=1 && M<=12) return true;  else{return false;}};
    bool isValidDay(int D) {if(D>=1 && D<=31) return true;  else{return false;}}
public:
    int minYear = 1900;
    int maxYear = 3000;
    Osoba(string im, string nazw,int Y, int M, int D)
    {
        string year;
        string month;
        string day;
        if(isValidYear(Y)){
            year = to_YYYY(Y);
        }
        else{
            year = "????";
        }
        if(isValidMonth(M))
        {
            month = to_MM(M);
        }
        else{
            month = "??";
        }
        if(isValidDay(D))
        {
            day = to_D(D);
        }
        else{
            day = "??";
        }
        imie = im; nazwisko = nazw; dataUr = year + "-" + month + "-" + day;
    };
    Osoba() {};
    void wypisz();
    string to_YYYY(int Y);
    string to_MM(int M);
    string to_D(int D);

};

void Osoba::wypisz()
{
    cout << "Imie: "<< imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data Urodzin: " << dataUr << endl;
}

string Osoba::to_YYYY(int Y)
{
    string cos = to_string(Y);
    int l = cos.length();
    string napis;
    if(l==1)
    {
        napis = "000" + cos;
        return napis;
    }
    if(l==2)
    {
        napis = "00" + cos;
        return napis;
    }
    if(l==3)
    {
        napis = "0" + cos;
       return napis;
    }
    if(l==4)
    {
        return cos;

    }
}

string Osoba::to_MM(int M)
{
    string cos = to_string(M);
    int l = cos.length();

    if(l==1)
    {
        return "0" + cos;
    }
    if(l==2)
    {
        return cos;
    }

}

string Osoba::to_D(int D)
{
       string cos = to_string(D);
    int l = cos.length();

    if(l==1)
    {
        return "0" + cos;
    }
    if(l==2)
    {
        return cos;
    }
}

string YearOfDate(string date)
{
    stringstream temp(date);
    string cos;
    getline(temp,cos,'-');
    return cos;
}

string MonthOfDate(string date)
{
    stringstream temp(date);
    string cos;
    getline(temp,cos,'-');
    getline(temp,cos,'-');
    return cos;
}

string DayOfDate(string date)
{
    stringstream temp(date);
    string cos;
    getline(temp,cos,'-');
    getline(temp,cos,'-');
    getline(temp,cos,'-');
    return cos;
}

int intYearOfDate(string date)
{
    stringstream temp(date);
    string cos;
    getline(temp,cos,'-');
    return stoi(cos);
}

int intMonthOfDate(string date)
{
    stringstream temp(date);
    string cos;
    getline(temp,cos,'-');
    getline(temp,cos,'-');
    return stoi(cos);
}

int intDayOfDate(string date)
{
    stringstream temp(date);
    string cos;
    getline(temp,cos,'-');
    getline(temp,cos,'-');
    getline(temp,cos,'-');
    return stoi(cos);
}


int main()
{
    Osoba O("Piotr", "Zareba", 2002, 8, 22);
    O.wypisz();

    return 0;
}
