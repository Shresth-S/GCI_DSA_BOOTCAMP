#include<iostream>
using namespace std;
int main(){
int n,i=0,a,number[10],x=0;
cout<<"Enter no.";
cin>>n;
while(n>=1){
a=n%10;
n=n/10;
number[i]=a;
i+=1;
}
for(int j=0;j<i/2;j++){
x=0;
if(number[j]==number[i-j-1]){
    x=1;
    continue;
}
else{
    break;
}
}
if(x==1){
cout<<"No. is a palindrome";}
else{
cout<<"No. is not a palindrome";
}
return 0;
}
