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
    int input;

    if (argc > 1)
    {
        lineSize = atoi(argv[1]);
        cout << "Parameter: " << lineSize << endl;

        while ((input = getchar()) != EOF)
        {            
            increaseBuffer(&pipeData, input);
        }

        cout << endl << "***********Original lines***********" << endl;
        PipeList lines(lineSize, pipeData);
        lines.PrintList();

        cout << endl << "***********Sorted lines***********" << endl;
        lines.Sort();
        lines.PrintList();

        cout << endl << "***********Reverse Sorted lines***********" << endl;
        lines.Reverse();
        lines.PrintList();

        //free memory
        free(pipeData);
        pipeData = NULL;
    }

    else if (argc <= 1)
    {
        cout << "Insufficient parameters" << endl;
    }

   // cout << endl;

    return 0;
}