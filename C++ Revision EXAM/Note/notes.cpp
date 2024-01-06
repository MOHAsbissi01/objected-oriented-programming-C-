#include "note.h"


   Notes::Notes()
   {
        id=0;
        objet="";
        desc="";
        date="";
   }
    Notes::Notes(int a,string b,string c,string d)
    {
          id=a;
        objet=b;
        desc=c;
        date=d;
    }

    int Notes::getid()const
    {
        return id;
    }
    string Notes::getobjet()const
    {
        return objet;
    }

    string Notes::getdesc()const
    {
        return desc;
    }
    string Notes::getdate()const
    {
        return date;
    }
