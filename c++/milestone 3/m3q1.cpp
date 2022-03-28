#include<iostream>
using namespace std;
int main(){
int n,last_digit,first_digit;
cout<<"Enter no.";
cin>>n;
last_digit=n%10;
while(n>1){
n=n/10;
if(n>=1 && n<10){
first_digit=n;
}
else{
last_digit+=0;
}}
cout<<"First digit is" << first_digit <<endl;
cout<<"Last digit is" <<last_digit;
return 0;
}