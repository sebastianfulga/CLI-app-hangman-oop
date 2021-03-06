#include "hangman.h"

hangman::hangman(Cuvant &c): Cuvant(c)
{
    n = 0;
    incercari_posibile = 0;
    incercari_gresite = 0;
}

void hangman::Init(void)
{
    n = strlen(&s[random][0]);
    word[0] = s[random][0];
    for (int i=1; i<n-1; i++)
        word[i] = '-';
    word[n-1] = s[random][n-1];
    word[n] = '\0';
    s[random][0] = '9';
    s[random][n-1] ='9';
    incercari_gresite = 6;
    incercari_posibile = n-2;
    cout << "\nH A N G   M A N\n\n" << endl;
    cout << "Vieti ramase: " << incercari_gresite << endl;
    cout << "Gaseste cuvantul " << &word[0] << endl;
}

int hangman::Verifica(int n, int random, char s[ N ][ M ], char x)
{
    int i;
    for (i=1; i<n; i++)
    {
        if (s[random][i] == x && s[random][i] != '9')
        {
            s[random][i] = '9';
            return i;
        }
    }
    return 0;
}

int hangman::start(int random, int n, char *word, char s[ N ][ M ])
{
    int k, hint, OK;
    char x;
    do
    {
        cout << "\nApasa tasta 1 pentru indiciu" << endl;
        cout << "Sau introduceti o litera: ";
        cin >> x;
        fflush(stdin);

        if (x == '1')
        {
            OK = 0;
            incercari_gresite = incercari_gresite - 2;
            if (incercari_posibile == 1 || incercari_gresite <= 0)
                return 0;
            do
            {
                for (hint=n-2; hint > 0 && OK ==0; hint--)
                    if (s[random][hint] != '9')
                    {
                        word[hint] = s[random][hint];
                        OK = 1;
                        s[random][hint] = '9';
                        incercari_posibile--;
                    }
            }
            while (!OK);
            cout << "\n!!!! Mai ai " << incercari_gresite << " vieti\n";
            cout << "H I N T: " << &word[0];
            continue;
        }

        if ((k = Verifica(n, random, s, x)))
        {
            word[k] = x;
            cout << "Litera corecta! Esti aproape sa castigi: " << &word[0] << endl;
            if (!--incercari_posibile)
                return 1;
        }
        else
        {
            incercari_gresite--;
            if (incercari_gresite==0)
            {
                return 0;
            }
            cout << "Litera gresita.\n!!!! Mai ai " << incercari_gresite << " vieti" << endl;
        }
    }
    while(true);
}

void hangman::thegame(void)
{
    start(random, n, word, s) == 1 ? printf("\nY O U  W O N!") : printf("Ai pierdut X.X Cuvantul era %s", cuvant_corect);
}

hangman::~hangman(void)
{
    /// cout << "Destructor" << endl;
}
