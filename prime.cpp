// wap to check whether a number is prime or not

#include<iostream> 
 using namespace std; 
 int main()
 { 
    int n,i;
    cout<<"enter any number: ";
    cin>>n;

    for(i=2;i<n;i++)
    {
        if(n%i==0){
         cout<<"The number is not prime."   ;
         break;
        }
    
    }
    if(i==n)
    {
          cout<<"The number is prime."   ;
    }


return 0;
}