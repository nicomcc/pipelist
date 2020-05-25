#include <iostream>
#include <string>
#include <string.h>
#include "pipelist.h"

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
            //prevents from jumping line
            if(input == '\n' || input == '\r') continue;
            increaseBuffer(&pipeData, input);
        }


    
    PipeList test;
    cout << "class print: " << endl;
    test.printText(pipeData);

    cout << "text after buffer" << endl << pipeData << endl; 
    } 
  

    else if (argc <= 1)
    {
        cout << "Insufficient parameters" << endl;
    }

    cout << endl;

    return 0;
}