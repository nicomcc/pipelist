#include "pipelist.h"
#include <string.h>

using namespace std;

PipeList::PipeList()
{}

PipeList::PipeList(int lineSize, int nodeCount, string text)
{

}

void PipeList::printText(string text){
    cout << text << endl;
}

vector<string> PipeList::StringToLines(string text)
{
    std::vector<std::string> result;
    std::string temp;
    int markbegin = 0;
    int markend = 0;

    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] == '\n')
        {
            markend = i;
            result.push_back(text.substr(markbegin, markend - markbegin));
            markbegin = (i + 1);
        }
    }

    for (int i = 0; i < (int)result.size(); i++)
            cout << "line " << i << " " << result.at(i) << endl;
    return result;
}

// void PipeList::SeparateByLine(string text){

// }

//since c++ doesn't have realloc, used same function as C lib
void increaseBuffer(char **str, int c)
{
 
    size_t len = 0;
    char *buffer;

    if (*str)
        len = strlen(*str);

    buffer = (char *)realloc(*str, len + 2);
    if (!buffer)
    {
        cout << endl << "Memory allocation error" << endl;
    }
    else
    {
        *str = buffer;
        buffer[len] = c;
        buffer[len + 1] = 0;
        cout << "Buffer size: " << len << endl;
    }
}