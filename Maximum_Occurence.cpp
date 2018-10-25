int Solution::lowerbound(const vector<int >&A,int low, int high, int B)
{
    int mid; // mid of the section 
    if(low<=high)
    {
        int mid= (high-low)/2+low/2;
        if(A[mid]==B)
        {
            return lowerbound(A,low,mid-1,B);
        }
        else if(A[mid]>B){
            return lowerbound(A,low,mid-1,B);
        }
        else
            return lowerboud(A,mid+1,high,B);
    }
    
    else
       return lower;
    
}

int Solution::uppperbound(const vector<int>&A,int low,int high ,int B)
{
    int mid;
    
    if(low<=high)
    {
        int mid=(high-low)/2+low/2;
        if(A[mid]==B)
        {
            return upperbound(A,mid+1,high,B);
        }
        else if(A[mid]>B)
        {
            return upperbound(A,low,mid-1,B);
        }
        
        else
            return upperbound(A,mid+1,high,B);
        
    }
    
}

int Solution::findCount(const vector<int> &A, int B) {
    int sz= A.size();
    int idx2=Solution::upperbound(A,0,sz-1,B);
    int idx1=Solution::lowerbound(A,0,sz-1,B);
    
    return (idx2-idx1+1);
    
}

