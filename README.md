# testy-zap
Testerka do zadania zapobiegliwy student z OI31.

# Użytkowanie
W folderze znajdziesz 4 pliki:
* testuj.cpp : Generatorka i testerka.
* zap1.out : 10^7 odpowiedzi dla n<=16 a,b<=32
* zap2.out : 3.5*10^5 odpowiedzi dla n<=3000 a,b<=10^9
* zap3.out : 1000 odpowiedzi dla n<=500000 a,b <= 10^9

Użytkowanie:
1. Do pliku testuj.cpp wklej swoją wzorcówkę.
    1. Zmień nazwę ``main`` na ``solve`` i zamiast cin przepisz dane z argumentu typu ``pair<int, vector<pair<int, int>>>``
    2. Zmień wypisywanie na zwracanie wyniku (tylko 1 wiersz).
2. Ustaw zmienną path na ścieżkę do odpowiedniego wyjścia
3. Odkomentuj odpowiednie dla testów MAXN, MAXT i TESTS
4. Skompiluj i wykonaj testuj.cpp.

Porady:
1. Polecam czyścić tablice i zmienne. Nie czyszczenie może prowadzić do złych wyników(prawdopodobnie na teście 2)
2. Polecam zmienić rozmiar swoich tablic na odpowiednio mniejszy dla paczki. Potrafi to mocno przyśpieszyć testowanie ( szczególnie jeśli czyścisz tablice )
3. Możesz też dodać własną weryfikatorkę wyjścia. 

Testuj.cpp jest wypełnione przykładowym rozwiązaniem.

# FAQ:
> Mam runtime error. Jak wypisać test? 

Zmień w testerce początek pętli na ostatni test który wypisał że przeszedł(np. int i = 31000). Odkomentuj wypisywanie testu przed wykonaniem go.

> Testerka nie działa, gdzie to zgłosić

Jeśli nie działa testerka lub generatorka, zgłoś to przed github zakładkę 'Issues'. Jeśli uważasz że dla danego testu wygenerowałem złą odpowiedź, napisz o tym na forum. Uwaga: jeśli pierwszy test jest ŹLE, to prawdopodobnie wina generatorki, więc zgłoś to przez github.

