#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::istream;
using std::ostream;


class node
{
    public:
        node();
        node(string word, size_t count, size_t lnum, size_t pnum, size_t syllables );
        ~node();
        node(const node& other);
        node& operator=(const node& other);


        string getWord();
        size_t getCount();
        size_t getLineNum();
        size_t getParagraphNum();
        size_t getSyllablesCount();
        void setWord(string word);
        void setCount(size_t count);
        void setLineNum(size_t lineNum);
        void setParagraph(size_t paragraphNum);
        void setSyllablesCount(size_t syllablesCount);

        bool operator<(const node &x) const;
        bool operator<=(const node &x) const;
        bool operator>(const node &x) const;
        bool operator>=(const node &x) const;
        bool operator==(const node &x) const;
        bool operator!=(const node &x) const;


        friend node operator+(const node& x, const node& y);
        friend ostream& operator<<(ostream& out, const node& whom);
        friend istream& operator>>(istream& in, node& whom);
    private:
        string word;
        size_t feq, lnum, pnum, syllables;
        vector<size_t> *lineNum;
        vector<size_t> *pNum;
        void copy(const node& other);
};

#endif // NODE_H
