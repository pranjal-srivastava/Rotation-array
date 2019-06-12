#include <bits/stdc++.h>

using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
int n=a.size();
/*int temp=0;
for(int i=0;i<d;i++)
{
    temp=a[0];
    for(int j=0;j<n-1;j++)
    {
        a[j]=a[j+1];
    }
    a[n-1]=temp;
}
*/
vector<int>b(n);
for(int i=0;i<n;i++)
    b[i]=0;

int k=0;
for(int j=d;j<n;j++)
{
    b[k]=a[j];
    k=k+1;
}
int m=0;
for(int j=k;j<n;j++)
{
    b[j]=a[m];
    m=m+1;
}


return b;
}

int main()
{
   // complete the main function considering the following parameters
   // a= input vector n=vector size  d= rotate amount
   // vector<int> result = rotLeft(a, d);
   
}



