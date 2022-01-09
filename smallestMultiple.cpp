#include <iostream>

bool is_divisible (int n, int limit) {
    for (size_t i = 1; i <= limit; i++)
    {
        if (n % i != 0) { return false; }
    }
    return true;
}

int solution(int limit) {
    for (size_t i = 1; ; i++)
    {
        if (is_divisible(i, limit)) {return i;}
    }
    return -1;
}
int main()
{
    std::cout<<solution(20)<<std::endl;
}