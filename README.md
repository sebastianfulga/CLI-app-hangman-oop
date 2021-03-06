# CLI-app-hangman-oop
CLI Hangman application written in C++ using OOP principles. 

# Aplicatie in linia de comanda scrisa in limbajul de programare C++ care imbina diferite concepte ale programarii orientate pe obiecte precum: incapsularea, abstractizarea, mostenirea. 

Mostenirea este reprezentata de faptul ca dupa ce am definit cateva clase (de baza), putem crea alte clasa (derivate) fara sa o luam de la 0. Astfel obtinem alte TDA-uri pornind de la TDA-uri deja existente. Am specializat clasa Cuvant pentru a utiliza diferite metode cu lucrul cu fisiere din clasa de baza FileStr. Clasa hangman mosteneste si ea clasa Cuvant, practic avem o mostenire indirecta intre clasa hangman si clasa FileStr. 

Privind acest proces al mostenirii (al derivarii) dintre clasa de baza spre cea derivata observam o specializare a clasei de baza. 

Privind in sens invers, dinspre clasa derivata spre clasa de baza, observam o generalizare a clasei de baza. 

Vorbim de mostenire simpla, clasa derivta avand o singura clasa de baza, fiind si cea mai utilizata forma a mostenirii. 

Concluzia: economia de cod si faptul ca putem specializa prin derivarea de noi ramuri din aceasta ierarhie deja creata. 

Toti specificatorii din lista de mostenire fiind de tip public, mostenirea este publica, altfel ar fi fost mostenire privata. 
