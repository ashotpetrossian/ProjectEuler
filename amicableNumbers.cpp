#include <iostream>
#include <vector>

int solution(int limit) {
    std::vector<std::pair<int, int>> vec;
    for (size_t i = 1; i < limit; i++)
    {
        int sum_i{0};
        for (size_t j = 1; j < i; j++)
        {
            if (i % j == 0) { sum_i += j; }
        }
        if (i == sum_i) { continue; }
        int sum_j{0};
        for (size_t k = 1; k < sum_i; k++)
        {
            if (sum_i % k == 0) { sum_j += k; }
        }
        if (i == sum_j) {
            //std::cout<<"i = "<<i<<" , sum_j = "<<sum_i<<std::endl;
            std::pair<int, int> tmp; 
            tmp.first = i; tmp.second = sum_i;
            vec.push_back(tmp);
        }       
    }

    for (size_t i = 0; i < vec.size(); i++)
    {
        for (size_t j = 0; j < vec.size(); j++)
        {
            if (vec[i].first == vec[j].second && vec[i].second == vec[j].first) {
                vec.erase(vec.begin() + j);
            }
        }
        
    }
    int sum{0};
    
    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i].first<<" "<<vec[i].second<<std::endl;
        sum += vec[i].first; sum += vec[i].second;
    }
    return sum;
}

int main()
{
    int limit = 10000;
    std::cout<<solution(limit)<<std::endl;;
}