#include <iostream>
#include <cstring>


// int SieveOfEratosthenes(int num) {
//     int prime_count{0};
//     while (prime_count <= 10001) {
//         bool pno[num+1];
//         memset(pno, true, sizeof(pno));
//         for (int i = 2; i*i <= num; i++) {
//             if (pno[i] == true) {
//                 for (int j = i*2; j <= num; j += i)
//                 pno[j] = false;
//             }
//         }
//         for (int i = 2; i <= num; i++) {
//                 if (pno[i]) { 
//                     prime_count++; 
//                     if (prime_count == 10001) { return i; }
//                 }
//         }      
//         num++;
//         prime_count = 0;
//     }
//     return -1;
// }

#include <vector>


std::vector<int> solution(int limit) {
    std::vector<int> first(limit);
    std::vector<int> second(limit);
    std::vector<int> core(limit);
    first[0] = 0;
    second[0] = 0;
    core[0] = 1;
    int fib_number{0};
    while (true)
    {
        // std::cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<std::endl;
        // std::cout<<second[0]<<" "<<second[1]<<" "<<second[2]<<std::endl;
        // std::cout<<core[0]<<" "<<core[1]<<" "<<core[2]<<std::endl;
        // std::cout<<"-----------------------------------"<<std::endl;
        for (size_t j = 0; j < limit; j++)
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
        if (fib_number == 10001) {
            break;
        }
    }
    std::cout<<"the "<<fib_number<<"st number:\n";
    for (size_t i = 0; i < core.size(); i++)
    {
        std::cout<<core[i]<<" ";
        //if (i % 10 == 0) {std::cout<<std::endl;}
    }
    
    return core;
}

int main()
{
    std::vector<int> fib_vec = solution(3000);
    // for (size_t i = 0; i < fib_vec.size(); i++)
    // {
    //     std::cout<<fib_vec[i]<<" ";
    //     if (i % 10 == 0) { std::cout<<std::endl; }
    // }
    return 0;
}


// int main()
// {
//     int index = 10001;
//     //std::cout<<solution(index)<<std::endl;
//     std::cout<<std::endl<<SieveOfEratosthenes(100000);
//     return 0;
// }