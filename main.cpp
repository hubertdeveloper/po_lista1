/*
// zad 1
#include <iostream>
using namespace std;
int main() {
    cout << "witaj swiecie";
    return EXIT_SUCCESS;
}
*/
/*
// zad2
#include <iostream>
using namespace std;
int main() {
    for(int i{0};i<13;i++){
        cout <<"witaj swiecie\n";
    }
    return EXIT_SUCCESS;
}
*/
/*
// zad3
#include <iostream>
using namespace std;
int Zwiekszacz(int liczba) {
    return liczba+1;
}
int main() {
    int liczba{3};
    cout<<Zwiekszacz(liczba);
    return EXIT_SUCCESS;
}
*/
/*
// zad4
#include <iostream>
using namespace std;
int Zwiekszacz(int liczba) {
    return liczba+1;
}
int main() {
    int liczba;
    cout <<"Podaj liczbe: ";
    cin >>liczba;
    cout <<"Liczba zwiekszona o jeden wynosi: "<<Zwiekszacz(liczba);
    return EXIT_SUCCESS;
}
*/
/*
// zad5
#include <iostream>
using namespace std;
int Zwiekszacz(int liczba) {
    return liczba+1;
}
int main() {
    for(int i{0};i<18;i++){
        cout <<"Argument "<<i<<", zwiekszacz("<<i<<") = "<<Zwiekszacz(i)<<"\n";
    }
    return EXIT_SUCCESS;
}
*/
/*
// zad6
#include <iostream>
#include <cmath>
using namespace std;
double odleglosc(int x1, int y1, int z1, int x2, int y2, int z2) {
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
}
int main() {
        int x1{1}, y1{2}, z1{0}, x2{3}, y2{7}, z2{8};
        cout<<"a = ("<<x1<<","<<y1<<","<<z1<<")\n";
        cout<<"b = ("<<x2<<","<<y2<<","<<z2<<")\n";
        cout<<"Odleglosc miedzy punktami wynosi: "<<odleglosc(x1,y1,z1,x2,y2,z2);
        return EXIT_SUCCESS;
}
*/
/*
// zad7
#include <iostream>
using namespace std;
int max(int a, int b, int c) {
    if(a>b) {
        if(a>c) {
            return c;
        }
        return b;
    }
    else if(b>c) {
        return b;
    }
    else return c;
}
int main() {
    int a{7}, b{42}, c{32};
    cout<<"a="<<a<<" b="<<b<<" c="<<c;
    cout<<"\nNajwieksza liczba wynosi: "<<max(a,b,c);
    return EXIT_SUCCESS;
}
*/
/*
// zad8
#include <iostream>
using namespace std;

int main() {
    for (char i{'a'};i<='z';i++) {
        cout<<"Znak: "<<i<<" Kod ASCII: "<<(int)i<<"\n";
    }
    return EXIT_SUCCESS;
}
*/

// zad9
#include <iostream>
using namespace std;

void trojkat() {
    for(int i{9}; i >= 1; i--) {
        for(int j{1}; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }
    for(int i{1}; i <= 9; i++) {
        for(int j{1}; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }
}
int main() {
    trojkat();
    return EXIT_SUCCESS;
}

/*
// zad10
#include <iostream>
using namespace std;

float minimum(float tab[],int n) {
    float min=tab[0];
    for(int i=0;i<n;i++) {
        if (tab[i] < min) min = tab[i];
    }
    return min;
}
float maksimum(float tab[], int n) {
    float max=tab[0];
    for(int i=0;i<n;i++) {
        if (tab[i] > max) max = tab[i];
    }
    return max;
}
int main() {
    float tab[]{5.2,6.4,7.2,5.1,1.1};
    int n=sizeof(tab)/sizeof(tab[0]);
    cout <<endl<<"Najmniejsza liczba z tablicy wynosi: "<<minimum(tab,n);
    cout <<endl<<"Najwieksza liczba z tablicy wynosi: "<<maksimum(tab,n);
    return EXIT_SUCCESS;
}
*/
/*
// zad 11
#include <iostream>
using namespace std;
#define r 4
#define c 5

double minimum(double tab[][c],int rows, int cols) {
    double wmin=tab[0][0];
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++)
            if (tab[i][j] < wmin) wmin = tab[i][j];
    }
    return wmin;
}
double maksimum(double tab[][c],int rows, int cols) {
    double wmax=0.0;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++)
            if (tab[i][j] > wmax) wmax = tab[i][j];
    }
    return wmax;
}
int main() {
    double tab[r][c]{
        {1.3, 2.3, 3.4, 4.5, 5.6},
        {6.7, 7.8, 8.9, 9.7, 1.2},
        {2.3, 3.4, 4.5, 5.6, 6.7},
        {7.8, 8.9, 9.2, 1.2, 2.3}
    };
    for(int i=0;i<r;i++) {
        for (int j=0; j<c; j++)
            cout <<"\t"<< tab[i][j] << ", ";
        cout<<endl;
    }
    cout <<endl<<"Najmniejsza liczba z tablicy wynosi: "<<minimum(tab,r,c);
    cout <<endl<<"Najwieksza liczba z tablicy wynosi: "<<maksimum(tab,r,c);
}
*/
/*
// zad12
#include <iostream>
using namespace std;
void odwroc(char tab[], int n) {
    char c;
    for(int i=0; i<n/2; i++) {
        c=tab[i];
        tab[i]=tab[n-i-1];
        tab[n-i-1]=c;
    }
}
int main() {
    char tab[]{'a','b','c','d','e','f','g'};
    int n=sizeof(tab)/sizeof(tab[0]);
    for (int i=0; i<n; i++)
        cout<<tab[i]<<", ";
    cout<<endl;
    odwroc(tab,n);
    for (int i=0; i<n; i++)
        cout<<tab[i]<<", ";
    cout<<endl;
}
*/
/*
// zad 13
#include <iostream>
using namespace std;
typedef struct liczba tliczba;
struct liczba{
    double re;
    double im;
};
tliczba mnozenie(tliczba z1, tliczba z2) {
    tliczba reasult;
    reasult.re=z1.re*z2.re-z1.im*z2.im;
    reasult.im=z1.re*z2.im+z1.im*z2.re;
    return reasult;
}
tliczba dzielenie(tliczba z1, tliczba z2) {
    tliczba result;
    double mianownik=z2.re*z2.re+z2.im*z2.im;
    result.re = (z1.re*z2.re+z1.im*z2.im)/mianownik;
    result.im = (z1.im*z2.re-z1.re*z2.im)/mianownik;
    return result;
}
int main() {
    tliczba liczba1, liczba2;
    liczba1.re=2;
    liczba1.im=4;
    liczba2.re=5;
    liczba2.im=1;
    cout<<"\nLiczby zespolone: z1="<<liczba1.re<<"+"<<liczba1.im<<"i";
    cout<<"\nLiczby zespolone: z2="<<liczba2.re<<"+"<<liczba2.im<<"i";
    tliczba iloczyn=mnozenie(liczba1,liczba2);
    tliczba iloraz= dzielenie(liczba1,liczba2);
    cout<<"\nIloczyn liczb wynosi: "<<iloczyn.re<<"+"<<iloczyn.im<<"i";
    cout<<"\nIloraz liczb wynosi: "<<iloraz.re<<"+"<<iloraz.im<<"i";
}
*/
/*
// zad14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a,b,c;
    cout<<"Podaj 3 boki trojkata(liczby zmiennoprzecinkowe a, b, c): ";
    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&a+c>b) {
        if(a==b&&a==c)
            cout<<"\nJest to trojkat rownoboczny";
        else if((pow(a,2)+pow(b,2)==pow(c,2))||(pow(c,2)+pow(a,2)==pow(b,2))||(pow(c,2)+pow(b,2)==pow(a,2)))
            cout<<"\nJest to trojkat prostokatny";
        else if((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&a!=b))
            cout<<"\nJest to trojkat rownoramienny";
        else
            cout<<"\nJest to trojkat roznoboczny";
    }
    else
        cout<<"\nBlad! Taki trojkat nie istnieje!";
}
 */
/*
// zad15
#include <iostream>
using namespace std;

int main() {
    int dzien1,miesiac1,rok1,dzien2,miesiac2,rok2;
    cout<<"\nPodaj pierwsza date(dzien, miesiac, rok): ";
    cin>>dzien1>>miesiac1>>rok1;
    cout<<"\nPodaj druga date(dzien, miesiac, rok): ";
    cin>>dzien2>>miesiac2>>rok2;
    if(rok1<rok2||(rok1==rok2&&miesiac1<miesiac2)||(rok1==rok2&&miesiac1==miesiac2&&dzien1<dzien2)) {
        cout<<"\nPierwsza data "<<dzien1<<"."<<miesiac1<<"."<<rok1<<"r. jest wczesniejsza";
    }
    else
        cout<<"\nDruga data "<<dzien2<<"."<<miesiac2<<"."<<rok2<<"r. jest wczesniejsza";
}
 */
/*
// zad 16
#include <iostream>
using namespace std;

int minimum(int tab[], int n) {
    int min=tab[0];
    for(int i=0; i<n;i+=2) {
        if(tab[i]<min) {
            min=tab[i];
        }
    }
    return min;
}
int main() {
    int tab[]={12,2,4,-13,2,56,5,12,13,1,31,0,31,-12};
    int n=sizeof(tab)/sizeof(tab[0]);
    cout<<minimum(tab,n);
    return EXIT_SUCCESS;
}
*/
