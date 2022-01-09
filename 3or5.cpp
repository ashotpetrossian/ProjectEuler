#include <iostream>

int solution(int three, int five, int limit) {
    int result_sum {0};
    for (size_t i = 0; i < limit; i++)
    {   
        if ( i % 3 == 0 || i % 5 == 0) { result_sum += i; }
    }
    return result_sum;
}
int main() 
{
    int three = 3; int five = 5; int limit = 1000;
    std::cout<<solution(three, five, limit);
}