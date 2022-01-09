#include<iostream> 
 
using namespace std; 
 
int main() 
{ 
	int ar[500]; 
	int sum = 0; 
	ar[0] = 1; 
	for (int j = 1; j < 500; j++) 
	{	
		ar[j] = 0;
	} 
	for (int i = 1; i < 1001; i++) 
	{ 
		ar[0] = 2 * ar[0]; 
        std::cout<<"for#1: ar[0] = "<<ar[0]<<std::endl;
		for (int k = 1; k < 500; k++) 
			{ ar[k] = 2 * ar[k] + ar[k-1] / 10; std::cout<<"ar["<<k<<"] = "<<ar[k]<<std::endl; }
		for (int j = 0; j < 500; j++) 
            {ar[j]=ar[j]%10; std::cout<<"ar["<<j<<"] = "<<ar[j]<<std::endl; }
	} 
	for (int i = 0; i < 500; i++) 
	{ 
		sum = sum + ar[i];
	} 
	std::cout<<sum; 
}