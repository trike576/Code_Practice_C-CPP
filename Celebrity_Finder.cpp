 #include<iostream>
#include<vector>
using namespace std;
int celebrity(int n, vector<vector <int>>& mat)
{
    int top=0,bottom=n-1;
    while(top<bottom)
    {
        if(mat[top][bottom]==1)
        {
            top++;
        }
        else if(mat[bottom][top]==1)
        {
            bottom--;
        }
        else
        {
            top++;
            bottom--;
        }
    }
    // No possible celebrity
    if(top>bottom) return -1;
    for(int i=0;i<n;i++)
    {
        // Diagonal elemnt
        if(i==top) continue;
        if(mat[top][i]!=0 || mat[i][top]!=1)
        return -1;
    }
    // Celebrity exists
    return top;
}
int main()
{
    int n;
    cout<<"Enter size of matrix : ";
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        cout<<"Enter elements for row "<<i<<" : ";
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
int celeb = celebrity(n, mat);
if (celeb == -1)
    cout << "No celebrity found." << endl;
else
    cout << "The celebrity is person " << celeb << ".\n";
    
}
