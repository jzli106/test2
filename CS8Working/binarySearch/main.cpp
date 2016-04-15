#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector<int> &list, int val, size_t &middle);

int main()
{
    size_t middle;
    int val = 12;
    vector<int> a;
    a.push_back(12);
    a.push_back(13);
    a.push_back(14);
    a.push_back(15);
    a.push_back(16);
    a.push_back(17);
    a.push_back(18);
    a.push_back(19);
    a.push_back(199);
    a.push_back(1333);
    a.push_back(11222);

    cout<<binarySearch(a,val,middle)<<endl;
    cout<<"Position: "<<middle<<endl;
    return 0;
}

bool binarySearch(const vector<int> &list, int val, size_t &middle)
{
    int low = 0, high = list.size()-1;

    while(low <= high)
    {
        middle = low + (high - low)/2;

        if(list[middle] == val)
            return true;
        else if( val > list[middle])
            low = middle + 1;
        else
            high = middle - 1;
    }

    return false;

}
