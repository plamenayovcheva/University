#include <iostream>
#include <string>
using namespace std;

int PrintLine(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout<<i<<" ";
    }
cout<<endl;
}

int PrintTriangle(int n)
{
    for (int line = 1; line <= n; line++)
    {
        PrintLine(1, line);
    }
 
    for (int line = n - 1; line >= 1; line--)
    {
        PrintLine(1, line);
    }
}


int main()
{
    int n;
    cin>>n;
  PrintTriangle(n);
  return 0;
}
