#include <iostream>
#include <vector>


std::vector<int> solution(int limit) {
    std::vector<int> first(1000);
    std::vector<int> second(1000);
    std::vector<int> core(1000);
    first[0] = 0;
    second[0] = 0;
    core[0] = 1;
    int fib_number{0};
    while (core[core.size() - 1] == 0)
    {
        // std::cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<std::endl;
        // std::cout<<second[0]<<" "<<second[1]<<" "<<second[2]<<std::endl;
        // std::cout<<core[0]<<" "<<core[1]<<" "<<core[2]<<std::endl;
        // std::cout<<"-----------------------------------"<<std::endl;
        for (size_t j = 0; j < 1000; j++)
        {
            core[j] += first[j];
            
            if (core[j] > 9) {
                core[j] %= 10;
                ++core[j + 1];
            }
                        
        }
        first = second;
        second = core;
        fib_number++;
    }
    std::cout<<"the "<<fib_number<<"th number:\n";
    for (size_t i = 0; i < core.size(); i++)
    {
        std::cout<<core[i]<<" ";
        if (i % 10 == 0) {std::cout<<std::endl;}
    }
    
    return core;
}

int main()
{ 
    std::vector<int> fib_vec = solution(1000);
    return 0;
}