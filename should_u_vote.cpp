#include <iostream>
#include <string>
using namespace std;

int main(){
string name;int age;string party_affliation; bool financial; bool relative;

    cout<<"Welcome to Pepeto's Decision Maker on the Upcoming Elections in Malaysia"<<endl;
    cout<<" Under what circumstance should we vote? "<<endl;
    cout<<" Please enter the aspiring politician name: "<<endl;
    cout<<" Name of Candidate Contesting: "<<endl;
    cin>>name;
    cout<<" Age of candidate?";
    cin>>age;
    cout<<name<<"'s party affliation?"<<endl;
    cin>>party_affliation;
    cout<<" Is the candidate already filthy rich? Type either true or false"<<endl;
    cin>>financial;
    cout<<"Are you related to the candidate? Answer true or false"<<endl;
    cin>>relative;


    //if ( (name !="Mahathir") && (age>=40 && age<60 ) && (party_affliation !="DAP") && (!financial) && (relative) ){
        //cout << "Yes, you should vote for this fella."<<endl;
    
    if (name =="Mahathir") {
        cout<< " Think no further. The old man is senile! Time to retire"<<endl;

    }

    else if (party_affliation == "DAP") {
        cout<< "Don't waste votes on the ubahlau. These cunning fellas have are good at talkshows only!"<<endl; 
    }

    else if (age<40){
        cout<<" The candidate is too young. Go back to school."<<endl;
    }

    else if ( !financial) {
        cout<<" This fella should not be in politics. Too much money in the bank already. Give others a chance."<<endl;
    }
     else if (relative) {
        cout<< " No choice. Need to give support to Dato Lee."<<endl;
     }
}
