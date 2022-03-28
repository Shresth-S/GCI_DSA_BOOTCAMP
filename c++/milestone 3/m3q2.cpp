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
cout<<"Sum of first and last digits is " << (first_digit+last_digit) <<endl;
return 0;
}