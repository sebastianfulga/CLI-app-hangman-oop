#include "Cuvant.h"

Cuvant::Cuvant(void): FileStr()
{
    nr = 0;
    random = 0;
}

Cuvant::Cuvant(const Cuvant &b)
{
    if (this == &b)
        return ;
    this->nr = b.nr;
    for (int i=0; i < this->nr; i++)
        strcpy(&this->s[i][0], &b.s[i][0]);
    strcpy(this->cuvant_corect, b.cuvant_corect);
    this->random = b.random;
}

void Cuvant::Open(void)
{
    int i = 0, j = 0;
    char c;
    FileStr f("cuvinte.in");

    while (!f.eof())
    {
        c = (char)f;
        if (c == X || c == EOF)
        {
            nr++;
            i++;
            /// s[i][j+1] = '\0';
            j=0;
            continue;
        }
        s[i][j] = c;
        j++;
    }

    srand (time(NULL));
    this->random = rand()%nr + 1;
    strcpy(cuvant_corect, &s[random][0]);
}

int Cuvant::getRandom(void)
{
    return random;
}

char* Cuvant::getmat(int i, int j)
{
    return &s[i][j];
}

Cuvant::~Cuvant(void)
{
    /// cout << "Destructor << endl;
}
