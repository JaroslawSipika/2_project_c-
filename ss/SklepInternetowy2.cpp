#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class wlasciciel;
class uzytkownik;
class adres_zamieszkania;
class dane_logowania;
class koszyk_zamowien;
class historia_zamowien;
class promocja_punktowa;
class atrybuty_wspolne_produktow;
class kat_aminokwasy;
class kat_kreatyny;
class kat_odziez_sportowa;
class kat_odzywki_bialkowe;
class kat_odzywki_na_mase;
class kat_przedtreningowki;
class kat_weglowodany;
class kat_witaminy;
class kat_zywnosc_dietetyczna;


class wlasciciel{
private:
    string haselko;
public:
    void zmien_cena();
    void zmien_opis();
    void zmien_dostepnosc();
    void dodaj_produkt();
    void usun_uzytkownika();
    void usun_produkt();
    wlasciciel();
    string zwroc_haselko();
};

wlasciciel::wlasciciel()
{
    haselko = "programowanie";
}

string wlasciciel::zwroc_haselko()
{
    return haselko;
}

class uzytkownik{

private:
    string imie;
    string nazwisko;
    int numer_telefonu;
    string email;
    string ulica;
    string numer_domu;
    string kod_pocztowy;
    string miejscowosc;
public:
    void wczytaj_dane_osobowe();
    void zwroc_dane_osobowe();


};

void uzytkownik::wczytaj_dane_osobowe()
{
    cout << "Podaj imie" << endl;
    cin >> imie;
    cout << "Podaj nazwisko" << endl;
    cin >> nazwisko;
    cout << "Podaj numer telefonu" << endl;
    cin >> numer_telefonu;
    cout << "Podaj adres email" << endl;
    cin >> email;
    cout << "Podaj ulice" << endl;
    cin >> ulica;
    cout << "Podaj numer_domu" << endl;
    cin >> numer_domu;
    cout << "Podaj kod pocztowy" << endl;
    cin >> kod_pocztowy;
    cout << "Podaj miejscowosc" << endl;
    cin >> miejscowosc;

}

void uzytkownik::zwroc_dane_osobowe()
{
    cout << imie << endl;
    cout << nazwisko << endl;
    cout << numer_telefonu << endl;
    cout << email << endl;
    cout << ulica << endl;
    cout << numer_domu << endl;
    cout << kod_pocztowy << endl;
    cout << miejscowosc << endl;
}

class dane_logowania{

private:
    friend class uzytkownik;
    friend class wlasciciel;
    string haslo;
    string login;

public:

    void wczytaj_login();
    void wczytaj_haslo();
    string zwroc_login();
    string zwroc_haslo();
    void zmien_haslo();
    dane_logowania();
};

dane_logowania::dane_logowania()
{
    haslo = "0";
    login = "0";
}

void dane_logowania::wczytaj_haslo()
{
    while (haslo.size() != 8)
    {
            cout << "Ustawienia nowego hasla" << endl;
            cout << "Prosze podac haslo skladajace sie z 8 liter" << endl;

            cin >> haslo;

            if (8 < haslo.size() || 8 > haslo.size())
            {
            cout << "Podales za krotkie badz za dlugie haslo" << endl;
            cout << "Jeszcze raz" << endl;
            }
    }

}

void dane_logowania::wczytaj_login()
{
    while (login.size() != 8)
    {
            cout << "Ustawienia nowego loginu" << endl;
            cout << "Prosze podac login skladajacy sie z 8 liter" << endl;

            cin >> login;

            if (8 < login.size() || 8 > login.size())
            {
            cout << "Podales za krotki badz za dlugi login" << endl;
            cout << "Jeszcze raz" << endl;
            }
    }

}

string dane_logowania::zwroc_haslo()
{
    return haslo;
}

string dane_logowania::zwroc_login()
{
    return login;
}


class koszyk_zamowien{

public:
    string zamowienie;
    int liczba_sztuk;
    double koszt_zamowienia;
    friend class historia_zamowien;
private:
    void wczytaj_zamowienie(string);
    void wczytaj_liczbe_sztuk(int);
    string pokaz_zamowienie();
    double pokaz_koszt_zamowienia();
    double pokaz_liczbe_sztuk();
};

class historia_zamowien{

public:
    string pokaz_zamowienia();

};


class promocja_punktowa{

private:
    int liczba_punktow;
public:
    void wczytaj_punkty(int);
    int pokaz_punkty();
};


class atrybuty_wspolne_produktow{
public:
    double cena;
    bool dostepnosc;
    string nazwa;
    double punkty;
    string forma;
    double masa_netto;
    double pokaz_cena();
    string pokaz_nazwa();
    string pokaz_forma();
    double pokaz_punkty();
    double pokaz_masa_netto();
};

double atrybuty_wspolne_produktow::pokaz_cena()
{
    return cena;
}

string atrybuty_wspolne_produktow::pokaz_nazwa()
{
    return nazwa;
}

string atrybuty_wspolne_produktow::pokaz_forma()
{
    return forma;
}

double atrybuty_wspolne_produktow::pokaz_punkty()
{
    return punkty;
}

double atrybuty_wspolne_produktow::pokaz_masa_netto()
{
    return masa_netto;
}


class kat_aminokwasy : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
    string smaki;
public:
    void pokaz_smaki();
    void wstaw_aminokwasy();

};

/* void kat_aminokwasy::wstaw_aminokwasy(double cena, bool dostepnosc, string nazwa, double punkty, string forma, double masa_netto, string smaki)
{
    this -> cena = cena;
    this -> dostepnosc = dostepnosc;
    this -> nazwa = nazwa;
    this -> punkty = punkty;
    this -> forma = forma;
    this -> masa_netto = masa_netto;
    this -> smaki = smaki;
}*/


class kat_kreatyny : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
public:
};

class kat_odziez_sportowa : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
public:
};

class kat_odzywki_bialkowe : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
public:
};

class kat_odzywki_na_mase : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
public:
};

class kat_przedtreningowki : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
public:
};

class kat_weglowodany : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
public:
};

class kat_witaminy : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
public:
};

class kat_zywnosc_dietetyczna : public atrybuty_wspolne_produktow{

private:
    friend class wlasciciel;
public:
};


int main()
{

    cout << "Witamy w naszym sklepie internetowym FabrykaSily" << endl;

    int dostep;
    int indeks_tablicy = 0;
    int indeks_dodawania_osob = 1;
    uzytkownik *nowy = new uzytkownik[100];
    wlasciciel jedyny_wlasciciel;
    dane_logowania *logowanie = new dane_logowania[100];

    kat_aminokwasy *nowy_aminokwasy = new kat_aminokwasy [10];
    kat_kreatyny *nowy_kreatyny = new kat_kreatyny [10];
    kat_odziez_sportowa *nowy_odziez_sportowa = new kat_odziez_sportowa [10];
    kat_odzywki_bialkowe *nowy_odzywki_bialkowe = new kat_odzywki_bialkowe [10];
    kat_odzywki_na_mase *nowy_odzywki_na_mase = new kat_odzywki_na_mase [10];
    kat_przedtreningowki *nowy_przedtreningowki = new kat_przedtreningowki [10];
    kat_weglowodany *nowy_weglowodany = new kat_weglowodany [10];
    kat_witaminy *nowy_witaminy = new kat_witaminy [10];
    kat_zywnosc_dietetyczna *nowy_zywnosc_dietetyczna = new kat_zywnosc_dietetyczna [10];



    while (dostep!=1 && dostep!=2)
    {
    cout << "Wybierz rodzaj dostepu" << endl;
    cout << "1 - Uzytkownik" << endl;
    cout << "2 - Wlasiciel" << endl;
    cin >> dostep;
    }

    switch(dostep)
    {
        case 1:
        {
        int p = 2;

        while (p == 2)
        {
        cout << "Witamy w panelu uzytkownika" << endl;


        cout << "1 - Zarejestruj sie" << endl;
        cout << "2 - Zaloguj sie" << endl;

        int log;
        cin >> log;

        switch(log)
        {
            case 1:
                {
                while (indeks_dodawania_osob == 1)
                {
                    cout << "Proces utworzenia konta" << endl;

                    nowy[indeks_tablicy].wczytaj_dane_osobowe();
                    nowy[indeks_tablicy].zwroc_dane_osobowe();
                    logowanie[indeks_tablicy].wczytaj_haslo();
                    logowanie[indeks_tablicy].wczytaj_login();

                    indeks_tablicy++;
                    cout << "Liczba uzytkownikow w bazie" << indeks_tablicy << endl;
                    cout << "Czy chcesz dodac kolejna osobe?" << endl;
                    cout << "1 - Tak" << endl;
                    cout << "2 - Nie" << endl;

                    cin >> indeks_dodawania_osob ;
                }
                }
                break;

            case 2:
                {
                if (indeks_tablicy==0)
                {
                    cout << "Brak zarejestrowanych uzytkownikow w bazie" << endl;
                }

                else
                {
                cout << "Prosze podac login" << endl;

                string logowanko;
                cin >> logowanko;

                int k;
                for (k=0; k<=indeks_tablicy; k++)
                {
                    if (logowanko == logowanie[k].zwroc_login())
                    {
                        cout << logowanie[k].zwroc_login() << endl;
                        cout << "Wczytalem" << endl;
                        string haselko = "A";
                        while (haselko != logowanie[k].zwroc_haslo())
                        {   cout << "Prosze podac haslo" << endl;

                            cin >> haselko;

                            if (haselko == logowanie[k].zwroc_haslo())
                            {
                            cout << "Podales dobre haslo!" << endl;
                            cout << "Witaj uzytkowniku w sklepie" << endl;

                            int wybor;
                            while (wybor!=1 && wybor!=2 && wybor!=3 && wybor!=4 && wybor!=5 && wybor!=6)
                            {
                            cout << "Wybierz jedna z kategorii" << endl;
                            cout << "1- Produkty" << endl;
                            cout << "2- Moje dane" << endl;
                            cout << "3- Koszyk" << endl;
                            cout << "4- Historia zamowien" << endl;
                            cout << "5- Program lojalnosiowy" << endl;
                            cout << "6- Wyloguj" << endl;
                            cin >> wybor;
                            }

                                switch(wybor)
                                {
                                case 1:
                                    {
                                int produkty;
                                while (produkty!=1 && produkty!=2 && produkty!=3 && produkty!=4 && produkty!=5 && produkty!=6 && produkty!=7 && produkty!=8 && produkty!=9 && produkty!=0)
                                {
                                cout << "Wybierz kategorie" << endl;
                                cout << "1- Aminokwasy" << endl;
                                cout << "2- Kreatyny" << endl;
                                cout << "3- Odziez sportowa" << endl;
                                cout << "4- Odzywki bialkowe" << endl;
                                cout << "5- Odzywki na mase" << endl;
                                cout << "6- Przetreningowki" << endl;
                                cout << "7- Weglowodany" << endl;
                                cout << "8- Witaminy" << endl;
                                cout << "9- Zywnosci dietetyczna" << endl;
                                cout << "0- Powrot" << endl;
                                cin >> produkty;
                                }

                                    switch(produkty)
                                    {
                                        case 1:
                                            int wybierz;
                                            while (wybierz!=1 && wybierz!=2)
                                            {
                                                cout << "Kategoria" << endl;
                                                cout << "1- Zobacz produkty" << endl;
                                                cout << "2- Dodaj do koszyka" << endl;
                                                cin >> wybierz;
                                            }
                                            switch(wybierz)
                                            {
                                                case 1:
                                                {
                                                      for (int i=0; i<10; i++)
                                                      {
                                                          cout << "Nazwa: " << nowy_aminokwasy[i].pokaz_nazwa() << endl;
                                                          cout << "Cena: " << nowy_aminokwasy[i].pokaz_cena() << endl;
                                                          cout << "Forma: " << nowy_aminokwasy[i].pokaz_forma() << endl;
                                                          cout << "Punkty: " << nowy_aminokwasy[i].pokaz_punkty() << endl;
                                                          cout << "Masa netto: " << nowy_aminokwasy[i].pokaz_masa_netto() << endl;

                                                      }
                                                }
                                                break;

                                            }


                                    }











                                    }
                                break;

                                case 2:
                                    {

                                    }
                                break;

                                case 3:
                                    {

                                    }
                                break;

                                case 4:
                                    {

                                    }
                                break;

                                case 5:
                                    {

                                    }
                                break;

                                case 6:
                                    {

                                    }
                                break;

                                }
                            }
                        }
                    }
                }
            }
            }
            break;

        }


    }
    }
    break;

    case 2:
    cout << "Witamy w panelu wlasciciela" << endl;
    cout << "Prosze podac haslo, aby sie zalogowac do panelu" << endl;

    string haselkowlasciciela;


    while(haselkowlasciciela != jedyny_wlasciciel.zwroc_haselko())
    {
        cin >> haselkowlasciciela;
        if(haselkowlasciciela != jedyny_wlasciciel.zwroc_haselko())
        {
            cout << "Jeszcze raz" << endl;
        }
        else
        {
            int wybieranie;
            while (wybieranie != 1 && wybieranie != 2 && wybieranie != 3 && wybieranie !=4)
            {
                cout << "Witamy w panelu" << endl;
                cout << "Wybierz kategorie" << endl;
                cout << "1- Dodanie nowego produktu" << endl;
                cout << "2- Zmiana dostepnosci produktu" << endl;
                cout << "3- Zmiana ceny" << endl;
                cout << "4- Wysylka zamowienia" << endl;
                cin >> wybieranie;
            }

            switch(wybieranie)
            {
                case 1:
                {
                    int produkty;
                    while (produkty!=1 && produkty!=2 && produkty!=3 && produkty!=4 && produkty!=5 && produkty!=6 && produkty!=7 && produkty!=8 && produkty!=9 && produkty!=0)
                    {
                    cout << "Wybierz kategorie" << endl;
                    cout << "1- Aminokwasy" << endl;
                    cout << "2- Kreatyny" << endl;
                    cout << "3- Odziez sportowa" << endl;
                    cout << "4- Odzywki bialkowe" << endl;
                    cout << "5- Odzywki na mase" << endl;
                    cout << "6- Przetreningowki" << endl;
                    cout << "7- Weglowodany" << endl;
                    cout << "8- Witaminy" << endl;
                    cout << "9- Zywnosci dietetyczna" << endl;
                    cout << "0- Powrot" << endl;
                    cin >> produkty;
                    }

                    switch (produkty)
                    {
                        case 1:
                        {
                            fstream plik;
                            plik.open("aminokwas.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_aminokwasy[0].nazwa = linia; break;
                                case 2: nowy_aminokwasy[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_aminokwasy[0].forma = linia; break;
                                case 4: nowy_aminokwasy[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_aminokwasy[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;

                        case 2:
                        {
                            fstream plik;
                            plik.open("kreatyna.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_kreatyny[0].nazwa = linia; break;
                                case 2: nowy_kreatyny[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_kreatyny[0].forma = linia; break;
                                case 4: nowy_kreatyny[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_kreatyny[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;

                        case 3:
                        {
                            fstream plik;
                            plik.open("odziez.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_odziez_sportowa[0].nazwa = linia; break;
                                case 2: nowy_odziez_sportowa[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_odziez_sportowa[0].forma = linia; break;
                                case 4: nowy_odziez_sportowa[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_odziez_sportowa[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;

                        case 4:
                        {
                            fstream plik;
                            plik.open("bialko.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_odzywki_bialkowe[0].nazwa = linia; break;
                                case 2: nowy_odzywki_bialkowe[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_odzywki_bialkowe[0].forma = linia; break;
                                case 4: nowy_odzywki_bialkowe[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_odzywki_bialkowe[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;

                        case 5:
                        {
                            fstream plik;
                            plik.open("masa.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_odzywki_na_mase[0].nazwa = linia; break;
                                case 2: nowy_odzywki_na_mase[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_odzywki_na_mase[0].forma = linia; break;
                                case 4: nowy_odzywki_na_mase[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_odzywki_na_mase[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;

                        case 6:
                        {
                            fstream plik;
                            plik.open("przedtreningowka.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_przedtreningowki[0].nazwa = linia; break;
                                case 2: nowy_przedtreningowki[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_przedtreningowki[0].forma = linia; break;
                                case 4: nowy_przedtreningowki[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_przedtreningowki[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;

                        case 7:
                        {
                            fstream plik;
                            plik.open("wegle.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_weglowodany[0].nazwa = linia; break;
                                case 2: nowy_weglowodany[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_weglowodany[0].forma = linia; break;
                                case 4: nowy_weglowodany[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_weglowodany[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;

                        case 8:
                        {
                            fstream plik;
                            plik.open("witamina.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_witaminy[0].nazwa = linia; break;
                                case 2: nowy_witaminy[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_witaminy[0].forma = linia; break;
                                case 4: nowy_witaminy[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_witaminy[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;

                        case 9:
                        {
                            fstream plik;
                            plik.open("dieta.txt", ios::in);
                            string linia;
                            int nr_linii = 1;

                            while(getline(plik,linia))
                            {
                                switch (nr_linii)
                                {
                                case 1: nowy_zywnosc_dietetyczna[0].nazwa = linia; break;
                                case 2: nowy_zywnosc_dietetyczna[0].cena = atoi(linia.c_str()); break;
                                case 3: nowy_zywnosc_dietetyczna[0].forma = linia; break;
                                case 4: nowy_zywnosc_dietetyczna[0].masa_netto = atoi(linia.c_str()); break;
                                case 5: nowy_zywnosc_dietetyczna[0].punkty = atoi(linia.c_str()); break;
                                }
                                nr_linii++;
                            }
                        }
                        break;
                    }



                }
                break;
            }






        }
    }




    break;




    }

    }


