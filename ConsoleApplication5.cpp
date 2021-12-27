
#include <iostream>

using namespace std;
#include <time.h>
#include <cstdlib>
#include <functional>


int main()
{
     {
        const int SIZE = 50;
        srand(time(0));
        /// Task 1
        {
            double arr[SIZE];
            for (double& i : arr) i = rand() % 1000;
            printArray(SIZE, arr);
        }

        /// Task 2
        {
            int arr[SIZE];
            for (int& i : arr) i = rand() % 2;
            invertArray(SIZE, arr);
        }


        /// Task 3
        {
            const int SIZE_ARR_TASK_3 = 8;
            int arr[SIZE_ARR_TASK_3];
            initArray(SIZE_ARR_TASK_3, arr);
        }

                }

        return 0;
    }
} 