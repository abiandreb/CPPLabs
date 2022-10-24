#include <iostream>
#include <math.h>

double Ctg(double rad);
double PointsDist(double pointX[2], double pointY[2]);
double CalculateHeight(double A[2], double B[2], double C[2]);
double CalculateBisector(double A[2], double B[2], double C[2]);
double CalculateFormula(double x);

//Returns cotangent value
double Ctg(double rad){
    return cos(rad) / sin(rad);
}

//Returns distance between two points
double PointsDist(double pointX[2], double pointY[2]){
    return sqrt(pow((pointY[0] - pointX[0]), 2) + pow((pointY[1] - pointX[1]), 2));
}

//Returns result of formula calculation
double CalculateFormula(double x) {

    double result;
    result = cos(2 * fabs(x)) + (1.1 * x + 2) * Ctg(3 * x) / 1.7 * (2.3 * x - 5);
    std::cout << "Result of formula calculation: " << result << "\n";

    return result;
}

//Returns height of triangular
double CalculateHeight(double A[2], double B[2], double C[2]){

    double heightB;
    double sideA = PointsDist(A, B);
    double sideB = PointsDist(A, C);
    double sideC = PointsDist(B, C);
    double halfPerimeter = (sideA + sideB + sideC) / 2;

    heightB = 2 / sideA * sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));
    std::cout << "Triangular Height: " << heightB << "\n";

    return heightB;
}

//Returns bisector of Triangular
double CalculateBisector(double A[2], double B[2], double C[2]){

    double bisectorC;
    double sideA = PointsDist(A, B);
    double sideB = PointsDist(A, C);
    double sideC = PointsDist(C, B);

    bisectorC = sqrt(sideA * sideB * (sideA + sideB + sideC) * (sideA + sideB - sideC)) / (sideA + sideB);
    std::cout << "Bisector C value:  " << bisectorC << "\n";

    return bisectorC;
}


