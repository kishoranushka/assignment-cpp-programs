//wap to swap two numbers without using third variable

#include<iostream> 
 using namespace std; 
 int main()
 {
    int n1,n2;
     cout<<"Enter 1st number: ";
   cin>>n1;
   cout<<"Enter 2nd number: ";
   cin>>n2;
cout<<"Before swapping the numbers are: "<<n1<<" "<<n2;

n1=n1+n2;
n2=n1-n2;
n1=n1-n2;

cout<<"\n After swapping the numbers are: "<<n1<<" "<<n2;

return 0;
}