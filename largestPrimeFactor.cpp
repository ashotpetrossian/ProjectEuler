#include <iostream>
#include <vector>

void show(std::vector<int> vec) {
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i]<<" ";
    }
    
}

std::vector<int> solution(long n) {
    std::vector<int> prime_facs;
    for (size_t i = 2; i <= n; i++)
    {
        if (n % i == 0) { prime_facs.push_back(i); n /= i; }
        if (n == 1) { break; }
    }
    return prime_facs;
}

int main()
{
    long n = 600851475143;
    std::vector<int> prime_facs = solution(n);
    int largest = 0;
    for (size_t i = 0; i < prime_facs.size(); i++)
    {
        if (largest < prime_facs[i]) { largest = prime_facs[i]; }
    }
    std::cout<<largest<<std::endl;
    return 0;
}