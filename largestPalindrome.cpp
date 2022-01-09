#include <iostream>
#include <vector>

bool is_palindrome (int n) {
    std::vector<int> vec;
    while (n != 0) {
        int tmp = n % 10;
        vec.push_back(tmp);
        n /= 10;
    }
    for (size_t i = 0, k = vec.size() - 1; i < vec.size() / 2; i++, --k)
    {
        if (vec[i] != vec[k]) {return false;}
    }    
    return true;
}

int solution(int limit) {
    std::vector<int> pal_vec;
    for (size_t i = limit - 1; i > 0; --i)
    {
        for (size_t j = limit - 1; j > 0; --j)
        {
            std::cout<<i<<"  "<<j<<std::endl;
            if (is_palindrome(i * j)) { pal_vec.push_back(i * j); }
        }        
    }
    int largest{0};
    for (size_t i = 0; i < pal_vec.size(); i++)
    {
        if (largest < pal_vec[i]) { largest = pal_vec[i]; }
    }
    return largest;
}

int main()
{
    int limit = 1000;
    //std::cout<<std::boolalpha<<is_palindrome(90909)<<std::endl;
    std::cout<<solution(limit)<<std::endl;
}