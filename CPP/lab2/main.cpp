#include <iostream>
#include <math.h>

using namespace std;

class telewizor
{
public:
    int jasnosc;
    int kontrast;
    int glosnosc;
    void wypisz();
};

class telewizor1
{
private:
    int jasnosc;
    int kontrast;
    int glosnosc;
public:
    int getjasnosc();
    int getkontrast();
    int getglosnosc();
    void setjasnosc(int j);
    void setkontrast(int k);
    void setglosnosc(int g);
    void wypisz();

};

int telewizor1::getjasnosc()
{
    return jasnosc;
}

void telewizor1::setjasnosc(int j)
{
    if(j <=0 || j >=100)
        printf("blad jasnosci\n");
    else
        jasnosc = j;

}

int telewizor1::getkontrast()
{
    return kontrast;
}

void telewizor1::setkontrast(int k)
{
    if(k<=0 || k>=100)
        printf("blad kontrastu\n");
    else
    kontrast = k;
}

int telewizor1::getglosnosc()
{
    return glosnosc;
}

void telewizor1::setglosnosc(int g)
{
    if(g<=0 || g>=30)
        printf("blad glosnosci\n");
    else
        glosnosc = g;

}

void telewizor::wypisz()
{
    jasnosc,kontrast,glosnosc;
    printf("Telewizor o jasnosci %d, kontrascie %d i glosnosci %d", jasnosc, kontrast, glosnosc);
}

void telewizor1::wypisz()
{
    jasnosc,kontrast,glosnosc;
    printf("Telewizor o jasnosci %d, kontrascie %d i glosnosci %d", jasnosc, kontrast, glosnosc);
}

class punktzparzystej
{
private:
    int x;
    int y;
public:
    void setxy(int x1,int y1);
    int getx();
    int gety();
    void wypisz();

};

void punktzparzystej::setxy(int x1, int y1)
{
    if((x1<0 && y1>0) || (x1>0 && y1<0))
    {
        x=x1;
       y=y1;
    }
    else
        printf("blad\n");
}

int punktzparzystej::getx()
{
    return x;
}

int punktzparzystej::gety()
{
    return y;
}

void punktzparzystej::wypisz()
{
    if(x<0 && y>0)
        printf("Punkt z drugiej cwiartki (%d,%d)",x,y);
    if(x>0 && y<0)
        printf("Punkt z czwartej cwiartki (%d,%d)",x,y);
}

class punkt
{
private:
    int x;
    int y;
public:
    int getX();
    int getY();
    void setX(int x1);
    void setY(int y1);
    double odleglosc(punkt pp);
};

int punkt::getX()
{
    return x;
}

void punkt::setX(int x1)
{
    x=x1;
}

int punkt::getY()
{
    return y;
}

void punkt::setY(int y1)
{
    y=y1;
}
double punkt::odleglosc(punkt pp)
{
    return sqrt(pow(x-pp.getX(),2)+pow(y-pp.getY(),2));
}



class tri
{
private:
    punkt A;
    punkt B;
    punkt C;
public:
    void setABC(int AX, int AY, int BX, int BY, int CX, int CY);
    punkt getA();
    punkt getB();
    punkt getC();
    double permimeter();
    void wypisz();

};

void tri::setABC(int AX, int AY, int BX, int BY, int CX, int CY)
{
    if(A.odleglosc(B)+B.odleglosc(C)<C.odleglosc(A))
    {
        return;
    }
     if(C.odleglosc(A)+B.odleglosc(C)<A.odleglosc(B))
    {
        return;
    }
     if(A.odleglosc(B)+C.odleglosc(A)<B.odleglosc(C))
    {
        return;
    }
    A.setX(AX);
    A.setY(AY);
    B.setX(BX);
    B.setY(BY);
    C.setX(CX);
    C.setY(CY);


}
punkt tri::getA()
{
    return A;
}

punkt tri::getB()
{
    return B;
}

punkt tri::getC()
{
    return C;
}


double tri::permimeter()
{
    return A.odleglosc(B)+B.odleglosc(C)+C.odleglosc(A);
}




int main()
{
    //zad1
  /*  telewizor T;
    T.jasnosc = -10;
    T.kontrast = 2000;
    T.glosnosc = -350;
    T.wypisz();
    //zad2
    telewizor1 T2;
    T2.setkontrast(50);
    T2.setglosnosc(28);
    T2.setjasnosc(90);
    T2.wypisz();

    punktzparzystej P;
    P.setxy(5,-3);
    P.wypisz();*/

    punkt A;
    punkt B;
    punkt C;

    tri T;
    T.setABC(1,2,3,4,5,6);
    std::cout << T.permimeter();
    return 0;

}
