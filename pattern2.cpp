// Center pyramid pattern


#include<iostream> 
 using namespace std; 
 int main()
 { 
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i+j==6||i+j==7||i+j==8||i+j==9||i+j==10)
            {
                cout<<" "<<"+";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }


return 0;
}