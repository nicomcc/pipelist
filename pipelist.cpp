#include "pipelist.h"
#include <string.h>

using namespace std;

PipeList::PipeList() {}

PipeList::PipeList(int lineSize, string text)
{
    lines = StringToLines(text, lineSize);
}

void PipeList::PrintList()
{
    for (auto v : lines)
        cout << v << endl;
}

list<string> PipeList::StringToLines(string text, int lineSize)
{
    list<string> result;
    string temp;
    int markbegin = 0;
    int markend = 0;

    for (int i = 0; i < text.length(); ++i)
    {
        if (text[i] == '\n')
        {
            markend = i;
            string line = text.substr(markbegin, markend - markbegin);
           // cout << "line Size " << line.size() << endl;
            //cout << "parameter Size " << lineSize << endl;
            if (line.size() < lineSize)
                result.push_back(line);
            else
                result.push_back(line.substr(0, lineSize));

            markbegin = (i + 1);
        }
    }
    return result;
}

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
        cout << endl
             << "Memory allocation error" << endl;
    }
    else
    {
        *str = buffer;
        buffer[len] = c;
        buffer[len + 1] = 0;
        // cout << "Buffer size: " << len << endl;
    }
}