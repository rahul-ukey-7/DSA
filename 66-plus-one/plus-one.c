/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i=digitsSize-1;
    int carry=0;

    int *result;
    result=(int *)malloc((digitsSize+1)*sizeof(int));

    *returnSize=digitsSize;
    
    if(digits[i]<9)
    {
        result[i]=digits[i]+1;
        for(i=digitsSize-2;i>=0;i--)
        {
            result[i]=digits[i];
        }
    }
    else if(digits[i]==9)
    {
        result[i]=0;
        i--;
        carry=1;
        while(i>=0)
        {
            if(digits[i]==9)
            {
                result[i]=0;
                carry=1;
                i--;
            }
            else if(digits[i]<9)
            {
                result[i]=digits[i]+1;
                carry=0;
                i--;
                
                while(i>=0)
                {
                    result[i]=digits[i];
                    i--;
                }
            }
        }
    }

    if(carry==1)
    {
        *returnSize=digitsSize+1;
        result[0]=1;
        for(i=1;i<digitsSize+1;i++)
        {
            result[i]=0;
        }
    }


    
    return result;
}