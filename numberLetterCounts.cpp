#include <iostream>

//mi qich shata, txtov lucvum a


int solution(int n) {
    int sum = 0;
    for (size_t i = 1; i <= n; i++)
    {
        if (i / 10 == 0) {
            // std::cout<<"tasnavor: "<<std::endl;
            if (i == 1) { sum += 3; }
            if (i == 2) { sum += 3; }
            if (i == 3) { sum += 5; }
            if (i == 4) { sum += 4; }
            if (i == 5) { sum += 4; }
            if (i == 6) { sum += 3; }
            if (i == 7) { sum += 5; }
            if (i == 8) { sum += 5; }
            if (i == 9) { sum += 4; }
        }
        if (i / 100 == 0 && i > 9) {
            // std::cout<<"erknish: "<<std::endl;
            if (i / 10 == 1) {
                if (i == 10) { sum += 3; }
                if (i == 11) { sum += 6; }
                if (i == 12) { sum += 6; }
                if (i == 13) { sum += 8; }
                if (i == 14) { sum += 8; }
                if (i == 15) { sum += 7; }
                if (i == 16) { sum += 7; }
                if (i == 17) { sum += 9; }
                if (i == 18) { sum += 8; }
                if (i == 19) { sum += 8; }
            }
            if (i / 10 == 2) { sum += 6; }
            if (i / 10 == 3) { sum += 6; }
            if (i / 10 == 4) { sum += 6; }
            if (i / 10 == 5) { sum += 5; }
            if (i / 10 == 6) { sum += 5; }
            if (i / 10 == 7) { sum += 7; }
            if (i / 10 == 8) { sum += 6; }
            if (i / 10 == 9) { sum += 6; }

            if (i % 10 == 1) { sum += 3; }
            if (i % 10 == 2) { sum += 3; }
            if (i % 10 == 3) { sum += 5; }
            if (i % 10 == 4) { sum += 4; }
            if (i % 10 == 5) { sum += 4; }
            if (i % 10 == 6) { sum += 3; }
            if (i % 10 == 7) { sum += 5; }
            if (i % 10 == 8) { sum += 5; }
            if (i % 10 == 9) { sum += 4; }
        }
        if (i / 1000 == 0 && i > 99) {
            // std::cout<<"eranish: "<<std::endl;
            if (i / 100 == 1) { sum += 13; }
            if (i / 100 == 2) { sum += 13; }
            if (i / 100 == 3) { sum += 15; }
            if (i / 100 == 4) { sum += 14; }
            if (i / 100 == 5) { sum += 14; }
            if (i / 100 == 6) { sum += 13; }
            if (i / 100 == 7) { sum += 15; }
            if (i / 100 == 8) { sum += 15; }
            if (i / 100 == 9) { sum += 14; }

            if (i % 100 == 1) { sum += 3; }
            if (i % 100 == 2) { sum += 3; }
            if (i % 100 == 3) { sum += 5; }
            if (i % 100 == 4) { sum += 4; }
            if (i % 100 == 5) { sum += 4; }
            if (i % 100 == 6) { sum += 3; }
            if (i % 100 == 7) { sum += 5; }
            if (i % 100 == 8) { sum += 5; }
            if (i % 100 == 9) { sum += 4; }

            if (i % 100 ==  10) { sum += 3; }
            if (i % 100 ==  11) { sum += 6; }
            if (i % 100 ==  12) { sum += 6; }
            if (i % 100 ==  13) { sum += 8; }
            if (i % 100 ==  14) { sum += 8; }
            if (i % 100 ==  15) { sum += 7; }
            if (i % 100 ==  16) { sum += 7; }
            if (i % 100 ==  17) { sum += 9; }
            if (i % 100 ==  18) { sum += 8; }
            if (i % 100 ==  19) { sum += 8; }

            if ((i % 100) / 10 == 2) { sum += 6; }
            if ((i % 100) / 10 == 3) { sum += 6; }
            if ((i % 100) / 10 == 4) { sum += 6; }
            if ((i % 100) / 10 == 5) { sum += 5; }
            if ((i % 100) / 10 == 6) { sum += 5; }
            if ((i % 100) / 10 == 7) { sum += 7; }
            if ((i % 100) / 10 == 8) { sum += 6; }
            if ((i % 100) / 10 == 9) { sum += 6; }

            if (((i % 100) % 10) == 1) { sum += 3; }
            if (((i % 100) % 10) == 2) { sum += 3; }
            if (((i % 100) % 10) == 3) { sum += 5; }
            if (((i % 100) % 10) == 4) { sum += 4; }
            if (((i % 100) % 10) == 5) { sum += 4; }
            if (((i % 100) % 10) == 6) { sum += 3; }
            if (((i % 100) % 10) == 7) { sum += 5; }
            if (((i % 100) % 10) == 8) { sum += 5; }
            if (((i % 100) % 10) == 9) { sum += 4; }
        }
        if (i == 1000) { sum += 11; }
    }
    return sum;
}

int main()
{
    int n = 1000;
    std::cout<<solution(n)<<std::endl;
}