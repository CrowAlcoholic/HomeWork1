#include<iostream>
#include<stdio.h>

int main()
{
    std::cout << "Var.#5" << std::endl;
    std::cout << "Task #8" << std::endl << "Enter a three-digit number" << std::endl;
    int k = 0;
    std::cin >> k;
    int n1 = k % 10;    
    int n10 = ((k - n1) % 100);    
    int n100 = (k - n1 - n10);    
    std::cout << n100 + n10 / 10 + n1 * 10 << std::endl;
    /////////////////////////////////////////////////////////////////////////////////////
    int d = 564;
    std::cout << "Task #17" << std::endl << "Answer: X = "  << (d - d % 10) / 10 + (d % 10) * 100 << std::endl;
    return 0;
}
