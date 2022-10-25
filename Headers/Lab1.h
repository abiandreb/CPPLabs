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
    return cos(2 * fabs(x)) + (1.1 * x + 2) * Ctg(3 * x)/1.7 * (2.3 * x - 5);
}

//Returns height of triangular
double CalculateHeight(double A[2], double B[2], double C[2]){

    double sideA = PointsDist(A, B);
    double sideB = PointsDist(A, C);
    double sideC = PointsDist(B, C);
    double halfPerimeter = (sideA + sideB + sideC) / 2;

    return 2 / sideA * sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));
}

//Returns bisector of Triangular
double CalculateBisector(double A[2], double B[2], double C[2]){

    double sideA = PointsDist(A, B);
    double sideB = PointsDist(A, C);
    double sideC = PointsDist(C, B);

    return sqrt(sideA * sideB * (sideA + sideB + sideC) * (sideA + sideB - sideC)) / (sideA + sideB);
}

void RunLab1()
{
    //Lab 1 start
    std::cout << "LAB 1: \n\n";
    const int variant = 11;
    double pointA[2] = {0.0, 0.0};
    double pointB[2] = {variant, variant - 1};
    double pointC[2] = {0 - variant, variant + 1};

    double x[6] = {M_PI/2, -M_PI/2, 3*M_PI/2, -3 * M_PI/2, 0, M_PI/4};

    //Lab 1 Task 1
    std::cout << "Lab 1 Task 1 \n\n";
    std::cout << "Calculate formula value : cos2 |x| + (1,1x +2)ctg3x/1,7(2,3x-5)\n\n";

    for (int i = 0; i < 6; ++i) {

        double val = CalculateFormula(x[i]);
        if(isinf(val) or isnan(val))
        {
            std::cout << "Current input value: " << i << " results as: [" << val << "] caused by division by zero or invalid cotangent expression\n\n";
            continue;
        }
        std::cout << "Current input value " << x[i] << "\n";
        std::cout << "Expression result " << val << "\n";
        std::cout << "\n";
    }

    //Lab 1 Task 2
    std::cout << "\nLab 1 Task 2 \n\n";
    std::cout << "Find triangular bisector and height by points A[0,0], B[11,10], C[-11,12]:\n";
    std::cout << "\nTriangular height: " << CalculateHeight(pointA, pointB, pointC);
    std::cout << "\nTriangular bisector: " << CalculateBisector(pointA, pointB, pointC);
    //Lab 1 end

    std::cout <<"\n\n";
    system("pause");
}
