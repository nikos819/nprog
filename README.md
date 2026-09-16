Opis aplikacji: Implementacja Jednokierunkowej Listy Dynamicznej
Niniejszy program w języku C++ przedstawia klasyczną implementację struktury danych typu lista jednokierunkowa z wykorzystaniem programowania obiektowego.

Główne elementy i funkcjonalność:
Struktura węzła (lista_element): Definiuje pojedynczy element (węzeł) listy, który przechowuje określoną wartość całkowitą (nr) oraz wskaźnik (next) wskazujący na kolejny element w strukturze.

Klasa zarządzająca (Lista): Enkapsuluje operacje na liście i udostępnia interfejs składający się z następujących metod:

Konstruktor: Inicjalizuje pustą listę poprzez ustawienie wskaźnika początkowego l na wartość NULL.

dodaj(int liczba): Dodaje nowy element na sam początek listy (metoda typu push-front).

usun_ostatni(): Przechodzi przez listę w celu odnalezienia przedostatniego elementu, usuwa ostatni węzeł z pamięci dynamicznej za pomocą operatora delete oraz zwraca jego wartość.

wypisz(): Przemierza całą listę od początku do końca i wyświetla zawartość wszystkich węzłów na ekranie.

Funkcja main: Demonstruje poprawne działanie napisanej struktury – tworzy obiekt listy, dodaje do niego przykładowe wartości, wyświetla stan listy, usuwa element ostateczny oraz prezentuje wynik końcowy.
