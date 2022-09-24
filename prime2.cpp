//wap to print all prime number between two given numbers

#include<iostream> 
 using namespace std; 
 int main()
 {
    int a,b,i,j;
    cout<<"enter the two number between which you want all the prime numbers:" ;
    cin>>a>>b;

    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {break;}
        }
        if(j==i)
        {
        cout<<" "<<j;
        }
    }


return 0;
}