#include<iostream>
using namespace std;
int main(){
int n,i=0,a,sum=0;
cout<<"Enter no.";
cin>>n;
while(n>=1){
a=n%10;
n=n/10;
sum+=a;
}
cout<<"Sum of digits of no. is "<<sum;
return 0;
}