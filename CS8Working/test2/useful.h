

#ifndef USEFUL
#define USEFUL
#include <iostream>
#include <regex>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::regex;

int coutSyllables(string data);
bool silente(string data);
int countit(std::string data);


////////////////////////////////////////Syllable counter/////////////////////////////////////////////
/// found these in jave from:
//http://stackoverflow.com/questions/33425070/how-to-calculate-syllables-in-text-with-regex-and-java

int coutSyllables(string data)
{
    int count = 0;

    //change to lower case
    std::transform(data.begin(), data.end(), data.begin(), ::tolower);

    // if the string has silent e remove it and cout
    if (data[data.length()-1] == 'e') {
        if (silente(data)){
            string newdata = data.substr(0, data.length()-1);
            count = count + countit(newdata);
        } else {
            count++;
        }
    } else {
        count = count + countit(data);
    }
    return count;
}

int countit(string data) {

    int count =0;
    std::regex r("[^aeiouy]*[aeiouy]{1}", std::regex_constants::icase); // don't need to worry about case
    //std::regex r("[bcdfghjklmnpqrstvwxz]*[aeiouy]+[bcdfghjklmnpqrstvwxz]*");
    std::regex_iterator<std::string::iterator> it (data.begin(), data.end(), r);
    std::regex_iterator<std::string::iterator> end;

    while (it != end)
    {
        ++count;
        ++it;
    }
    return count;
}

bool silente(string data)
{
    data = data.substr(0, data.length()-1);
    regex e("[aeiouy]", std::regex_constants::icase);
    return regex_search(data, e) ? true : false;
}

#endif // USEFUL

