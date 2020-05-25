#ifndef PIPELIST_H
#define PIPELIST_H

#include <iostream>
#include <list>
#include <string>

class PipeList
{
private:
    std::list<std::string> lines;
 

public:
    PipeList();
    //Track(QString name);
   // Track(QString name, QString artist, QString album = "", QUrl link = QUrl(), QUrl preview = QUrl());

    //get methods
   // QString getName() {return name;}

    //set methods
   // void setName(QString newName);

   void printText(std::string text);

};

void increaseBuffer(char **str, int c);

#endif // PIPELIST_H