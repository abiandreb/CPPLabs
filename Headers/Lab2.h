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

void Task1UserInput()
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
    }
}

void Task2UserInput()
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
}

void RunLab2()
{
    //Lab 2 start
    //Lab 2 Task 1
    std::cout << "LAB 2: \n\n";

    std::cout << "Lab 2 Task 1 \n";
    std::cout << "Check if given point coordinates are in the figure plotted below:\n";

    std::cout <<
              "\n                                           ^"
              "\n                                           |"
              "\n                                         2 -"
              "\n                                           |"
              "\n                                           |"
              "\n                                           |"
              "\n                                           |"
              "\n                                 .------ 1 - --------."
              "\n                                 |         |         |"
              "\n                                 |         |         |"
              "\n                                 |         |         |"
              "\n                                 |         |         |"
              "\n                      -|---------|---------|---------|---------|->"
              "\n                      -2       -1|        0|         1         2"
              "\n                                 |         |"
              "\n                                 |         |"
              "\n                                 |         |"
              "\n                                 `----- -1 -"
              "\n                                           |"
              "\n                                           |"
              "\n                                           |"
              "\n                                           |"
              "\n                                        -2 -"
              "\n                                           |\n\n";



    Task1UserInput();

    //Lab 2 Task 2
    std::cout << "\n\nLab 2 Task 2\n\n";
    std::cout << "Find f(x,y) value according to table function expression \n";
    std::cout <<
              "\n    +-----+---+---+---+"
              "\n    | X/Y | 0 | 1 | 2 |"
              "\n    +-----+---+---+---+"
              "\n    |   0 | 2 | 1 | 1 |"
              "\n    |   1 | 1 | 0 | 0 |"
              "\n    |   2 | 2 | 1 | 2 |"
              "\n    +-----+---+---+---+\n";

    Task2UserInput();

    //Lab 2 end
}