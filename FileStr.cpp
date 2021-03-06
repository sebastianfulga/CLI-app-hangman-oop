#include "FileStr.h"

FileStr::FileStr(void)
{
    /// cout << "Constructor implicit ..." << endl;
}

FileStr::FileStr(const char *name)
{
    fp.open(name, ios::in | ios::out);
    if (fp.fail())
    {
        cerr << "Eroare la deschiderea fisierului ... <" << name << ">" << endl;
        getch();
        exit(0);
    }
    nume = new char[NMAX];
    strcpy(nume, name);
}

FileStr::operator const char(void)
{
    if (!fp.eof())
        return fp.get();
    return EOF;
}

bool FileStr::eof(void)
{
    return fp.eof();
}

FileStr::~FileStr()
{
    delete nume;
    fp.close();
}
