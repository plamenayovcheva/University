#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
            //Lqva i dqsna suma
            int n; cin>>n; 
            // Lqva suma
            double left = 0;
            for(int i=0;i<n;i++) {
                int k ;
            cin>>k;
            left += k; }
            // Dqsna suma
            double right = 0;
            for (int i = 0; i < n; i++) {
          int m; cin>>m;
            right += m; }
            if (left == right)
                cout<<"Yes, sum = "<< left;
            else
                cout<<"No, diff = "<<abs(left - right);

system ("pause");
return 0;
}

