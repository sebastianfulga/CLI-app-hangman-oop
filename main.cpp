#include <iostream>
#include "hangman.h"
#include "FileStr.h"
#include "Cuvant.h"

#define true 1
#define X 10


using namespace std;

int main(void)
{
    Cuvant ob2;
    ob2.Open();
    hangman ob1(ob2);
    ob1.Init();
    ob1.thegame();
    return 0;
}

