#include<iostream>
using namespace std;
int main(){
    int money;
    cin>>money;
    if(money<=500){
        cout<<"friends"<<endl;
    }
    
        else if(money<=1000){
            cout<<"sanjana"<<endl;
     }
       else if(money<=1500){
           cout<<"nidhi"<<endl;
       }
       else{
           cout<<"family"<<endl;
       }
 return 0;
}
