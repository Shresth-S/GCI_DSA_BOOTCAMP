#include<iostream>
using namespace std;
int main(){
int n,i=0,a,product=1;
cout<<"Enter no.";
cin>>n;
while(n>=1){
a=n%10;
n=n/10;
product*=a;
}
cout<<"Product of digits of no. is "<<product;
return 0;
}