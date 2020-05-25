#include "pipelist.h"
#include <string.h>

using namespace std;

PipeList::PipeList()
{

}

void PipeList::printText(string text){
    cout << text << endl;
}


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