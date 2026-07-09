class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        char x;
        int i,j;

        for(i=0;jewels[i]!='\0';i++)
        {
            x=jewels[i];

            for(j=0;stones[j]!='\0';j++)
            {
                if(x==stones[j])
                {
                    count++;
                }
            }
        }

        return count;
    }
};