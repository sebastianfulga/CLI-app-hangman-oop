#ifndef CUVANT_H
#define CUVANT_H


#include "FileStr.h"


#include <ctime>


#define N 100
#define M 100

class Cuvant: public FileStr
{
    protected:
        int nr;
        char s[ N ][ M ];
        char cuvant_corect[ N ];
        int random;
    public:
        Cuvant(void);
        Cuvant(const Cuvant &b);
        void Open(void);
        int getRandom(void);
        char* getmat(int i, int j);
        ~Cuvant(void);
};

#endif // CUVANT_H
