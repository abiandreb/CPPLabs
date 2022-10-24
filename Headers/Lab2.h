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