#ifndef TAG_H_INCLUDED
#define TAG_H_INCLUDED

#include "note.h"
using namespace std;



class Tag:public Notes
{
private:
    string nom;
public:
    Tag();
    Tag(int,string,string,string,string);
    ~Tag(){}
};


#endif // TAG_H_INCLUDED
