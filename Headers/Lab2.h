#include <iostream>
#include <stdio.h>

//Lab 2

//Task 1

/*
 *                                                       ^
 *                                                       |
 *                                                     2 -
 *                                                       |
 *                                                       |
 *                                                       |
 *                                                       |
 *                                             .------ 1 - --------.
 *                                             |         |         |
 *                                             |         |         |
 *                                             |         |         |
 *                                   2       -1|        0|         1         2
 *                                  -|---------|---------|---------|---------|->
 *                                             |         |
 *                                             |         |
 *                                             |         |
 *                                             |         |
 *                                             `----- -1 -
 *                                                       |
 *                                                       |
 *                                                       |
 *                                                       |
 *                                                    -2 -
 *                                                       |

*/

//Returns bool if point is in figure
bool IsInFigure(float pointX, float pointY)
{
    if (pointX > 0 and pointY < 0)
    {
        return false;
    }

    if (pointX <= 1 and pointX >= -1 and pointY >= -1 and pointY <= 1 )
    {
        return true;
    }

    return false;
};

//Task 2

/*
 *    +-----+---+---+---+
 *    | X/Y | 0 | 1 | 2 |
 *    +-----+---+---+---+
 *    |   0 | 2 | 1 | 1 |
 *    |   1 | 1 | 0 | 0 |
 *    |   2 | 2 | 1 | 2 |
 *    +-----+---+---+---+
 */

//Returns int as a value of f(x, y) from table value
int GetFuncValue(int x, int y)
{
    int funcValues[3][3] = {{2,1,1},{1,0,0},{2,1,2}};
    if (x > 2 or y > 2 or x < 0 or x < 0)
    {
     std::cout << "Value out of range ";
        return -1;
    }
    else
    {
       return funcValues[x][y];
    }
}

void Lab2Task1UserInput()
{
    bool runner = true;

    while (runner)
    {
        int x;
        int y;
        char comma;

        std::cout << "\nEnter point X and Y comma separated:\n" << std::endl;
        std::cin >> x >> comma >> y;

        std::cout << "Point Is in Figure: " << IsInFigure(x, y);

        std::cout << "\n\nEnter another value?";
        std::cout << "\nType '1' to enter value or '0' to proceed\n";

        std::cin >> runner;

        std::cout << "\nProceeding... ";
    }
}

void Lab2Task2UserInput()
{
    bool runner = true;

    while (runner)
    {
        int x;
        int y;
        char comma;

        std::cout << "\nEnter function parameters X and Y comma separated:\n" << std::endl;
        std::cin >> x >> comma >> y;

        std::cout << "Function value: " << GetFuncValue(x, y);

        std::cout << "\n\nEnter another value?";
        std::cout << "\nType '1' to enter value or '0' to proceed\n";

        std::cin >> runner;
    }

    std::cout << "\nProceeding... ";
}