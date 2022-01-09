#include <iostream>

int solution(int n) {
    for (size_t i = 1, j = 2; ; i += j, j++)
    {
        int divisible_count{0};
        std::cout<<"\ni = "<<i<<", j = "<<j;
        for (size_t k = 1; k <= i; k++)
        {
            if ( i % k == 0) { divisible_count++; }
        }
        std::cout<<"\ndiv count = "<<divisible_count<<std::endl;
        if (divisible_count > 500) { std::cout<<"number with 500 divisibles = "<<i<<std::endl; break;}
    }
    return 1;
} 

int main()
{
    int divisibles = 500;
    solution(divisibles);
}