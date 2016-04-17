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
bool silente(const std::string &data);
int countit(std::string data);


////////////////////////////////////////Syllable counter/////////////////////////////////////////////
/// found these in jave from:

int coutSyllables(string data)
{
    int count = 0;
    int len = data.length();
    int len_ = len -1;
    //change to lower case
    //std::transform(data.begin(), data.end(), data.begin(), ::tolower);

    // if the string has silent e remove it and cout
    if (data[len_] == 'e'||data[len_]=='E') {
        if (silente(data)){
           // string newdata = data.substr(0, data.length()-1);
            count = count + countit(data)-1;
        } else {
            ++count;
        }
    } else {
        count = count + countit(data);
    }
    return count;
}

//http://codegolf.stackexchange.com/questions/47322/how-to-count-the-syllables-in-a-word
int countit2(string *data) {

    int count =0;
    std::regex r("[aiouy]+e*|e(?!d$|ly).|[td]ed|le$|e$", std::regex_constants::icase);
    std::regex_iterator<std::string::iterator> it (data->begin(), data->end(), r);
    std::regex_iterator<std::string::iterator> end;

    while (it != end)
    {
        ++count;
        ++it;
    }
    return count;
}

int countAll(string *data, string *reg) {

    int count =0;
    std::regex r(*reg, std::regex_constants::icase);
    std::regex_iterator<std::string::iterator> it (data->begin(), data->end(), r);
    std::regex_iterator<std::string::iterator> end;

    while (it != end)
    {
        ++count;
        ++it;
    }
    return count;
}

int countSentences(string *data) {

    int count =0;

    // don't need to worry about case
    std::regex r("((?:[A-Z]\\.|Dr\\.|Prof\\.|[^\\.!?])+)[\\.!?]", std::regex_constants::icase);
    std::regex_iterator<std::string::iterator> it (data->begin(), data->end(), r);
    std::regex_iterator<std::string::iterator> end;

    while (it != end)
    {
        ++count;
        ++it;
    }
    return count;
}

//[^\r\n]+((\r|\n|\r\n)[^\r\n]+)*

int countParagraphs(string *data) {

    int count =0;

    // don't need to worry about case
    std::regex r("[^\\r\\n]+((\\r|\\n|\\r\\n)[^\\r\\n]+)*", std::regex_constants::icase);
    std::regex_iterator<std::string::iterator> it (data->begin(), data->end(), r);
    std::regex_iterator<std::string::iterator> end;

    while (it != end)
    {
        ++count;
        ++it;
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

bool silente(const string &data)
{
    //data = data.substr(0, data.length()-1);
    regex e("[aeiouy]+e$", std::regex_constants::icase);
    return regex_search(data, e) ? true : false;
}



#endif // USEFUL

