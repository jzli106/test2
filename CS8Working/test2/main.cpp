#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <sstream>
#include <chrono>
#include "useful.h"
#include "node.h"

typedef std::chrono::high_resolution_clock Clock;
using std::ostream;
using std::ifstream;
using std::ofstream;
using std::stringstream;


using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::clock_t;
using std::toupper;
void regexTest();
void regexTest2();

struct lineNum
{
    string s;
    int n;
};

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();

//        node a,b("new",1,1,1,1);
//        cout<<a;

//        a = b;
//        cout<<a<<endl;
//     this does not work give 1 less appreciate
//     employee
//    string s = "appreciate";
//    cout<<coutSyllables(s);

        //cout<<countit2("windowsa");
    regexTest();
    //regexTest2();

    return 0;
}

void regexTest()
{
    string regexSyll= "[aiouy]+e*|e(?!d$|ly).|[td]ed|le$|e$",
           regexParagraph = "[^\\r\\n]+((\\r|\\n|\\r\\n)[^\\r\\n]+)*",
           regexSentence = "((?:[A-Z]\\.|Dr\\.|Prof\\.|[^\\.!?])+)[\\.!?]",
           regexWord = "[A-Za-z]+('[A-Za-z]+)?",
           regexHWord = "[A-Za-z]+('[A-Za-z]+|-[A-Za-z]+)?",
           strs="";
    stringstream ss;
    string str;

    ifstream inf;
    inf.open("u2i3.txt");
    cout<<"file is open: "<<inf.is_open()<<endl;

    string line;
    lineNum l;
    int num = 0, p =0, total=0, senTotal = 0, pp=0, c, word = 0;
    vector<string> ln;


    ln.reserve(69000);
    auto time1 = Clock::now();

    clock_t start = std::clock();
    while(getline(inf, line))
    {

        //strdat.push_back(line);
        ss<<line;
        if(!line.size())
            ++p;
        else
        {
            //str[0]=toupper(str[0]);
//            total += countit2(&line);
//            senTotal += countSentences(&line);
//            pp += countParagraphs(&line);

            senTotal += countAll(&line,&regexSentence);
            pp += countAll(&line,&regexParagraph);
            word += countAll(&line, &regexWord);

        }
//        while(ss>>str)
//        {
//            //need to remove punctuation and check if it's actual word
//            //need to check for paragraphs
//            c =  countAll(&str,&regexSyll);
//            total +=c;
//            //node d(str,1,num,p,c);
//            ln.push_back(str);
//            cout<<str<<" : "<<c<<endl;
//        }
//       ss.str("");
//       ss.clear();

        regex rgx(regexWord);
        std::regex_iterator<string::iterator> it(line.begin(), line.end(), rgx);
        std::regex_iterator<string::iterator> end;

        for (; it != end; ++it)
        {

            strs = it->str();
            ln.push_back(strs);
            cout<<strs<<endl;
        }

       ++num;
       if(!(num%1000))
           cout<<num<<endl;
    }

    auto time2 = Clock::now();
    cout<<"here"<<endl;
    cout<<"time: "<<std::chrono::duration_cast<std::chrono::nanoseconds>(time2-time1).count()<<endl
        <<"time: "<<(double) (std::clock() - start)<<" milliseconds"<<endl
        <<"\npp: "<<pp
        <<"\ntotal lines: "<<num
        <<"\ntotal sentences: "<<senTotal
        <<"\nparagraphs: "<<p
        <<"\nwords: "<<ln.size()
        <<"\nSyllables: "<<total
        <<"\nreading level: "<<(206.835 - 1.015*((ln.size())/senTotal)-84.6*(total/(ln.size())))
        <<"\nreading grade: "<<(0.39*((ln.size())/senTotal)+11.8*(total/(ln.size()))-15.59)
        <<"word total: "<<word;
    inf.close();
}

void regexTest2()
{
    string regexSyll= "[aiouy]+e*|e(?!d$|ly).|[td]ed|le$|e$",
           regexParagraph = "[^\\r\\n]+((\\r|\\n|\\r\\n)[^\\r\\n]+)*",
           regexSentence = "((?:[A-Z]\\.|Dr\\.|Prof\\.|[^\\.!?])+)[\\.!?]";
    stringstream ss;
    string str;

    ifstream inf;
    inf.open("ui3.txt");
    ss<<inf.rdbuf();
    string a = ss.str();

    cout<<"file is open: "<<inf.is_open()<<endl;

    string line;
    int num = 0, p =0, total=0, senTotal = 0, pp=0;

    //strdat.reserve(69000);
    auto time1 = Clock::now();

    clock_t start = std::clock();
    total += countit2(&a);
    senTotal += countSentences(&a);
    pp += countParagraphs(&a);
    auto time2 = Clock::now();

    cout<<"time: "<<std::chrono::duration_cast<std::chrono::nanoseconds>(time2-time1).count()<<endl
        <<"time: "<<(double) (std::clock() - start)<<" milliseconds"<<endl
        <<"total lines: "<<num<<"\ntotal sentences: "<<senTotal<<"\nparagraphs: "<<p<<endl
        <<"Syllables: "<<total<<" pp: "<<pp;
    inf.close();
}
