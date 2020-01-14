#include <iostream>
#include <vector>
#include <string>

using namespace std;

int reverse(int num)
{
    int hundreds, tens, ones;

    hundreds = num/100;
    num -= hundreds*100;
    tens = num/10;
    num -= tens*10;
    ones = num;
    
    return ones*100 + tens*10 + hundreds;
}

int sum(int num)
{
    int hundreds, tens, ones;

    hundreds = num/100;
    num -= hundreds*100;
    tens = num/10;
    num -= tens*10;
    ones = num;

    return ones + tens + hundreds;

int main() {

    int randomNumbers [15];
    std::vector <int> vector_one;

    for (int q = 0; q < 15; q++){

        randomNumbers[q] = rand() % 900 + 100;
        vector_one.push_back(randomNumbers[q]);
    }

    sort (vector_one.begin(), vector_one.end());

   for (int q = 0; q < 15; q++){
       cout<<vector_one.at(q)<<"\n"<<endl;
   }

   //reverse the numbers


    return 0;
   
}
