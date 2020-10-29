Problem: An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly steps, for every step it was noted if it was an uphill U, , or a downhill D, step. Hikes always start and end at sea level, and each step up or down represents a 1 unit change in altitude.

int countingValleys(int steps, char* path) 
{
    int count=0,sum=0,i;
    int arr[steps];
    for(i=0;i<steps;i++)
    {
        if(path[i]=='D')
            arr[i]=-1;
        else
            arr[i]=1;
    }
    for(i=0;i<steps;i++)
    {
        if(sum==0 && arr[i]==1)
        while(1)
        {
           sum+=arr[i];
           i++;
            if(sum==0 && arr[i]!=1)
                break;
        }
        sum+=arr[i];
        if(sum==0)
            count++;    
    }
    return count;
}