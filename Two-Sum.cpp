#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

class two_sum
{
public:
    // Se declaran las variables
    string result = "";
    vector<int>
    twoSum(vector<int> &nums, int target)
    {
        // se recorre el vector aumentando el indice para ver el valor del vector avanzado 1 posicion
        for (int i = 0; i < nums.size(); i++)
        {
            // se evalua si la suma de los valores en los indices i y j es igual al target
            for (int j = i + 1; j < nums.size(); j++)
            {
                // se evalua si la suma de los valores en los indices i y j es igual al target
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
