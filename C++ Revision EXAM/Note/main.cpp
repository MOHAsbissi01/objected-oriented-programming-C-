#include <iostream>
#include "NotesManger.h"

using namespace std;

int main()
{
   Notes n(1,"test","aaa","bbb");
   Tag t(2,"test2","ccc","bbb","sss");
   NotesManager n2;
   n2.ajouter(n);
   n2.ajouter(t);
   n2.enregistrer("test");
   n2.charger("test");
   return 0;
}
