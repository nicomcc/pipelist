#include <iostream>
#include <string>
#include <string.h>
#include "pipelist.h"

#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    char *pipeData = nullptr;

    int lineSize;
    int lineCount = 0;
    int input;

    if (argc > 1)
    {
        lineSize = atoi(argv[1]);
        cout << "Parameter: " << lineSize << endl;

        while ((input = getchar()) != EOF)
        {
            
            if (input == '\n' || input == '\r')
                lineCount++;

            increaseBuffer(&pipeData, input);
        }

        cout << pipeData << endl;
        cout << "line count: " << lineCount << endl;
        PipeList lines(lineSize, pipeData);
        lines.PrintList();

        

        free(pipeData);
        pipeData = NULL;
    }

    else if (argc <= 1)
    {
        cout << "Insufficient parameters" << endl;
    }

    cout << endl;

    return 0;
}