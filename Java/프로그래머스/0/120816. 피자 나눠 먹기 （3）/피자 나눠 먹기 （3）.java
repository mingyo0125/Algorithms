class Solution {
    public int solution(int slice, int n)
    {
        int count = 0;
        while(count * slice < n)
        {
            count++;
        }

        return  count;
    }
}