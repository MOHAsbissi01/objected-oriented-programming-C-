#ifndef NOTE_H_INCLUDED
#define NOTE_H_INCLUDED
#include <String>


using namespace std;

class Notes
{
protected:

    int id;
    string objet;
    string desc;
    string date;
public:
    Notes();
    Notes(int,string,string,string);
    ~Notes(){}
    int getid()const;
    string getobjet()const;
    string getdesc()const;
    string getdate()const;

};


#endif // NOTE_H_INCLUDED
