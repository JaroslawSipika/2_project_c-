#include <iostream>
#include <cmath>
#include <string>

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

public:
    void zmien_cena();
    void zmien_opis();
    void zmien_dostepnosc();
    void dodaj_produkt();
    void usun_uzytkownika();
    void usun_produkt();
};




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
protected:
    string haslo;
    string login;
public:
    void wczytaj_dane_osobowe();
    void zwroc_dane_osobowe();
    uzytkownik() {haslo = "0"; login = "0";};

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


class dane_logowania : public uzytkownik{

private:
    friend class uzytkownik;
    friend class wlasciciel;


public:

    void wczytaj_login();
    void wczytaj_haslo();
    string zwroc_login();
    string zwroc_haslo();
    void zmien_haslo();
};



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
    int licza_sztuk;
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


};

class kat_aminokwasy{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string smaki;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();
    void pokaz_smaki();
    void pokaz_forma();
    void pokaz_punkty();
};

class kat_kreatyny{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();;
    void pokaz_forma();
    void pokaz_punkty();
};

class kat_odziez_sportowa{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();;
    void pokaz_forma();
    void pokaz_punkty();
};

class kat_odzywki_bialkowe{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();;
    void pokaz_forma();
    void pokaz_punkty();
};

class kat_odzywki_na_mase{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();;
    void pokaz_forma();
    void pokaz_punkty();
};

class kat_przedtreningowki{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();;
    void pokaz_forma();
    void pokaz_punkty();
};

class kat_weglowodany{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();;
    void pokaz_forma();
    void pokaz_punkty();
};

class kat_witaminy{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();;
    void pokaz_forma();
    void pokaz_punkty();
};

class kat_zywnosc_dietetyczna{

private:
    friend class wlasciciel;
    double cena;
    string opis;
    bool dostepnosc;
    string nazwa;
    string forma;
    double masa_netto;
    double punkty;
public:
    void pokaz_opis();
    void pokaz_cena();
    bool czy_dostepny();
    void pokaz_nazwa();;
    void pokaz_forma();
    void pokaz_punkty();
};


int main()
{

    cout << "Witamy w naszym sklepie internetowym KOKS" << endl;

    int dostep;
    int indeks_tablicy = 0;
    int indeks_dodawania_osob = 1;
    uzytkownik *nowy = new uzytkownik[100];
    dane_logowania *logowanie = new dane_logowania[100];

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
                break;

            case 2:
                if (indeks_tablicy==0)
                {
                    cout << "Brak zarejestrowanych uzytkownikow w bazie" << endl;
                }

                else
                {
                cout << "Prosze podac login" << endl;

                string logowanko;
                cin >> logowanko;


                for (int k=0; k<indeks_tablicy; k++)
                {
                    cout << k << endl;
                    cout << indeks_tablicy << endl;
                    if (logowanko == logowanie[k].zwroc_login());
                    {
                        cout << "Wczytalem" << endl;
                        string haselko = "A";
                        while (haselko != logowanie[k].zwroc_haslo())
                        {   cout << "Prosze podac haslo" << endl;

                            cin >> haselko;

                            if (haselko == logowanie[k].zwroc_haslo())
                            {
                            cout << "Podales dobre haslo!" << endl;
                            k = 100;
                            }
                        }
                    }
                }

                cout << "Witaj uzytkowniku w sklepie" << endl;
                p = 1;


                break;
        }

        }

        }









    }










}

