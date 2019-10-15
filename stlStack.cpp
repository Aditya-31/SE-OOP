#include<iostream>
#include<stack>
using namespace std;

int no1,no2;

int main()
{
    int sum=0,carry=0,r=0;
    cout<<"ENTER THE FIRST NUMBER\n";
    cin>>no1;

    cout<<"ENTER SECOND NUMBER\n";
    cin>>no2;

    stack<int>conv1,conv2,result,b1,b2;

    while(no1!=0)
    {
        r=no1%2;
        conv1.push(r);
        no1=no1/2;
    }
    cout<<"FIRST NUMBER IS:";

    while(!conv1.empty())
    {
        cout<<conv1.top();
        int n=conv1.top();
        b1.push(n);
        conv1.pop();
    }
    cout<<"\n";
    cout<<"SECOND NUMBER IS:-";
    while(no2!=0)
    {
        r=no2%2;
        conv2.push(r);
        no2=no2/2;
    }
    while(!conv2.empty())
    {
        cout<<conv2.top();
        int n=conv2.top();
        b2.push(n);
        conv2.pop();
    }
    cout<<"\n";
    while(!b1.empty()&&!b2.empty())
    {
        sum=carry+b1.top()+b2.top();
        b1.pop();
        b2.pop();
        int res=sum%2;
        carry=sum/2;
        result.push(res);
    }
    while(!b1.empty())
    {
        sum=carry+b1.top();
        b1.pop();
        int res=sum%2;
        carry=sum/2;
        result.push(res);
    }
    while(!b2.empty())
    {
        sum=carry+b2.top();
        b2.pop();
        int res=sum%2;
        carry=sum/2;
        result.push(res);
    }
    if(carry==1)
    {
        result.push(1);
    }
    cout<<"RESULTANT IS:-";
    while(!result.empty())
    {
        cout<<result.top();
        result.pop();
    }
    cout<<"\n";



}