#include <iostream>
#include <stdio.h>

int main()
{
    std::cout << "Var.#5" << std::endl;
    std::cout << "Task #8" << std::endl << "Enter a three-digit number" << std::endl;
    int givenNumber1 = 0;
    std::cin >> givenNumber1;
    int n1 = givenNumber1 % 10;
    int n10 = ((givenNumber1 - n1) % 100);
    int n100 = (givenNumber1 - n1 - n10);
    std::cout << n100 + n10 / 10 + n1 * 10 << std::endl;
    /////////////////////////////////////////////////////////////////////////////////////
    std::cout << "Task #17" << std::endl;
    int result = 564;
    std::cout << "Answer: X= "  << (result - result % 10) / 10 + (result % 10) * 100 << std::endl;
    return 0;
}
