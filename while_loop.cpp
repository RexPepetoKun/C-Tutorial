#include <iostream>
#include <vector>
using namespace std;

//Given a vector of integers, determine how many integers are present before 
//you see 9 . Note, it's possible 9  is not in the vector! 
//If -99  is not in the vector then the result will be equal to the number of elements 
//in the vector.

int main(){
    vector <int> list1 {3,6,9,4};
    
    int position{0}; // position must be 0 because index in list starts with 0
                    // Eg. position 0 gives 3; position 1 gives 6, etc..
    while (list1.at(position)!= 9 && position<list1.size()){
       
        position +=1; // position here refers to index

    }
 
 cout<<"position is "<<position<<endl;
 cout<<position<<" integers are present before the number "<<list1.at(position)<<endl;
}


