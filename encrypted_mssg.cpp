#include <iostream>
#include <string>
using namespace std;

int main(){

    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLOMNOPQRSTUVWXYZ"};
    string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    int option;

    cout<<"Select the following option. Enter either 1 or 2."<<endl;
    cout<<"1. Encrypt"<<endl;
    cout<<"2. Decrypt"<<endl;
    cin>>option;
    string ori_message{};
    string encrypted_message{};
    string dummy_message{};
    string decrypted_message{};


    switch(option){
        case 1:

            cout<<"Enter original message:";
            getline(cin,ori_message);
            cin>>ori_message;

            cout<<"n/Encrypting message....."<<endl;

            for(char c:ori_message){
                size_t position =alphabet.find(c);
                if(position!=alphabet ){
                    char new_char{key.at(position)};
                    encrypted_message+=new_char;
                }
                else{
                    encrypted_message +=c;
                }
            }
            cout<<"\nOriginal message when encrypted becomes:"<<encrypted_message;
            break;

        case 2:

            cout<<"Enter dummy message:";
            getline(cin,dummy_message);
            cin>>dummy_message;
            

            cout<<"Decrypting message....."<<endl;

            for(char c:dummy_message){
                size_t position =key.find(c);
                if(position!=key.npos){
                    char alphabet_char{alphabet.at(position)};
                    decrypted_message+=alphabet_char;
                }
                else{
                    decrypted_message +=c;
                }
            }
            cout<<"Decrypted message is:"<<decrypted_message<<endl;
            break;

    }


}












