#include "Tag.h"

Tag::Tag()
{
    nomPerson = "";
}

Tag::Tag(string nomPerson)
{
    this->nomPerson = nomPerson;
}

Tag::~Tag()
{
}

string Tag::getNomPerson()
{
    return nomPerson;
}

void Tag::setNomPerson(string nomPerson)
{
    this->nomPerson = nomPerson;
}


