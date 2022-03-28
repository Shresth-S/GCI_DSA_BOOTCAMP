#include<iostream>
using namespace std;
int main(){
int n,i=0,a,count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
cout<<"Enter no.";
cin>>n;
while(n>=1){
a=n%10;
n=n/10;
switch (a){
case 0:
  count0+=1;
  break;
case 1:
  count1+=1;
  break;
case 2:
  count2+=1;
  break;
case 3:
  count3+=1;
  break;
case 4:
  count4+=1;
  break;
case 5:
  count5+=1;
  break;
case 6:
  count6+=1;
  break;
case 7:
  count7+=1;
  break;
case 8:
  count8+=1;
  break;
case 9:
  count9+=1;
  break;
default:
count0+=0;
break;
}}
cout<<"There are following no. of each digits in the no."<<endl;
cout<<" 0-- "<<count0 <<endl;
cout<<" 1-- "<<count1 <<endl;
cout<<" 2-- "<<count2 <<endl;
cout<<" 3-- "<<count3 <<endl;
cout<<" 4-- "<<count4 <<endl;
cout<<" 5-- "<<count5 <<endl;
cout<<" 6-- "<<count6 <<endl;
cout<<" 7-- "<<count7 <<endl;
cout<<" 8-- "<<count8 <<endl;
cout<<" 9-- "<<count9 <<endl;
return 0;
}