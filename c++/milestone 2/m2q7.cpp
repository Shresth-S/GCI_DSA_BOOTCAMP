#include<iostream>
using namespace std;
int main(){
int i=1,n,sum=0;
cout<<"Enter no. of terms";
cin>>n;
while(i<=n){
if(i%2==0){
sum+=i;
}
else{
sum+=0;
}
i=i+1;}
cout<<"Sum of all even no.s is" <<sum;
return 0;    
}