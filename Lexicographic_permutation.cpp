#include <iostream>
#include <vector>
#include <algorithm>

bool is_unique(long n) {
    std::vector<int> vec_num;
    while (n != 0)
    {
        vec_num.push_back(n % 10);
        n /= 10;
    }
    std::sort(vec_num.begin(), vec_num.end());
    auto it = std::adjacent_find(vec_num.begin(), vec_num.end());
    if (it != vec_num.end()) {
        if (*it == 1) {
            vec_num.erase(it);
        }
    }
    // for (size_t i = 0; i < vec_num.size(); i++)
    // {
    //     std::cout<<vec_num[i]<<" ";
    // }
    if (std::adjacent_find(vec_num.begin(), vec_num.end()) != vec_num.end()) {
        return false;
    }    
    return true;
}

int solution(long number, int count) {
    for (size_t i = 0; i < count; )
    {
        if (is_unique(number)) {
            std::cout<<number<<std::endl;
            i += 3;
        }
        ++number;
    }
    return 1;
    
}

int main()
{
    //std::cout<<std::boolalpha<<is_unique(10210456789)<<std::endl;  
    solution(10123456789, 1000000);  
}