#include <iostream>
#include "Headers/Lab1.h"
#include "Headers/Lab2.h"
#include "Headers/Lab3.h"

int main() {

    //Lab 1 start
    std::cout << "LAB 1: \n\n";
    const int variant = 11;
    double pointA[2] = {0.0, 0.0};
    double pointB[2] = {variant, variant - 1};
    double pointC[2] = {0 - variant, variant + 1};

    double x[7] = {545.45, 1078.23, 20.65, 30.12, 500.54, 14.1232, 15.12455};

    //Lab 1 Task 1
    std::cout << "Lab 1 Task 1 \n\n";
    std::cout << "Calculate formula value : cos2 |x|+ 1,7(2,3x-5)/(1,1x +2)ctg3x\n";
    std::cout << "Calculating formula results: \n";

    for (int i = 0; i < 7; ++i) {
        std::cout << "Current input value " << x[i] << "\n";
        CalculateFormula(x[i]);
        std::cout << "\n";
    }

    //Lab 1 Task 2
    std::cout << "Lab 1 Task 2 \n\n";
    std::cout << "Find triangular bisector and height:\n";
    std::cout << "Calculating triangular height B: \n";
    CalculateHeight(pointA, pointB, pointC);

    std::cout << "Calculating triangular bisector C: \n";
    CalculateBisector(pointA, pointB, pointC);
    std::cout << "LAB 1 end; \n\n";
    //Lab 1 end

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


    float points[6][2] = {{1, 1}, {0, 0}, {1, -1}, {-1, -1}, {-1, 1}, {1, 2}};

    std::cout << "Predefined values: \n";
    for (int i = 0; i < 6 ; ++i) {
        std::cout <<"\nPoint: [" << points[i][0] << "," << points[i][1] << "] is in figure: " << IsInFigure(points[i][0], points[i][1]);
    }

    std::cout << "\nUser input: \n";

    Lab2Task1UserInput();

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

    float parameters[5][2] = {{0,0}, {0, 1}, {1, 1}, {1, 2}, {3, 3}};

    std::cout << "Predefined values: \n";

    for (int i = 0; i < 5 ; ++i) {
        std::cout <<"\nParameters: [" << parameters[i][0] << "," << parameters[i][1] << "] Function value: " << GetFuncValue(parameters[i][0], parameters[i][1]);
    }

    std::cout << "\nUser input: \n";

    Lab2Task2UserInput();

    //Lab 2 end

    //Lab 3 start

    //Lab 3 Task 1

    //Lab 3 Task 2

    //Lab 3 Task 3

    //Lab 3 end
    return 0;
}