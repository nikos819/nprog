#include <iostream>

using namespace std;

struct lista_element {
    int nr;
    struct lista_element *next;
};

class Lista {
    struct lista_element *l;
public:
    // 2. Konstruktor - pusta lista (NULL)
    Lista() {
        l = NULL;
    }

    // 1. Dodawanie do listy (dodajemy na pocz¹tek listy)
    void dodaj(int liczba){
        struct lista_element *nowy = new lista_element;
        nowy->nr = liczba;
        nowy->next = l;
        l = nowy;
    }

    // 3. Usuñ ostatniego z listy
    // Zwraca usuwan¹ liczbê i usuwa element
    int usun_ostatni() {
        // Szukamy przedostatniego elementu
        struct lista_element *temp = l;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        int wartosc = temp->next->nr;
        delete temp->next; // Usuniêcie ostatniego elementu
        temp->next = NULL;  // Odciêcie wskaŸnika
        return wartosc;
    }

    // 4. Wypisz
    // Przegl¹da i wypisuje elementy listy
    void wypisz()
    {
        struct lista_element *temp = l;
        cout << "aktualna lista: ";
        while(temp != NULL)
        {
            cout << temp->nr << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Lista moja_lista;

    // Testowanie funkcji
    moja_lista.dodaj(10);
    moja_lista.dodaj(20);


    moja_lista.wypisz(); // Wypisze: 30 20 10 (poniewa¿ dodajemy na pocz¹tek)

    int usunieta_liczba = moja_lista.usun_ostatni();
    cout << "Usuniêto element: " << usunieta_liczba << endl;

    moja_lista.wypisz(); // Wypisze: 30 20

    return 0;
}
