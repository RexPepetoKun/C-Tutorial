// Use range based loop to determine through a vector how many elements are
// divisible by 3

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list1{1,2,3,4,5,6,7,8,9,10};
    int count{0};
    int denominator{0};
    cout<<"Type in your desired denominator to determine how many element inside vector list" 
        <<" are divisible by it"<<endl;
    cin>>denominator;
    for(auto i:list1){
        if (i%denominator==0){
<<<<<<< HEAD
            count+=1;
=======
            (count+=1);
>>>>>>> daed541b7a06fdd65ee80c108c77f4e4ad1951a1
        }
    }

    cout<<"Total elements divisible by "<<denominator<<" is "<<count<<endl;



}





