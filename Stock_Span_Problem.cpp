 #include<iostream>
#include<stack>
using namespace std;
// Function
void stockSpan(int prices[],int n,int span[])
{
    stack <int> st;
    // For loop for iteration through tall stocks
    for(int i=0;i<n;i++)
    {
        // While loop to pop unnecessary elements
        while(!st.empty() && prices[st.top()]<=prices[i])
        {
            st.pop();
        }
        // Calculation of span
        if(st.empty()) span[i]=i+1;
        else span[i]=i-st.top();
        // Pushing index into stack
        st.push(i);
    }
}
int main()
{
    int n;
    cout<<"Enter number of stocks : ";
    cin>>n;
    int prices[n],span[n];
    cout<<"Enter price of stocks one by one : ";
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    stockSpan(prices,n,span);
    cout<<"The span of stocks are";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<span[i];
    }
    cout<<" respectively";
}
