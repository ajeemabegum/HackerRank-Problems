//c:array, c_count:length of array c
int jumpingOnClouds(int c_count, int* c) 
{
    int i,count=0;
    for(i=0;i<c_count-1;)
    {
        if(c[i+2]!=1)
        {
            count++;
            i=i+2;
        }
        else
        {
            count++; 
            i++;
        } 
    }
    return count;
}