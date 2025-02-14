class Solution {
    public int solution(int[] dot)
    {
        int x = dot[0], y = dot[1];

        if(y > 0)
        {
            if(x > 0)
            {
                return 1;
            }
            return  2;
        }
        else
        {
            if(x < 0)
            {
                return 3;
            }
            return  4;
        }
    }
}