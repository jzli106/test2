#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "RandomTypeGenerator.h"
#include "Frequency.h"
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <sstream>
#include <chrono>

typedef std::chrono::high_resolution_clock Clock;
struct lineNum
{
    string s;
    int n;
};


using namespace std;

int main()
{
    RandomTypeGenerator r; // need this object for the next call
    Heap<string> h(false);// = r.generateIntegers(); //

//    for (size_t i = 0; i < 6000000; ++i)
//    {
//        h << "Hello";
//        h << "World";
//    }



//    return 0;


        stringstream ss;
        string str;

        ifstream inf;
        inf.open("2600.txt");
        cout<<"file is open: "<<inf.is_open()<<endl;

        string line;
//        lineNum l;
        int num = 0, P =0;
  //      vector<lineNum> ln;
        //ln.resize();
        vector<string> strdat, wordstr;
        auto time1 = Clock::now();

        clock_t start = std::clock();
        while(getline(inf, line))
        {

            strdat.push_back(line);
            ss<<line;
            if(!line.size())
                ++P;
            while(ss>>str)
            {
                //need to remove punctuation and check if it's actual word
                //need to check for paragraphs
                str[0]=toupper(str[0]);
                h<<str;
            }
           ss.str("");
           ss.clear();
           ++num;
        }


        Frequency<string> f(h);

        f.print2();
        auto time2 = Clock::now();


        cout<<"time: "<<std::chrono::duration_cast<std::chrono::nanoseconds>(time2-time1).count()<<endl;
        cout<<"time: "<<(double) (std::clock() - start)<<" milliseconds"<<endl;

//        cout<<ln[5152].s;
        inf.close();



        cout << endl << endl;

        return 0;

}
