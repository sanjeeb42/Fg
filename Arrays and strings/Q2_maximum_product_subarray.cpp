https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1?page=1&difficulty[]=1&curated[]=7&sortBy=submissions


https://www.youtube.com/watch?v=jzQ-f2uU0UU

class Solution{
public:

    long long min(long long a,long long b){
        return a<b?a:b;
    }
    
    long long max(long long a, long long b){
        return a>b?a:b;
    }
	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long fans=INT_MIN;
	    long long currproduct=1;
	    
	    //Once from Forward
	    for(int i=0;i<n;i++)
	    {
	        currproduct*=arr[i];
	        fans=max(fans,currproduct);
	        if(arr[i]==0)
	        {
	            currproduct=1;
	        }
	        
	    }
	    
	    //Once from backward
	    currproduct=1;
	    for(int i=n-1;i>=0;i--){
	        
	        currproduct*=arr[i];
	        fans=max(fans,currproduct);
	        if(arr[i]==0)
	        {
	            currproduct=1;
	        }
	        
	    }
	    
	    return fans;
	}
};
