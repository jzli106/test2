#include <iostream>
#include <string>
#include <cstdlib>


const unsigned int NUMBEROFDIGITS = 16;

using namespace std;

string generateCard(string bank, string cardType);
char luhnDouble(char c);


int main()
{
    string num = "420085";

    for(int i = 10; i > 0; --i)
    {
        //cout<<char('k' - i)<<endl;
        cout<< luhnDouble(char('j'-i))<<endl;
    }

    return 0;
}

char luhnDouble(char c)
{
    tolower(c);
    cout<<c<<endl;
    int temp = (c - 'a')*2;
    return temp < 10 ? char(temp) : char(temp%10 + temp/10);
}
