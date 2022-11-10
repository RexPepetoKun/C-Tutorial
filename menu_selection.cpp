#include <iostream>
#include <vector>
using namespace std;


int main(){

   vector <int> list {8,6,4,2};
   char option;
   char P,p,A,a,M,m,S,s,L,l,Q,q;
   int member,number,i,j,smallest;

   do{
    //Display menu
    cout<<"P -Print Numbers"<<endl;
    cout<<"A -Add a number"<<endl;
    cout<<"M -Display mean of the numbers"<<endl;
    cout<<"S -Display the smallest number"<<endl;
    cout<<"L -Display the largest number"<<endl;
    cout<<"Q -Quit"<<endl;
    cout<<"Enter your option here:"<<endl;
    cin>>option;



    if(option =='p'||option == 'P'){
        for(auto member:list) {
            if (list.size()==0){
                cout<<"Empty"<<endl;
            }
            else{
                cout<<member<<"";
            }
        }
    }
    else if(option=='a'||option =='A'){
        cout<<"Enter number to add to list:";
        cin>>number;
        list.push_back(number);
        cout<<number<<" added."<<endl;
    }
    else if(option=='M'||option =='m'){
        if(list.size()==0){
            cout<<"unable to calculate mean.list is empty"<<endl;}
        else{
            int sum{};
            for(auto member:list){
                sum += member;
                //cout<<static_cast<double>(sum)/list.size()<<endl;  This code cannot be written inside for loop,otherwise will
            }   // divide each member by size and output the result in a loop.
            cout<<static_cast<double>(sum)/list.size()<<endl; // code needs to be written outside the for loop to return only the
        }                                                       // sum of all numbers/size.
    }// M closing curly bracket

    else if(option=='S'||'s'){
        if (list.size() ==0){
            cout<<"Unable to determine smallest integer, list is empty"<<endl;
        }
        else{
            for(i;i<list.size();i++){
              for(j=i+1;j<list.size();j++){
                if (list[i]<list[j]){
                    int smallest = list[i];
                }
                //cout<<"smallest integer is "<<smallest<<endl;
                }
            }
            cout<<"Smallest integer is "<<smallest<<endl;        }

    }//S closing


   }while(option !='q' && option !='Q');  //}here is 'do' closing
   cout<<"Goodbye"<<endl;

}//main closing


















