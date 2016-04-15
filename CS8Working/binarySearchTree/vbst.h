#ifndef VBST_H
#define VBST_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <limits>
#include <cmath>
#include <vector>

using namespace std;

enum VBST_TRAVERSAL_TYPES {VIN_ORDER, VPRE_ORDER, VPOST_ORDER};
enum VBST_ERROR_TYPES {VEMPTY};
enum VWHICH_CHILD {VRIGHT,VLEFT};


template<typename T>
class vbst
{
    public:
        typedef void (vbst<T>::*fptr)(vector<T>,ostream &) const;

        vbst(VBST_TRAVERSAL_TYPES  t = VIN_ORDER);

        vbst(const T &d, size_t c = 1, VBST_TRAVERSAL_TYPES t = VIN_ORDER);

        vbst(const vbst<T> &other);

        ~vbst();

        vbst<T>& operator=(const vbst<T> &other);

        void insert(const T &d, size_t c = 1);

        vbst<T>& operator<<(const T &d);

        size_t find(const T &d);

        void clear();

        bool remove(const T &d, size_t c = 1);

        bool removeAll(const T &d);

        size_t totalData();

        size_t totalNodes();

        size_t depth();

        const T& leftMost() const;

        const T& rightMost() const;

        bool empty() const;

        bool balanced();

        void rebalance();

        void setTraversal(VBST_TRAVERSAL_TYPES t);

        VBST_TRAVERSAL_TYPES currentTraversal();


        template<typename U>
        friend
        ostream& operator<<(ostream& out, const vbst<U> &other);

        template<typename U>
        friend
        istream& operator>>(istream& in, vbst<U> &other);

    private:
        vector<T> *vb;

        VBST_TRAVERSAL_TYPES  traverse;

        fptr whatToDo[3];

        static VWHICH_CHILD direction[2];

        void copy(const vector<T> &v);

        void nukem(vector<T> &v);

        void inOrder(vector<T> &v, ostream &out) const;

        void preOrder(vector<T> &v, ostream &out) const;

        void postOrder(vector<T> &v, ostream &out) const;

        size_t depth(vector<T> &v);

        bool balanced(vector<T> &v);

        void rebalance(vector<T> &v);

        size_t theMost(vector<T> &v, VWHICH_CHILD child) const;

        size_t findParent(vector<T> &v, T d);

        size_t totalDataItems(vector<T> &v);

        ostream& print(ostream &out = cout) const;

};

template<typename T>
VWHICH_CHILD vbst<T>::direction[2]={VRIGHT,VLEFT};

template<typename T>
vbst<T>::vbst(VBST_TRAVERSAL_TYPES  t)
{
    traverse = t;
    vb = new vector<T>;
}

template<typename T>
vbst<T>::vbst(const T &d, size_t c , VBST_TRAVERSAL_TYPES t)
{
    // need to put the data and number of copies into a structure
    traverse = t;
    vb = new vector<T>();
}

template<typename T>
vbst<T>::vbst(const vbst<T> &other)
{
    if(vb != other)
    {
        vb->clear();
        copy(other);
    }
}

template<typename T>
vbst<T>::~vbst()
{
   nukem(*vb);
}

template<typename T>
vbst<T>& vbst<T>::operator=(const vbst<T> &other)
{
    if(vb != other)
    {
        vb->clear();
        copy(other);
    }
}

template<typename T>
void vbst<T>::insert(const T &d, size_t c)
{

}

template<typename T>
vbst<T>& vbst<T>::operator<<(const T &d)
{
    insert(d);
    return *this;
}

template<typename T>
size_t vbst<T>::find(const T &d)
{

}

template<typename T>
void vbst<T>::clear()
{
    vb->clear();
}

template<typename T>
bool vbst<T>::remove(const T &d, size_t c)
{

}

template<typename T>
bool vbst<T>::removeAll(const T &d)
{
    vb->clear();
    return true;
}

template<typename T>
size_t vbst<T>::totalData()
{
    return vb->size();
}

template<typename T>
size_t vbst<T>::totalNodes()
{
    vb->size();
}


template<typename T>
size_t vbst<T>::depth()
{
    if(vb->empty())
    {
        return 0;
    }
    else
    {
        //http://cs.stackexchange.com/questions/6161/what-is-the-depth-of-a-complete-binary-tree-with-n-nodes
        //not sure if this is the right formula
        return floor(log(vb->size()));
    }
}

template<typename T>
const T& vbst<T>::leftMost() const
{

}

template<typename T>
const T& vbst<T>::rightMost() const
{
    return vb->size()-1;
}

template<typename T>
bool vbst<T>::empty() const
{
    return vb->empty();
}

template<typename T>
bool vbst<T>::balanced()
{

}

template<typename T>
void vbst<T>::rebalance()
{

}

template<typename T>
void vbst<T>::setTraversal(VBST_TRAVERSAL_TYPES t)
{
    traverse = t;
}

template<typename T>
VBST_TRAVERSAL_TYPES vbst<T>::currentTraversal()
{
    return traverse;
}



template<typename U>
ostream& operator<<(ostream& out, const vbst<U> &other)
{

}


template<typename U>
istream& operator>>(istream& in, vbst<U> &other)
{

}

template<typename T>
void vbst<T>::copy(const vector<T> &v)
{
    for(size_t i = 0; i < v.size(); ++i)
    {
        *vb[i] = v[i];
    }
}

template<typename T>
void vbst<T>::nukem(vector<T> &v)
{
    vb->clear();
}

template<typename T>
void vbst<T>::inOrder(vector<T> &v, ostream &out) const
{

}

template<typename T>
void vbst<T>::preOrder(vector<T> &v, ostream &out) const
{

}

template<typename T>
void vbst<T>::postOrder(vector<T> &v, ostream &out) const
{

}

template<typename T>
size_t vbst<T>::depth(vector<T> &v)
{

}

template<typename T>
bool vbst<T>::balanced(vector<T> &v)
{

}

template<typename T>
void vbst<T>::rebalance(vector<T> &v)
{

}

template<typename T>
size_t vbst<T>::theMost(vector<T> &v, VWHICH_CHILD child) const
{

}

template<typename T>
size_t vbst<T>::findParent(vector<T> &v, T d)
{

}

template<typename T>
size_t vbst<T>::totalDataItems(vector<T> &v)
{

}

template<typename T>
ostream& vbst<T>::print(ostream &out) const
{

}


#endif // VBST_H
