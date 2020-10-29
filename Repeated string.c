Problem: Return the count of the repeated string

long repeatedString(char* s, long n) 
{
    int len,rem,i,count=0,count1=0;
    long t,sm;
    len=strlen(s);
    rem=n%len;
    printf("%d %d",t,len);
    sm=(len<n)?len:n;
    t=(len<n)?n/len:1;
    for(i=0;i<sm;i++)
        if(s[i]=='a')
            count++;
    if(count==0)
        return count;
    else
    {
        if(rem==0 || t==1)
            return count*t;
        else
        {
            for(i=0;i<rem;i++)
            {
                if(s[i]=='a')
                    count1++;
            }
            return count*t+count1;
        }
    }
}