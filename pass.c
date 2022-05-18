#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomPassGen(int length);

int main()
{

    int length;

    printf("%s", "Enter number of chars you want in the password: ");
    scanf("%d", &length);

    printf("%s", "Your random password is: ");
    randomPassGen(length);

    return 0;
}

void randomPassGen(int length)
{
    //int count = 0;
    int rando = 0;
    srand((unsigned int)(time(NULL)));

    char capitals[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char digits[] = "0123456789";
    char symbols[] = "!@#$%^&*_=+-/.?<>)";

    char mypass[length]; // = {capitals, lowercase, digits, symbols};

    rando = rand() % 4;

    for (size_t i = 0; i < length; i++)
    {
        if (rando == 1)
        {
            mypass[i] = digits[rand() % 10];
            rando = rand() % 4;
            printf("%c", mypass[i]);
        }
        else if (rando == 2)
        {
            mypass[i] = lowercase[rand() % 26];
            rando = rand() % 4;
            printf("%c", mypass[i]);
        }
        else if (rando == 3)
        {
            mypass[i] = symbols[rand() % 18];
            rando = rand() % 4;
            printf("%c", mypass[i]);
        }
        else
        {
            mypass[i] = capitals[rand() % 26];
            rando = rand() % 4;
            printf("%c", mypass[i]);
        }
    }
}
/*
static char(SIZE){
    return mypass;
}*/