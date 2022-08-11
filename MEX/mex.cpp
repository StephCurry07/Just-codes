#include <stdio.h>
int max(int A[],int n)
{
    int max=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    return max;
}
int mex(int A[],int n,int max){
    int mex=0;
    for(int i=0;i<max+1;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(mex==A[j])
            {
                mex=mex+1;
                c=1;
            }
        }
        if(c==0)
        break;
        
    }
    return mex;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int S[t];
	for(int i=0;i<t;i++)
	{
	    int n,m,k;
	    scanf("%d%d%d",&n,&m,&k);
	    int A[n];
	    for(int j=0;j<n;j++)
	    scanf("%d",&A[j]);
	    int me=mex(A,n,max(A,n));
	    if(m>n || m==0)
	    S[i]=0;
	    if(n==m)
	    {
	        if(me==k)
	        {
	            S[i]=1;
	            
	        }        
	        else
            {    
	           S[i]=0;
	           
	        }        
	    }
	    else
	    {
	        if(me<k)
	        {
	            S[i]=0;
	            
	        }        
	        else 
	        {
	            int c=0;
	            S[i]=0;
	            for(int new=0;new<n;new++)
	            {
	                int W[m];
	                if(A[new]==k)
	                ;
	                else
	                {
	                        W[c]=A[new];
	                        c+=1;
	                } 
	                if(c==m)
	                    {
	                        if(mex(W,m,max(W,m))==k)
	                        {
	                        S[i]=1;
	                        
	                        }
	                        else
	                        {
	                            S[i]=0;
	                            
	                        }   
	                        break;
	                    }
	            }
	        }
	    }
	}
	for(int i=0;i<t;i++)
	{
	printf("%s\n",S[i]?"yes":"no");
	}
	return 0;
}