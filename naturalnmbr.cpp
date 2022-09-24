//wap to find the sum of all natural number from 1 to n

#include<iostream> 
 using namespace std; 
 int main()
 { 
    int n,i,sum=0;
    cout<<"Enter the number upto which you want the sum: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<"+";
        sum=sum+i;

    }
    cout<<" = " <<sum;



return 0;
}