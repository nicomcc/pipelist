#ifndef PIPELIST_H
#define PIPELIST_H

#include <iostream>
#include <list>
#include <string>
#include <vector>

class PipeList
{
private:
    std::list<std::string> lines;
 

public:
    PipeList();
    PipeList(int lineSize, int nodeCount, std::string text);
    //Track(QString name);
   // Track(QString name, QString artist, QString album = "", QUrl link = QUrl(), QUrl preview = QUrl());

    //get methods
   // QString getName() {return name;}

    //set methods
   // void setName(QString newName);

   void SeparateByLine(std::string text);
   void printText(std::string text);

   std::vector<std::string> StringToLines(std::string text);

};

void increaseBuffer(char **str, int c);

#endif // PIPELIST_H