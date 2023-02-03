
import java.util.*;

public class countingsort
{

public int maxi(int[] arr)
{
    int  large = Integer.MIN_VALUE;
    for(int i=0;i<arr.length;i++)
    {
        if(large<arr[i])
        {
            large = arr[i];
        }
    }
   return large;
}



public static void main(String[] args)
{
//   int arr[] ={9,3,4,5,10,4};
  Scanner sc = new Scanner(System.in);
  int len =sc.nextInt();int arr[]= new int[len];
  for(int i=0;i<len;i++)
  {
     arr[i]= sc.nextInt();
  }
  int n = arr.length;
  countingsort c = new countingsort();
  int maxlen = c.maxi(arr);
  int output[] = new int[maxlen+1];
  for(int i=0;i<n;i++)
  {
    output[arr[i]]++;
  }
  for(int i=1;i<output.length;i++)
  {
    output[i] +=output[i-1];
  }
  int result[] = new int[arr.length];
  for(int i=0;i<arr.length;i++)
   {
    result[output[arr[i]]-1]=arr[i];
    output[arr[i]]--;
   }
   for(int i=0;i<arr.length;i++)
   {
    System.out.print(result[i]+" ");
   }
}}