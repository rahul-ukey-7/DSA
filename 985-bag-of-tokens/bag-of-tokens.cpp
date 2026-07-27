class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();

        int i=0;
        int j=n-1;

        sort(tokens.begin(),tokens.end());

        int maxscore=0;
        int score=0;

        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i];
                score++;
                i++;

                maxscore=max(score,maxscore);
            }
            else if(score>=1)
            {
                power+=tokens[j];
                score--;
                j--;
            }
            else
            {
                return score;
            }
        }

        return maxscore;
    }
};