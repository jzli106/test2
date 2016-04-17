#include "node.h"


node::node()
{
    this->word = "";
    this->feq = 0;
    this->lnum = 0;
    this->pnum = 0;
    this->syllables = 0;
    lineNum = new vector<size_t>;
    pNum = new vector<size_t>;
}

node::node(string word, size_t count, size_t lnum,size_t pnum, size_t syllables )
{
    this->word = word;
    this->feq = count;
    this->lnum = lnum;
    this->pnum = pnum;
    this->syllables = syllables;
    lineNum = new vector<size_t>;
    pNum = new vector<size_t>;
}

node::~node()
{
    delete lineNum;
    delete pNum;
}

node::node(const node& other)
{
    if(this != &other)
    {
        copy(other);
    }
}

node& node::operator=(const node& other)
{
    if(this != &other)
    {
        copy(other);
    }

    return *this;
}

string node::getWord()
{
    return word;
}

size_t node::getCount()
{
    return feq;
}

size_t node::getLineNum()
{
    return lnum;
}

size_t node::getParagraphNum()
{
    return pnum;
}

size_t node::getSyllablesCount()
{
    return syllables;
}

void node::setWord(string word)
{
    this->word = word;
}

void node::setCount(size_t count)
{
    this->feq = count;
}

void node::setLineNum(size_t lineNum)
{
    this->lnum = lineNum;
}

void node::setParagraph(size_t paragraphNum)
{
    this->pnum = paragraphNum;
}

void node::setSyllablesCount(size_t syllablesCount)
{
    this->syllables = syllablesCount;
}


bool node::operator<(const node &x) const
{
    return word < x.word;
}

bool node::operator<=(const node &x) const
{
    return word <= x.word;
}

bool node::operator>(const node &x) const
{
    return word > x.word;
}

bool node::operator>=(const node &x) const
{
    return word >= x.word;
}

bool node::operator==(const node &x) const
{
    return word == x.word;
}

bool node::operator!=(const node &x) const
{
    return word != x.word;
}

void node::copy(const node& other)
{
    word = other.word;
    feq = other.feq;
    lnum = other.lnum;
    pnum = other.pnum;
    syllables = other.syllables;
    *lineNum = *(other.lineNum);
    *pNum = *(other.pNum);
}

 node operator+(const node& x, const node& y)
{
    node a;
    if(x.word == y.word)
    {
        a.setWord(x.word);
        a.setCount(x.feq + y.feq);
        a.setSyllablesCount(x.syllables);
    }
    return a;
}

ostream& operator<<(ostream& out, const node& whom)
{
    out<<"Word: "<<whom.word
       <<", Line Number: ["<<whom.lnum<<"], "
       <<"Paragraph Number: ["<<whom.pnum<<"], "
       <<"Syllable count: ["<<whom.syllables <<"] ";
    return out;
}

 istream& operator>>(istream& in, node& whom)
{
    return in;
}


