// use modularize approach to refactor solution in menu_selection1 file
// to do so, use concepts of 'switch' and 'functions'.
// purpose is to simplify int main() to for easier debugging if need to 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> list;  // I name my vector as 'list'.
    char option{};

    do{
        display_menu();
        option = get_option();
        switch(option){
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
             case 'L':
                handle_largest(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
               
        }

    } while (option !="Q");

}//end of main function


/// functions below are oustide the main function
void display_menu(){
    cout<<"P -Print Numbers"<<endl;
    cout<<"A -Add a number"<<endl;
    cout<<"M -Display mean of the numbers"<<endl;
    cout<<"S -Display the smallest number"<<endl;
    cout<<"L -Display the largest number"<<endl;
    cout<<"Q -Quit"<<endl;
    cout<<"Enter your option here:"<<endl;
    cin>>option;

}

char get_option() {
    char option{};
    cin>>option;
    return toupper(option); //converts user input to uppercase,so no need further code to take care of lowrcase.
}
                                        // &list is reference to initialized vector;so no need to declare again
void display_list(const vector <int> &list){
    cout<<"[";
    for(auto num:v){
        cout<<num<<"]"<<endl;
    }
}

void handle_display(const vector <int> &list){
    if (list.size() ==0){
        cout<<"List is empty"<<endl;
    }
    else{
        display_menu(v)
    }

}

void handle_add(vector <int> &list){
    int num_to_add{};
    cout<<"Enter number to add to list:";
    cin>>num_to_add;
    list.push_back(num_to_add);
    cout<<num_to_add<<"added"<<endl;
}

void handle_mean(vector <int> &list){
    if (list.size()==0){
        cout<<"List is empty.Unable to calculate mean"<<endl;
    }
    else{
        cout<<"The mean is"<<count_mean(list)<<endl;
    }
}

double count_mean(const vector<int> &list){
    int sum{};
    for (auto num:list){
        sum +=num;
    return static_cast<double>(sum)/list.size();
    }
}

void handle_smallest(vector <int> &list){
    if (list.size()==0){
        cout<<"List is empty.Unable to determine smallest number"<<endl;
    }
    else{
        cout<<"The smallest number in the list is:"<<get_smallest(list)<<endl;
    }
}

double get_smallest(vector <int> &list){
   int smallest = list.at(0);
   
        for (int i=1;i<list.size();i++){
            if (smallest > list.at(i)){
                smallest = list.at(i);
            }
        }

    return smallest;
}

void handle_largest(vector <int> &list){
    if (list.size()==0){
        cout<<"List is empty.Unable to determine smallest number"<<endl;
    }
    else{
        cout<<"The largest number in the list is:"<<get_largest(list)<<endl;
    }
}  

double get_largest(vector <int> &list){
   int largest = list.at(0);
   
        for (int i=1;i<list.size();i++){
            if (largest < list.at(i)){
                largest = list.at(i);
            }
        }

    return largest;
}

void handle_quit(){
    cout<<"Goodbye!"<<endl;

}


void handle_default(){
    cout<<"Invalid option."<<endl;
}










