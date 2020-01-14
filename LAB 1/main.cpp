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

int sum(int num) {
    int hundreds, tens, ones;

    hundreds = num / 100;
    num -= hundreds * 100;
    tens = num / 10;
    num -= tens * 10;
    ones = num;

    return ones + tens + hundreds;
}

    int main() {

        int randomNumbers [15];
        vector <int> vector_one;

        cout<<"Storing the random numbers in a vector..."<<endl;

        for (int i = 0; i < 15; i++){

            randomNumbers[i] = rand() % 900 + 100;
            vector_one.push_back(randomNumbers[i]);
        }
//sort the vector
        cout<<"Sorting the numbers in the vector..."<<endl;
        sort (vector_one.begin(), vector_one.end());

//reverse the numbers and store in new vector
        cout<<"Reversing the numbers into a new vector..."<<endl;

        vector <int> vector_two;
        for (int i = 0; i < 15; i++){
            vector_two.push_back(reverse(randomNumbers[i]));
        }

//sum the digits of the random numbers
        cout<<"Sum the digits of the random number and save into a new vector..."<<endl;

        vector<int> vector_three;
        for (int i = 0; i < 15; i++){
            vector_three.push_back(sum(randomNumbers[i]));
        }

//print the vectors
        cout<<"Printing the first vector:"<<endl;
        for (int i = 0; i < 15; i++){
          cout<<vector_one.at(i)<<endl;
        }

        cout<<"Printing the second vector(reversed):"<<endl;
        for (int i = 0; i < 15; i++){
         cout<<vector_two.at(i)<<endl;
        }

        cout<<"Printing the sum of the digits:"<<endl;
        for (int i = 0; i < 15; i++){
            cout<<"The sum of the digits "<<randomNumbers[i]<<" is: "<<vector_three.at(i)<<endl;
        }

        return 0;
    }

