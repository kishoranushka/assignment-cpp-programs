//wap to compute the given power of a given number

#include<iostream> 
 using namespace std; 
 int main()
 { 
    int base,exp,i,result=1;
    cout<<"enter any number: ";
    cin>>base;
    cout<<"enter the power: ";
    cin>>exp;
  for (i=0;i<exp;i++)
     {
     result=result*base;
        
     }
     cout<<base<<"^"<<exp<<"="<<result;


return 0;
}