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
 
    std::list<std::string> StringToLines(std::string text, int lineSize);

public:
    PipeList();
    PipeList(int lineSize, std::string text);

   void SeparateByLine(std::string text);
   void PrintList();
};

void increaseBuffer(char **str, int c);

#endif // PIPELIST_H