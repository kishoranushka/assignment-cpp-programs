//1
//1 2   
//1 2 3   
//1 2 3 4   

#include<iostream> 
 using namespace std; 
 int main()
 { 
int i,j,n;
    cout<<"enter any number:  " ;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {

        cout<<j+1<<" ";
        }
        cout<<"\n";
    }
return 0;
}