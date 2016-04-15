#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;


typedef bool (*fun)(int, int);


template<typename T>
struct struct_p
{
    bool(*fun)(T, T);
};

template<typename T>
struct struct_de
{
    bool de(T a ,T b)
    {
        return a < b;
    }
};



template<typename T>
struct struct_as
{
    bool as(T a ,T b)
    {
        return a < b;
    }
};



template<typename T>
void print(const vector<T>&list, string title);

template<typename T>
size_t maxOfList(const vector<T>& list);


template<typename T>
void initialize(vector<T> &list);

template<typename T>
void bubbleSort3(vector<T> &list, struct_p<T> c);

template<typename T>
void bubbleSort2(vector<T> &list, fun c);

template<typename T>
void bubbleSort(vector<T> &list);

template<typename T>
bool ascending(T a, T b);

template<typename T>
bool descending(T a, T b);



int main()
{

   struct_p<size_t> as, ds;
   as.fun = &ascending;
   ds.fun = &descending;

   vector<size_t> list;
   srand(time(NULL));
   initialize(list);

   print(list,"unsorted");
   bubbleSort3(list,as);
   // cout<<"Sort finished"<<endl;
   print(list,"ascending sorted");

   bubbleSort3(list,ds);
   // cout<<"Sort finished"<<endl;
   print(list,"descending sorted");
}

template<typename T>
void bubbleSort3(vector<T> &list, struct_p<T> c)
{
    bool didISwap = true;
    while(didISwap)
    {
        didISwap = false;
        for(size_t i = 0; i < list.size()-1;++i)
            if(c.fun(list[i],list[i+1]))
            {
                swap(list[i], list[i+1]);
                didISwap = true;
            }
    }
}

template<typename T>
void bubbleSort2(vector<T> &list , fun c)
{
    bool didISwap = true;
    while(didISwap)
    {
        didISwap = false;
        for(size_t i = 0; i < list.size()-1;++i)
            if(c(list[i],list[i+1]))
            {
                swap(list[i], list[i+1]);
                didISwap = true;
            }
    }
}


template<typename T>
void bubbleSort(vector<T> &list)
{
    bool didISwap = true;
    while(didISwap)
    {
        didISwap = false;
        for(size_t i = 0; i < list.size()-1;++i)
            if(list[i] > list[i+1])
            {
                swap(list[i], list[i+1]);
                didISwap = true;
            }
    }
}

template<typename T>
void initialize(vector<T> &list)
{
    size_t largest, qty;
    cout<<"How many random numbers do you want? ";
    cin>>qty;
    cout<<"What is the largest random number to see? ";
    cin>>largest;
    for(size_t i = 0; i < qty; ++i)
       list.push_back(rand()%largest + 1);
}


template<typename T>
size_t maxOfList(const vector<T>& list)
{
    size_t maximum = list[0];
    for(size_t i = 1; i < list.size(); ++i)
        maximum = max(maximum, list[i]);
    return maximum;
}

template<typename T>
void print(const vector<T>&list, string title)
{
    size_t digits = 2 + log10(maxOfList(list))+1,
           col = 65/digits;
    cout<<"Your "<<title<<" list is: "<<endl;
    for(size_t i = 0; i < list.size(); ++i)
    {
        if(!(i%col))
            cout<<endl;
        cout<<setw(digits)<<list[i];
    }
    cout<<endl<<endl;
}


template<typename T>
bool ascending(T a, T b)
{
    return a > b;
}

template<typename T>
bool descending(T a, T b)
{
    return a < b;
}
