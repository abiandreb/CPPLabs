#include <iostream>

//Lab 3

//Task 1

//Returns min value in array
void Min()
{
    int arrSize;
    float arr[11];
    std::cout << "\nEnter arr size: \n";
    std::cin >> arrSize;
    std::cout << "\nType values for the array: \n";

    for (int i = 0; i < arrSize; ++i)
    {
        std::cout << "Enter " << i + 1 << " value: \n";
        std::cin >> arr[i];
    }

    std::cout << "Entered values: [";
    for (int i = 0; i < arrSize; ++i) {
        std::cout << arr[i];
        if (i < arrSize - 1)
        {
            std::cout << ",";
        }
    }
    std::cout << "]\n";

    float min = 8.5;
    for (int i = 0; i < arrSize; ++i)
    {
        if(arr[i] < 3.5 or arr[i] > 8.5) continue;

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    std::cout << "Minimum value of array is: " << min;
    std::cout <<"\n\n";
    system("pause");
}

//Task2
//Calculate expression

void CalculateExpression()
{
    float a = 0;
    float b = 0;
    int variant = 11;

    std::cout << "\nCalculating a and b values: \n";

    for(int i = variant; i < variant + 8; i++) {
        double val = CalculateFormula(i + 3);
        if(isinf(val) or isnan(val)) continue;
        a = a + val;
    }

    for(int i = variant; i < variant + 5; i++)
    {
        double val = CalculateFormula(i + 4);
        if(isinf(val) or isnan(val)) continue;
        b = b * val;
    }

    std::cout << "\nValue of a: " << a << " Value of b: " << b;
    std::cout << "\nExpression value Z = a-2b: Z = " << a - 2* b;
}

//Task 3
//Tabulate function
void TabulateFunction()
{
    std::cout << "Function exp(1+x-y) tabulation [1; 2] * [0; 1] h = 0.05: \n";
    for (float x = 1; x < 2; x=x+0.05) {
        for (float y = 0; y < 1; y=y+0.05) {
            std::cout << "F(" << x << "; " << y << "): " << exp(1 + x - y) << std::endl;
        }
    }
}

void RunLab3()
{
    //Lab 3 start
    //Lab 3 Task 1
    std::cout << "\n\nLab 3:\n";
    std::cout << "\nLab 3 Task 1: \n";
    Min();

    //Lab 3 Task 2
    std::cout << "\nLab 3 Task 2: \n";
    TabulateFunction();

    //Lab 3 Task 3
    std::cout << "\nLab 3 Task 3: \n";
    CalculateExpression();
    //Lab 3 end
    std::cout << "\nLab 3 end;\n";

    std::cout <<"\n\n";
    system("pause");
}