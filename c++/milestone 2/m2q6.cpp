#include<iostream>
using namespace std;
int main(){
int i=1,n,sum=0;
cout<<"Enter no. of terms";
cin>>n;
while(i<=n){
sum+=i;
i=i+1;
}
cout<<"Sum of all natural no.s is " <<sum;
return 0;    
}