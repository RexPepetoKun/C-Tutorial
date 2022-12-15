#include <iostream>
#include <vector>
using namespace std;

int main(){

    int scores[]{2,4,6,8,-1};
    int* score_ptr{scores};

    while (*score_ptr!= -1){    //as long as element is not -1, while loop will increment
        cout<<*score_ptr<<endl; 
        score_ptr++;
    }
    cout<<"----------------------------------------------"<<endl;
    //the while loop can also be written below:
    // while (*score_ptr!= -1){
    //     cout<<*score_ptr++<<endl;
    // }
    
    
    int *score_ptr1,*score_ptr3{nullptr};    //These 2 lines can be simplified to:
    score_ptr1 = &scores[0];                //int *score_ptr1,*score_ptr3{&scores[0],&scores[2]};
    score_ptr3 = &scores[2];

    cout<<"Value accessed at score_ptr1: "<<*score_ptr1<<endl;
    cout<<"Value accessed at score_ptr3: "<<*score_ptr3<<endl;
    cout<<"The two scores are "<<(score_ptr3-score_ptr1)<<" positions away from each other."<<endl;
    cout<<endl,
    cout<<boolalpha;
    cout<<"What is score_ptr1"<<endl;
    cout<<score_ptr1<<endl; //output address only not the data pointed by it
    cout<<"What is *score_ptr1?"<<endl;
    cout<<*score_ptr1<<endl;    //output 
    cout<<" Is score_ptr1 equal to score_ptr3?"<<endl;
    cout<<(score_ptr1==score_ptr3)<<endl;












}