https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1?page=1&difficulty[]=1&curated[]=7&sortBy=submissions


int getMinDiff(int arr[], int n, int k) {
        // code here
        
       sort(arr,arr+n);
       
       int ans=arr[n-1]-arr[0];
    
        int lmin=arr[0]+k,rmax=arr[n-1]-k;
        int i=0;
        int lmax=arr[i]+k,rmin=arr[i+1]-k;
        
        //Run a loop and partiton it abut every element
        for(i=0;i<n-1;i++)
        {
            if(arr[i+1]-k<0)continue;
            
            lmax=arr[i]+k,rmin=arr[i+1]-k;
            
            int l=min(lmin,rmin),r=max(lmax,rmax);
            ans=min(ans,r-l);
        }
        
       return ans;

    }
