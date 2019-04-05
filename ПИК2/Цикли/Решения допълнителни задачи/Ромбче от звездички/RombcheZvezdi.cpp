#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
            int n;  cin>>n;
            // Top
            for (int row = 1; row <= n; row++)
            {
                for (int col = 1; col <= n - row; col++)
                    cout<<" ";
                 cout<<"*";
                for (int col = 1; col < row; col++)
                     cout<<" *";
                 cout<<endl;
            }
            // Bottom
            for (int row = n - 1; row > 0; row--)
            {
                for (int col = 1; col <= n - row; col++)
                    cout<<" ";
                 cout<<"*";
                for (int col = 1; col < row; col++)
                     cout<<" *";
                 cout<<endl; }
system ("pause");
return 0;
}

