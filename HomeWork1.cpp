#include<iostream>
#include<stdio.h>

int main()
{
    int s = 0;
    std::cout << "Var.#5" << std::endl;
    std::cout << "Task #8" << std::endl << "Enter a three-digit number" << std::endl;
    int k = 0;
    std::cin >> k;
    int n1 = 0;
    n1 = k % 10;
    int n10 = 0;
    n10 = ((k - n1) % 100);
    int n100 = 0;
    n100 = (k - n1 - n10);
    s = n100 + n10 / 10 + n1 * 10;
    std::cout << s << std::endl;
    /////////////////////////////////////////////////////////////////////////////////////
    int i1 = 0;
    int d = 564;
    i1 = d % 10;
    int x = 0;
    x = (d - i1)/10+i1*100;
    std::cout << "Task #17" << std::endl << "Answer: X = "  << x << std::endl;
    return 0;
}
