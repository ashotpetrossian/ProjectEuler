#include <iostream>

int solution(int limit) {
    int firstNumber = 1;
    int secondNumber = 2;
    int even_fib_sum{2};
    for (size_t i = 0;; i++)
    {
        i = firstNumber + secondNumber;
        if (i >= limit) { break; }
        firstNumber = secondNumber;
        secondNumber = i;
        if ( i % 2 == 0 ) { std::cout<<"i = "<<i<<std::endl; even_fib_sum += i; }
    }
    return even_fib_sum;
}

int main()
{
    int limit = 4000000;
    std::cout<<solution(limit)<<std::endl;
}