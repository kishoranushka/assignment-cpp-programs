// inverted side pyramid

#include<iostream> 
 using namespace std; 
 int main()
 { 
    int i,j,row,col;
    cout<<"enter the no. of row: ";
    cin>>row;
    cout<<"enter the no. of column: ";
    cin>>col;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cout<<"* ";
          
        }
        
          col=col-1;
        cout<<"\n";
        
    }


return 0;
}