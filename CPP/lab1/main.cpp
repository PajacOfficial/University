#include <iostream>
#include <math.h>

using namespace std;

int liczSumuj()
{
    int suma = 0;
    for(int i=0;i<100;i++)
    {
        cout << i << " ";
        suma += i;
    }
    return suma;
}

class punkt
{
public:
    int x;
    int y;
    void wypisz();
    double odleglosczero();
    double odlegloscodpunktu(punkt pp);
    double odlegloscodpunktu1(punkt* pp);

};

struct punkt1
{
    int x;
    int y;
};

void punkt::wypisz()
{
    x,y;
    cout << "Punkt(" <<x << "," << y<<")"<<endl;
}

double punkt::odleglosczero()
{
    x,y;
    double o = sqrt(pow(x,2) + pow(y,2));
    cout << "Odleglosc od (0,0) = " << o << endl;
}

double punkt::odlegloscodpunktu(punkt pp)
{
     x,y;
    float o = sqrt(pow((x-pp.x),2) + pow((y-pp.y),2));
    cout << "Odleglosc od ("<<pp.x << ","<<pp.y<<") = " << o << endl;
}

double punkt::odlegloscodpunktu1(punkt *pp)
{
    x,y;
     float o = sqrt(pow((x-pp->x),2) + pow((y-pp->y),2));
     cout << "Odleglosc od ("<<pp->x << ","<<pp->y<<") = " << o << endl;
}

int main()
{
    //zad 1
    int a = 5;
    cout << "Zadanie 1: " << a;
    printf(", %d\n",a);
    // zad 3
    cout << "\nZadanie 3: " << &a << endl;
    //zad 4
    int* k;
    k = new int;
    *k=4;
    cout << "\nZadanie 4: " << k << ", " << *k << endl;
    *k-=1;
    cout << "\nZadanie 4a: " << k << ", " << *k << endl;
    // zad 5
    punkt P;
    P.x = 5;
    P.y = 6;
    cout << "\nZadanie 5: x=" << P.x <<", y="<< P.y<<endl;
    // zad 6
    punkt1 P1;
    P1.x = 4;
    P1.y = 3;
    cout << "\nZadanie 6: x=" << P1.x <<", y="<< P1.y<<endl;
    // zad 7
    punkt* P2;
    P2 = new punkt;
    P2->x = 1;
    P2->y = 4;
    cout << "\nZadanie 7: x=" << P2->x <<", y="<< P2->y<<endl;
    // zad 8
    cout << "\nZadanie 8: ";
    P.wypisz();
    // zad 9
    cout << "\nZadanie 9: ";
    P.odleglosczero();
    //zad 10
    punkt P3;
    P3.x = 1;
    P3.y = 7;
    cout << "\nZadanie 10: ";
    P.odlegloscodpunktu(P3);
    //zad 11
    cout << "\nZadanie 11: ";
    P.odlegloscodpunktu(*P2);
    //zad12
    int sumatab = 0;
    int tab[10];
    for(int i=0;i<10;i++)
    {
        tab[i]=i+1;
        sumatab+=i+1;
    }
    cout << "\nZadanie 12: " << sumatab << endl;
    //zad 13
    cout << "\nZadanie 13: "<<endl;
    int* tab1;
    int n;
    cout << "\nPodaj n: ";
    cin >> n;
    tab1= new int[n];
    for(int i=0;i<n;i++)
    {
        tab1[i]=i+1;
    }
    //zad 14
     cout <<"\nZadanie 14: "<<endl;
     punkt tab2[5];
    tab2[0].x=0;
    tab2[0].y=4;
     tab2[1].x=1;
    tab2[1].y=3;
     tab2[2].x=2;
    tab2[2].y=2;
     tab2[3].x=3;
    tab2[3].y=1;
    tab2[4].x=4;
    tab2[4].y=0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            tab2[i].odlegloscodpunktu(tab2[j]);
        }
    }

    cout <<"Zadanie 2: " << endl;
    delete tab1;
    delete P2;
    delete(k);
    return liczSumuj();
}
