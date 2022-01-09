#include <iostream>

int solution(int limit) {
    int sum_of_squares {0};
    int square_of_sums{ 0};
    int sum {0};
    for (size_t i = 1; i <= limit; i++)
    {
        sum_of_squares += i * i;
        sum += i;
    }
    
    square_of_sums = sum * sum;
    std::cout<<sum_of_squares<<"  "<<square_of_sums<<std::endl;
    int difference = square_of_sums - sum_of_squares;
    return difference;    
}
int main()
{
    int limit = 100;
    std::cout<<solution(limit)<<std::endl;
}