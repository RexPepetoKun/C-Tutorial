#include <iostream>
#include <vector>
using namespace std;
/// P A M S L Q

int main(){

   vector <int> list {1,2,3,4};
   char option;
   char P,p,A,a,M,m,S,s,L,l,Q,q;
   int member,number,smallest,i,j;

   for(i=0;i<list.size();i++){
      for(j=i+1;j<list.size();j++){
         if (list[i]<list[j]){
            int smallest = list[i];
         }
      }
   }
   cout<<"Smallest integer is "<<smallest<<endl;
}