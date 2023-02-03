
// write a progra to implent rod cutting problem using top down approach
public class rod{


    static int helper(int[] arr,int n,int i,int[][] dp)
    {
        if(i==0) return n*arr[0];
        if(dp[i][n] != -1) return dp[i][n];
        int res = Integer.MIN_VALUE; int pre_len=i+1;
        int cut_not = helper(arr,n,i-1,dp);
        if(pre_len<=n)
        {
            res = arr[i]+helper(arr,n-pre_len,i-1,dp);
        }

        return dp[i][n]=Math.max(cut_not,res);
      }

    public static void main(String[] ags)
    {
      int[] arr ={3,8,9,11,15}; // 1 2 3 4 5 
      int[][] dp = new int[arr.length][arr.length+1];
      
      for(int i=0;i<arr.length;i++)
      {
        for(int j=0;j<arr.length+1;j++)
        {
            dp[i][j] =-1;
        }
      }
      int k = helper(arr,arr.length,arr.length-1,dp);
      System.out.print("Resultant amount:"+k);
    }
}

//design analysis algorithm 
// pure virtual function //class A {method 1} //class b {method 1, method 2}c

// online compiler ->

int main()
{

  
}




