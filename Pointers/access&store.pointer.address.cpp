#include <iostream>
using namespace std;

int main(){

    // int num{10};
    // cout<<"Value of num is:"<<num<<endl;
    // cout<<"Size of num is:"<<sizeof num<<endl;
    // cout<<"Address of num is:"<< &num<<endl;

    // int *p;
    // cout<<"\nValue of p is:"<<p<<endl;
    // cout<<"Size of p is:"<<sizeof p<<endl;
    // cout<<"Address of p is:"<<&p<<endl;

    // p=nullptr;
    // cout<<"\nValue of p is:"<<p<<endl;

    int score{10};

    int *score_ptr{nullptr};  //declaring variable known as score_ptr as pointer and set it value to zero.

    score_ptr =&score;         // setting value of the pointer variable to 'score''s memory address.


    //int *score_ptr{&score};   // declaring score_ptr as &score instead of nullptr gives different results
                                // why???

    cout<<"Value of score:"<<score<<endl;
    cout<<"Address of score is:"<<&score<<endl;
    cout<<"Value of score_ptr is:"<<score_ptr<<endl;


   











}
