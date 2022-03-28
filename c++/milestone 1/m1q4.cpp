#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter number";
cin>>num;
if(num>0){
cout<<"Positive no.";
}
else if(num<0){
cout<<"Negative no.";
}
else{
cout<<"Zero";
}
return 0;    
}