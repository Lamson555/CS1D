#include <iostream>
#include <vector>
using namespace std;

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
