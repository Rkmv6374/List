#include<bits/stdc++.h>
using namespace std;


// int solve(vector<int>&v, int tal)
// {
//     int ans=tal;
    
//     for(int i=0; i<v.size()-tal;i++)
//     {
//         int j=i;
//         unordered_set<int>st;
//         while(j<v.size())
//         {
//             if(st.find(v[j])==st.end())
//             {
//                 st.insert(v[j]);
//             }
//             if(st.size()==tal)
//             {
//                 ans=min(ans,j-i+1);
//             }
//             if(st.size()>ans)
//             break;
//             j++;
//         }
//         st.clear();
//     }
//     return ans;
// }

vector<int> helper(vector<int>v,int t)
{   vector<int>res(v.size(),-1);
    for(int i=0;i<v.size();i++)
    {
        vector<int>visited(t,-1);
        int temp =0;  int j=0;
        for(j=i;j<v.size();j++)
        {   int k = v[j]-1;
            if(visited[k] == -1)
            {
                temp++;
            }
            visited[k] =1;
            if(temp == t) 
            {
               res[i] = j;
               break;
            }

        }
       
        for(int i=0;i<visited.size();i++)
        {
            visited[i] = -1;
        }
    }
    return res;
}

int main()
{
vector<int>v={1,2,3,2,1};
int t= 3;
vector<int>res;
res= helper(v,t);
for(auto x: res)
{
    cout<<x<<" ";
}
return 0;

}


