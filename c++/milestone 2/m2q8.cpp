#include<iostream>
using namespace std;
int main(){
int i=1,n,sum=0;
cout<<"Enter no. of terms";
cin>>n;
while(i<=n){
if(i%2==0){
sum+=0;
}
else{
sum+=i;
}
i=i+1;}
cout<<"Sum of all odd no.s is" <<sum;
return 0;    
}