#include <iostream>

//Lab 3

//Task 1

//Generates arr of random values in range
float* GenerateArr(float min, float max, int size)
{
    static float* arr = new float [size];
    int range = max - min + 1;
    std::cout << "Array of random values: [";
    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % range + min;
        std::cout << arr[i];

        if(i != size -1) std::cout << ",";
    }
    std::cout << "]\n";

    return arr;
}

//Returns min value in array
float Min(float* arr)
{
    float min = 0;
    for (int i = 0; i < 11; ++i)
    {
        if(arr[i] >= 3.5 and arr[i] <= 8.5)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    return min;
}

void Lab3Task1UserInput()
{
    float arr[11];
    std::cout << "Type 11 values for the array \n";
    for (int i = 0; i < 11; ++i) {
        std::cout << "\nNext value: \n";
        std::cin >> arr[i];
    }
    std::cout << "\nMinimum value is: " << Min(arr);
}

void RunLab3()
{
    //Lab 3 start

    //Lab 3 Task 1


    //Lab 3 Task 2

    //Lab 3 Task 3

    //Lab 3 end
}