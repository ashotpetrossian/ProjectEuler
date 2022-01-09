#include <iostream>
#include <vector>
#include <algorithm>

void show(std::vector<int> vec) {
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i]<<" ";
    }    
    std::cout<<std::endl;
}

int steamlined(unsigned long long int n) {
    std::vector<int> vec;
    while(n != 0) {
        vec.push_back(n % 10);
        n /= 10;
    }
    
    int four_mul{0};
    std::vector<int> steamlined_vector;
    for (size_t i = 0; i + 12 < vec.size(); i++)
    {
        four_mul = vec[i] * vec[i + 1] * vec[i + 2] * vec[i + 3] * vec[i + 4] * vec[i + 5] * vec[i + 6] * vec[i + 7] * vec[i + 8] * vec[i + 9] * vec[i + 10] * vec[i + 11] * vec[i + 12];
        steamlined_vector.push_back(four_mul);
        four_mul = 0;
    }
    std::sort(steamlined_vector.begin(), steamlined_vector.end());
    show(steamlined_vector);
    return steamlined_vector[steamlined_vector.size() - 1];
}

int main()
{
    unsigned long long int n = 46531975465694576;
    std::cout<<steamlined(n)<<std::endl;
}