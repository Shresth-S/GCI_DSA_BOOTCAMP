#include<iostream>
using namespace std;
int main(){
int n,count=0,num;
cout<<"Enter no.";
cin>>n;
num=n;
while(n>=1){
count+=1;
n=n/10;
}
cout<<"No. of digits in "<< num << " is "<< count ;
return 0;
}