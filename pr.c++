#include <bits/stdc++.h>
using namespace std;


vector<int> findRemainingBalls(vector<int>strength,vector<int>direction)
{
 stack<int>st;
 for(int i=0;i<direction.size();i++)
 {
    if(direction[i]>0 || st.empty())
    {
     st.push(i);   
    }
    else
    {
while(!st.empty() && direction[st.top()]>0 && strength[i]>strength[st.top()])
   {
    st.pop();  } 
    if(st.empty()||direction[st.top()]<0)
    {
        st.push(i);
    }
    else if(strength[st.top()] == strength[i])
    {
        st.pop();
    }
    
 }
 }                  
  vector<int>res(st.size());
  for(int i=res.size()-1; i>=0;i--)
  {
    res[i] =st.top();
    st.pop();
  }
  return res;
}

int main()
{
vector<int>strength ={5,3,1};
vector<int>direction={1,-1,1};
vector<int>res;
res =findRemainingBalls(strength,direction);  
for(int i=0;i<res.size();i++)
{
    cout<<res[i]<<" ";
}
return 0;

}






