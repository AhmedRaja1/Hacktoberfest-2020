// Program: Deficient Numbers
// author@HamzaMateen

/** ----**PROBLEM STATEMENT**----
A number is considered deficient if the sum of its factors is less than twice the number iteself.
EXAMPLE: 10 is a deficient number,
factors of 10 are 1, 2, 3 and 5.
Sum is 1+2+3+5+10 = 18 < (2*10) = 20

Problem:
we need to find all the deficient numbers in a given range.
**/ 
/*SOLUTION*/
#include <iostream>
#include <vector> // to hold the range
#include <numeric> // for sum/accum fucntion

std::vector<int> findDeficientNumbers (std::vector<int>& range)
{
    std::vector<int> deficientNums;
    std::vector<int> factors;
    
    for (int num: range)
    {
        // finding the factors of ith number
        for(int i = 0; i <= num; i++)
        {
            if (i % num == 0)
                factors.push_back(i);
        }
        
        // checking for deficiency 
        if (accumulate(factors.begin(), factors.end(), 0 < (2*num)))
            deficientNums.push_back(num);
            
        // clear the factors vector for i+1th number
        factors.clear();
    }
    
    // return the list of deficient numbers
    return deficientNums;
}

// DRIVER CODE
int main()
{ 
    std::vector<int> listOfNums;
    std::cout << "[input] Enter 10 numbers to check deficiency for:\n\n" << std::endl;
    
    int input;
    for (int i = 0; i<10; i++)
    {
        std::cout << "Enter " << i << "th number\n";
        std::cin >> input;
        listOfNums.push_back(input);
    }
    // print all the defcent numbers
    std::cout << "The Deficient Numbers are:" << std::endl;
    
    std::vector<int> deficNums = findDeficientNumbers(listOfNums);

    for (int n: deficNums)
        std::cout << n << ", ";
    
    return 0;
}
