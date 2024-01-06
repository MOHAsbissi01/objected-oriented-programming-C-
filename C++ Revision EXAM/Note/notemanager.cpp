#include "NotesManger.h"
#include <fstream>
#include <iostream>



 NotesManager::NotesManager()
 {

 }
    bool NotesManager::chercherNote(int id)
    {
         vector<Notes*>::iterator it;
         for(it=v.begin();it!=v.end();it++)
        {
            if((*it)->getid()==id)
            {
                return true;
            }

        }


            return false;

    }
    void  NotesManager::ajouter(const Notes &n)
    {
        try
        {

            if(chercherNote(n.getid())==false)
            {
                Notes* p=new Notes(n);
                v.push_back(p);
            }
            else
                throw string ("erreur");
        }
        catch(const string & ch)
        {
            cerr<<ch;
        }
    }

    void  NotesManager::ajouter(const Tag &n)
    {
        try
        {
            if(chercherNote(n.getid())==false)
             {
                Notes* p=new Tag(n);
                v.push_back(p);
             }
             else

                    throw string ("erreur");
        }

         catch(const string & ch)
          {
            cerr<<ch;
          }
    }



    void NotesManager::enregistrer(string nomf)
    {
        ofstream f;

            string filename;
             filename += nomf;
            filename += ".txt";



        f.open(filename.c_str());
        {
             vector<Notes*>::iterator it;
             for(it=v.begin();it!=v.end();it++)
            {
                if((*it)->getobjet()==nomf)
                {
                    f<<(*it)->getid()<<" "<<(*it)->getobjet()<<" "<<(*it)->getdesc()<<" "<<(*it)->getdate()<<endl;;
                }

            }
            f.close();
        }


    }
   void NotesManager::charger(string objet)
    {
        ifstream f;
        string id,obj,desc,date;
        string filename;
        filename += objet;
        filename += ".txt";

     f.open(filename.c_str());
        {
             vector<Notes*>::iterator it;
             for(it=v.begin();it!=v.end();it++)
            {
                 while(f>>id>>obj>>desc>>date)
                 {
                      if((*it)->getobjet()== objet)
                      {
                        cout<<desc;
                      }
                 }

            }
            f.close();
        }



    }


