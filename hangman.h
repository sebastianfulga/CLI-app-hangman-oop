#ifndef HANGMAN_H
#define HANGMAN_H

#include "Cuvant.h"

class hangman: public Cuvant
{
    private:
        int n;
        char word[30];
        int incercari_posibile;
        int incercari_gresite;
    public:
        hangman(Cuvant &c);
        void Init(void);
        int Verifica(int n, int random, char s[ N ][ M ], char x);
        int start(int random, int n, char *word, char s[ N ][ M ]);
        void thegame(void);
        ~hangman(void);
};

#endif // HANGMAN_H
