//wap to find the largest among three given numbers

#include<iostream> 
 using namespace std; 
 int main()
 {
    int a,b,c;
    cout<<"Enter three numbers: " ;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a<<"is the greatest.";
    }
    else if(a>b && a<c)
    {
        cout<<c<<"is the greatest.";
    }
    else{
        cout<<b << " is the greatest.";
    }


return 0;
}