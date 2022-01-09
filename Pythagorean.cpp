#include <iostream>

bool is_triplet(int a, int b, int c) {
    if (a*a + b*b != c*c) { return false; }
    return true;
}

int solution(int limit) {
    for (size_t a = 1; a <= limit; a++)
    {
        for (size_t b = 1; b <= limit; b++)
        {
            for (size_t c = 1; c <= limit; c++)
            {
                if (a + b + c == limit) {
                    if (is_triplet(a, b, c)) {
                        return a * b * c;
                    }
                }
            }            
        }        
    }
    return -1;
}


int main()
{
    int limit = 1000;
    std::cout<<solution(limit);
}