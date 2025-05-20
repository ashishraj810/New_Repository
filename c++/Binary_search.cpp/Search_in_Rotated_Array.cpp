    //Search in a rotated array.

    #include<iostream>
    using namespace std;
    
    int main()
    {
        int arr[]={4,5,6,7,0,1,2};
        
        int start=0,n=sizeof(arr)/sizeof arr[0],end=n,ans=-1;
        int mid,target;
        cout<<"Enter the target:";
        cin>>target;

        while(start<=end)
        {
            mid=start+(end-start)/2;

            if(arr[mid]==target)
            {
              ans=mid;
              break;
            }

            else if(arr[mid]>arr[0])
            {
                if(arr[start]<=target && arr[mid]>=target)
                {
                   end=mid-1; 
                }
                else
                start=mid+1;
                
            }

            else 
            {
                if (arr[mid]<target && arr[end]>target)
                {
                    start=mid+1;
                    /* code */
                }
                else
                end=mid-1;
                
            }
        }
        cout<<ans;
    }