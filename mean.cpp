#include <iostream>
#include <math.h>

using namespace std;

float arr[20];
int n,i,j;
void getinfo()
{
    cout<<"How many nos. you want to enter?"<<endl;
    cin>>n;
    cout<<"Enter Numbers"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
}
void armean()
{
    float amean=0;
    for(i=0;i<n;i++)
        amean=amean+arr[i];
    cout<<"Arithmatic Mean : "<<amean/n<<endl;
}
void hamean()
{
    float hmean=0;
    for(i=0;i<n;i++)
        hmean=hmean+1/arr[i];
    hmean=n/hmean;
    cout<<"Harmonic Mean : "<<hmean<<endl;
}
void gemean()
{
    float gmean=1;
    for(i=0;i<n;i++)
        gmean=gmean*arr[i];
    cout<<"Geometric Mean : "<<pow(gmean,(1/(double)n))<<endl;
}
void mode()
{
    int c=0,Max=0,d=0;float mod;
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
                c++;
        }
        if(c==Max)
        {
            mod+=arr[i];
            d++;
        }
        else if(c>Max)
        {
            Max=c;
            d=1;
            mod=arr[i];
        }
    }
    cout<<"Mode : "<<mod/d<<endl;
}
void Sort()
{
    int t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }
}
void median()
{
    float med;
    if(n%2==0)
        med=(arr[n/2]+arr[n/2-1])/2;
    else
        med=arr[n/2];
    cout<<"Median : "<<med;
}
int main()
{
    getinfo();
    Sort();
    cout<<endl<<endl;
    armean();
    hamean();
    gemean();
    mode();
    median();
    return 0;
}
