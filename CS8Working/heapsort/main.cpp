/**
  *Last update: March 31, 2016
  * 1. Fixed sorting part by switching the reheapdown with swap
  * 2. added a check to see if the vector is a heap
  *
  */




#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define leftChild(n) (2*n+1)
#define rightChild(n) (2*n+2)
#define parent(n) ((n-1)/2)

template<typename T>
void heapSort(vector<T> &list);

template<typename T>
void reheapifyDown(vector<T> &list, size_t pos);

template<typename T>
void reheapifyUp(vector<T> &list, size_t pos);

template<typename T>
void initialize(vector<T> &list);

template<typename T>
void print(const vector<T>&list, std::string title);


int main()
{

   vector<size_t> list;
   srand(time(NULL));
   initialize(list);
   print(list,"unsorted");
   heapSort(list);
   print(list,"sorted");
}


template<typename T>
void initialize(vector<T> &list)
{
    size_t largest = 10, qty = 10;
//    cout<<"How many random numbers do you want? ";
//    cin>>qty;
//    cout<<"What is the largest random number to see? ";
//    cin>>largest;
    for(size_t i = 0; i < qty; ++i)
       list.push_back(rand()%largest + 1);
}

template<typename T>
void heapSort(vector<T> &list)
{
    for(size_t i = 1; i < list.size(); ++i)
        reheapifyUp(list,i);

    cout<<"isheap: "<<std::is_heap(list.begin(),list.end())<<endl;
    print(list,"heap");
    for(size_t i = list.size()-1; i > 0; --i)
    {

        swap(list[0],list[i]);
        reheapifyDown(list,i);
    }
}

template<typename T>
void reheapifyDown(vector<T> &list, size_t pos)
{

    size_t toSwap; // to be change
    bool notDone = true; // not done
    //when it's not done and data of left child is less than or equal t

    for(size_t i = 0; notDone && leftChild(i) < pos;i = toSwap)
    {
        toSwap = rightChild(i)>=pos ?
                    leftChild(i)   :
                 list[leftChild(i)] > list[rightChild(i)]
                                   ?
                 leftChild(i) : rightChild(i);
        if(list[i] <= list[toSwap])
           swap(list[i],list[toSwap]);
        else
           notDone = false;
    }
}



template<typename T>
void reheapifyUp(vector<T> &list, size_t pos)
{
    bool notDone = true;
    size_t child = pos;
    while(notDone && child)
      if(list[child] > list[parent(child)])
      {
          swap(list[child], list[parent(child)]);
          child = parent(child);
      }
      else
          notDone = false;
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
