# Testerka do zadania 'Zapobiegliwy student' z OI31.

## Opis działania

Testy są podzielone na trzy grupy, przy czym każdy plik `zap$g.out` odpowiada GRUPIE `$g`. W każdej grupie, wejście do testu `$i` jest generowane funkcją `gen($i)`. Wyjście do testu to `$i-ta` linijka pliku `zap$g.out`.
Gwarantowane jest, że niezależnie od środowiska, `gen($i)` zwróci to samo wejście dla tego samego `$i` i `$g`. 

## Użytkowanie
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

## FAQ:
> Mam runtime error. Jak wypisać test? 

Zmień w testerce początek pętli na ostatni test który wypisał że przeszedł(np. int i = 31000). Odkomentuj wypisywanie testu przed wykonaniem go.

> Testerka nie działa, gdzie to zgłosić

Jeśli nie działa testerka lub generatorka, zgłoś to przed github zakładkę 'Issues'. Jeśli uważasz że dla danego testu wygenerowałem złą odpowiedź, napisz o tym na forum. Uwaga: jeśli pierwszy test jest ŹLE, to prawdopodobnie wina generatorki, więc zgłoś to przez github.

> Testerka dziwnie się zachowuje ( np. w oczywisty sposób wypisuje błędne wyniki)

Może być to skutek wychodzenia poza pamięć twojego programu, a co za tym idzie nadpisywania pamięci (np. testerki).
Rozwiązanie: Kompiluj z ``--fsanitize=address`` (opcjonalnie -g dla lepszego outputu fsanitize). Zapobieże to wychodzeniu poza pamięć.

> Pomimo że czyszczę pamięć coś i tak się psuje na drugim teśćie

Możesz umieścić swój kod w osobnym strucie ( poza ``#flagami kompilacji`` i ``constexpr`` ). Nie zagwarantuje to że tablice i zmienne będą czyszczone ( podobnie jakbyś je definiował w funkcjach) ale przynajmniej struktury takie jak wektory i mapy będą puste.
