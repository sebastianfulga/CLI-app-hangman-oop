# CLI-app-hangman-oop
CLI Hangman application written in C++ using OOP principles. 

# Aplicatie in linia de comanda scrisa in limbajul de programare C++ care imbina diferite concepte ale programarii orientate pe obiecte precum: incapsularea, abstractizarea, mostenirea. 

## Jocul hangman (spanzuratoare) este simulat in aceasta aplicatie de tip CLI in C++. 

Clasa Cuvant contine in interfata privata diferite campuri ce contorizeaza numarul de cuvinte citite din fisier (cu ajutorul clasei specializate FileStr, dedicata lucrului cu fisiere), un camp care va stoca intr-o matrice toate cuvintele din fisier, un camp care contine o variabila auxiliara de tip sir de caractere pentru a stoca cuvantul aleatoriu si, evident, un camp care retine cuvantul random din fisier, se foloseste functia srand din biblioteca <ctime>. In interfata publica avem constructorii si destructorii si diferite metode care ajuta la implementarea jocului, cum ar fi: metoda Open care stocheaza cuvintele din fisier in matricea de cuvinte si gaseste un cuvant aleator si 2 getteri ce returneaza campul random si un sir de caractere din matricea de cuvinte. 
  
Clasa Cuvant mosteneste clasa FileStr care se ocupa cu lucrul de fisiere. 

Clasa hangman mosteneste clasa Cuvant si se ocupa cu restul functiilor care tin de implementarea jocului: verifica daca litera introdusa de la tastatura este corecta, ofera posibilitatea de a da o indicatie utilizatorului cu precizarea ca numarul de incercari va fi decrementat. Contine in interfata privata numarul de incercari posibile si numarul de incercari gresite si 2 variabile care ajuta la prelucrarea sirului de caractere a cuvantului care trebuie ghicit de utilizator. 

## S-a folosit conceptul de mostenire. 

Mostenirea este reprezentata de faptul ca dupa ce am definit cateva clase (de baza), putem crea alte clasa (derivate) fara sa o luam de la 0. Astfel obtinem alte TDA-uri pornind de la TDA-uri deja existente. Am specializat clasa Cuvant pentru a utiliza diferite metode cu lucrul cu fisiere din clasa de baza FileStr. Clasa hangman mosteneste si ea clasa Cuvant, practic avem o mostenire indirecta intre clasa hangman si clasa FileStr. 

Privind acest proces al mostenirii (al derivarii) dintre clasa de baza spre cea derivata observam o specializare a clasei de baza. 

Privind in sens invers, dinspre clasa derivata spre clasa de baza, observam o generalizare a clasei de baza. 

Vorbim de mostenire simpla, clasa derivta avand o singura clasa de baza, fiind si cea mai utilizata forma a mostenirii. 

Concluzia: economia de cod si faptul ca putem specializa prin derivarea de noi ramuri din aceasta ierarhie deja creata. 

Toti specificatorii din lista de mostenire fiind de tip public, mostenirea este publica, altfel ar fi fost mostenire privata. 
