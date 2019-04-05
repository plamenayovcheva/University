#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
            int currentSum = 0;
            int currentDiff = 0;
            int previousSum = 0;
            int previousDiff = 0;
            int MinValue=0;
            int maxDiff=MinValue;
            int numsCount; cin>>numsCount;
            for (int i = numsCount; i > 0; i--)
            {
                int n1;  cin>>n1;
                int n2;  cin>>n2;
                currentSum = n1 + n2;
                if (currentSum != previousSum && i != numsCount)
                {
                    currentDiff = abs(currentSum - previousSum);
                    currentDiff = currentDiff > previousDiff ? currentDiff : previousDiff;
                    maxDiff = currentDiff > maxDiff ? currentDiff : maxDiff;
                }
                previousSum = currentSum;
            }
           cout<<(maxDiff == MinValue) ? cout<<"Yes, value= "<<currentSum: cout<< "No, maxdiff= "<<maxDiff;
system ("pause");
return 0;
}

