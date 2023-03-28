#include <iostream>
#include <string>

using namespace std;



void modyfi_int(int* p)
{
    *p = 31;
}

void modyfi_int1(int &p)
{
    p = 35;
}

namespace DwaWymiary
{
class punkt
{
private:
    int x=0;
    int y=0;
public:
    punkt() {};
    punkt(int xx, int yy): x{xx}, y{yy} {};
    punkt(double d) {x=d; y=d;};
    punkt T_inplace() { int c=x; x=y; y=c;};
    void wypisz();
    int getX();
    int getY();
    void setX(int x1);
    void setY(int y1);
    string repr();
};
void punkt::wypisz()
{
    cout << repr();
}

int punkt::getX()
{
    return x;
}

int punkt::getY()
{
    return y;
}

void punkt::setX(int x1)
{
    x=x1;
}

void punkt::setY(int y1)
{
    y=y1;
}

punkt T(punkt p)
{
     int c = p.getX();
     p.setX(p.getY());
     p.setY(c);
     return p;
}

// zad6
string punkt::repr()
{
    string wypisz ="Punkt (" +  to_string(x) +", " + to_string(y)+ ")\n";
    return wypisz;
}

string PokazPunkty(punkt p1, punkt p2)
{
    string napis = "[ (" + to_string(p1.getX())+", "+to_string(p1.getY())+") ("+to_string(p2.getX())+", "+to_string(p2.getY())+") ]";
    return napis;
}
};

int main()
{

   using namespace DwaWymiary;
// zad1 & zad2
    int* j;
    j = new int;
    *j = 33;
    modyfi_int(j);
    int k = 134;
    modyfi_int1(k);
    printf("%d\n",*j);
    printf("%d\n\n", k);
    //
    //zad3
        punkt P(4,5);
        P.wypisz();
       punkt L(3);
        L.wypisz();
    //
    //zad4
        punkt M;
        M=T(P);
        P.T_inplace();
        P.wypisz();
    //
       cout << PokazPunkty(P,L);








    delete j;
    return 0;
}
