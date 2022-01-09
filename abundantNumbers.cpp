#include <iostream>
#include <vector>



std::vector<int> fill_vec(int limit) {
    std::vector<int> ab_nums;
    for (size_t j = 1; j < limit; j++)
    {
        int sum{0};
        for (size_t i = 1; i < j; i++)
        {
            if (j % i == 0) { sum += i; }
        }
        if (sum > j) { ab_nums.push_back(j); }
    }    
    return ab_nums;
}

void show(std::vector<int> ab_nums) {
    for (size_t i = 0; i < ab_nums.size(); i++)
    {
        std::cout<<ab_nums[i]<<" ";
        if (i % 10 == 0) { std::cout<<std::endl; }
    }
    
}

bool cant_be_abun_sum(std::vector<int> ab_nums, int n) {   
    for (size_t i = 1; i < ab_nums.size(); i++)
    {
        for (size_t j = 1; j < ab_nums.size(); j++)
        {
            if ( n == ab_nums[i] + ab_nums[j]) { return false; }
        }        
    }  
    return true;    
}

int solution(std::vector<int> ab_nums, int limit) {
    int sum{0};
    for (size_t i = 1; i <= limit; i++)
    {
        if (cant_be_abun_sum(ab_nums, i)) {
            std::cout<<"Now processing: "<<i<<std::endl;
            //std::cout<<"Sum = "<<sum<<std::endl;
            sum += i;
        }
    }
    return sum;    
}

int main()
{
    //std::cout<<solution(100)<<std::endl;
    //std::cout<<std::boolalpha<<can_be_abun_sum(28123);
    std::vector<int> ab_nums = fill_vec(28123);
    std::cout<<solution(ab_nums, 28123)<<std::endl;
    //chi talis chisht patasxxaty , bayc gtel enq tivy voric mec cankacac tiv kara nerkayacvac lini vorpes 2 ab_num gumar;

}