#include <iostream>
#include <string>
#include <cstdlib>


const unsigned int NUMBEROFDIGITS = 16;

using namespace std;

string generateCard(string bank, string cardType);
char luhnDouble(char c);


int main()
{
    string num = "420085"

    return 0;
}

char luhnDouble(char c)
{
    tolower(c);
    int temp = (c - 'a')*2;
    return temp < 10 ? temp : (temp%10 + temp/10);
}
