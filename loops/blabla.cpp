#include <iostream>
#include <vector>
using namespace std;


double get_smallest(vector <int> &list){
   int smallest = list.at(0);
   
   for (int i=1;i<list.size();i++){
        if (smallest > list.at(i)){
            smallest = list.at(i);
        }
        
    }
    
    return smallest;
}
int main(){
    vector <int> list{4,5,6,1,10};
    cout<<"How many integers are inside the list? "<<list.size()<<endl;

    cout<<"The smallest integer in the list is:"<<get_smallest(list)<<endl;
   
    cout<<list.at(0);
   
}

