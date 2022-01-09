#include <iostream>
#include <cstring>

int SieveOfEratosthenes(int num) {
    unsigned long long int sum{0};
    bool pno[num+1];
    memset(pno, true, sizeof(pno));
    for (int i = 2; i*i <= num; i++) {
        if (pno[i] == true) {
            for (int j = i*2; j <= num; j += i)
            pno[j] = false;
        }
    }
    for (int i = 2; i <= num; i++) {
            if (pno[i]) { 
                sum += i;
            }
    }
    return sum;
}

int main()
{
    int num = 2000000;
    std::cout<<SieveOfEratosthenes(num)<<std::endl;
}