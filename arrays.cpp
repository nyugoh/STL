#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(){
    cout << "Arrays are static inflexible, the size doesnt change after declaration" << endl;

    //Declare an array of ints
    array<int, 5> scores = {12, 43, 54, 76, 76};

    //Get element at a spcecific position
    cout<<"Element at position 1 ::"<< scores.at(0)<<endl;
    cout<<"Element at position 3 ::"<< scores.at(4)<<endl;

    cout<<"Element at the start ::"<<scores.begin()<<endl;
    cout<<"Element at the end ::"<<scores.end()<<endl;

    if(scores.empty()){
        cout<<"Array is empty."<<endl;
    }else{
        cout<<"Array has "<<scores.max_size()<<endl;
    }
    std::cout << "Array Size ::" << scores.size() << '\n';
    return 0;
}
