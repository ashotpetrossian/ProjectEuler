#include <iostream>

int solution(int limit){
    int longest_chain{0};
    for (size_t i = 1; i <= limit; i++)
    {
        int number = i;
        std::cout<<"number = "<<number<<" ";
        int term_count{1};
        while (number != 1) {
            if (number % 2 == 0 ) { number /= 2; }
            else { number = number * 3 + 1; }
            term_count++;
        }
        if (longest_chain < term_count) { longest_chain = term_count; }
        std::cout<<longest_chain<<std::endl;
    }
    return longest_chain;
}
int main()
{
    int limit = 1000000;
    std::cout<<solution(limit)<<std::endl;
}