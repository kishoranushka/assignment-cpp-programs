//Floyd's Triangle
//1
//2 3
//4 5 6
//7 8 9 10

#include<iostream> 
 using namespace std; 
 int main()
 {
    int i,j,n,count=1;
    cout<<"enter any number: " ;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count=count+1;
        }
        cout<<"\n";
    }


return 0;
}