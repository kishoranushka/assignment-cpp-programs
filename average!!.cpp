//wap to calculate the average of all the elements present in an array

#include<iostream> 
 using namespace std; 
 int main()
 {
    float A[5],sum=0;
    int i;
    cout<<"Enter the numbers :";
    cin>>A[5];
    for(i=0;i<=5;i++)
    {
        sum=sum+A[i];
    }
    cout<<i<<"+"<<" = "<<sum/5;


return 0;
}