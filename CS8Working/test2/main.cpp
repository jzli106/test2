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
struct lineNum
{
    string s;
    int n;
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
//     this does not work give 1 less appreciate
//     employee
//    string s = "appreciate";
//    cout<<coutSyllables(s);
//    stringstream ss;
//    string str;

//    ifstream inf;
//    inf.open("2600.txt");
//    cout<<"file is open: "<<inf.is_open()<<endl;

//    string line;
//    lineNum l;
//    int num = 0, P =0;
//    vector<lineNum> ln;
//    //ln.resize();
//    vector<string> strdat, wordstr;
//    auto time1 = Clock::now();

//    clock_t start = std::clock();
//    while(getline(inf, line))
//    {

//        strdat.push_back(line);
//        ss<<line;
//        if(!line.size())
//            ++P;
//        while(ss>>str)
//        {
//            //need to remove punctuation and check if it's actual word
//            //need to check for paragraphs
//            str[0]=toupper(str[0]);
//            l.s = str;
//            l.n = num;
//            ln.push_back(l);
//        }
//       ss.str("");
//       ss.clear();
//       ++num;
//    }

//    auto time2 = Clock::now();


//    cout<<"time: "<<std::chrono::duration_cast<std::chrono::nanoseconds>(time2-time1).count()<<endl;
//    cout<<"time: "<<(double) (std::clock() - start)<<" milliseconds"<<endl;
//    cout<<"total lines: "<<strdat.size()<<
//          " total words: "<<ln.size()<<
//          " p: "<<P<<endl;

//    cout<<ln[5152].s;
//    inf.close();

    return 0;
}
