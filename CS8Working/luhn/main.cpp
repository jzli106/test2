#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <random>
#include <fstream>
#include <streambuf>


const unsigned int CARDSIZE = 16;

using namespace std;

string generateCard(string cardType);

// convert a char (0-9) to int
// double the int if the number is less than 9 return it
// if it's greater than 9 add the ones and tens digit together and return it
char luhnDouble(char c);

//will sum a string of integers
int luhnSum(string c);

void savedNumbers(std::string cardfile, int amount, string cardType);


int main()
{
    vector<string> dat;
    vector<char> cv;
    string cardType = "400109";
    srand(time(NULL));

    savedNumbers("cardNumbers.txt",1000, cardType);
    ifstream inf;
    char c;
    inf.open("visa.dat");
    cout<<"file is open: "<<inf.is_open()<<endl;
    string str;

    //escape '\06'
    while(!inf.eof())
    {
        c = inf.get();
        cv.push_back(c);
        cout<<c;
    }


    inf.close();
    cout<<"number of lines: "<<dat.size()<<endl;
    return 0;
}

string generateCard(string cardType)
{
    string s, randStr = "";
    while(cardType.size() + randStr.size() < CARDSIZE-1)
        randStr +=to_string(rand()%10);

    s = cardType + randStr;

    for(int i = CARDSIZE; i >=0; --i)
        if(!(i%2))
            s[i]=luhnDouble(s[i]);

    int check = (10 - (luhnSum(s)%10))%10;
    return (cardType + randStr + to_string(check));
}

char luhnDouble(char c)
{
    int temp = (c - '0')*2;
    return temp < 10 ? char(temp+'0') : char((temp%10 + temp/10)+'0');
}

int luhnSum(string c)
{
    int sum = 0;
    for(unsigned int i = 0; i < c.size(); ++i)
        sum += c[i]-'0';

    return sum;
}


void savedNumbers(std::string cardfile, int amount, string cardType)
{
    ofstream outf;
    outf.open(cardfile);
    string card;

    for(int j =0; j < amount; ++j)
    {
        card = generateCard(cardType);
        for(int i = 0; i < card.size(); ++i)
        {

            outf<<card[i];
            if(!((i+1)%4)&&i<card.size()-1)
                outf<<" ";
        }
        outf<<"\n";
    }
    outf.close();
}
