class Solution 
{
    //check for ascending order
    bool m_ascending(const vector<int>& A)
    {
        for( int idx = 0; idx < A.size() - 1 ; idx++)
        {
            if( A[idx] > A[idx+1] )
            {
                return false;
            }
        }
        return true;
    }
    
    //check for descending order
    bool m_descending(const vector<int>& A)
    {
        for( int idx = 0; idx < A.size() - 1 ; idx++)
        {
            if( A[idx] < A[idx+1] )
            {
                return false;
            }
        }
        return true;
    }
    
public:
    bool isMonotonic(const vector<int>& A) 
    {
        return m_ascending(A) || m_descending(A);
    }
};