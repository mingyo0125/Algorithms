class Solution {
    public int solution(int n, int k)
    {
        int sum = n * 12000;
        int serviecsCount = n / 10;

        sum += (k - serviecsCount) * 2000;

        return  sum;
    }
}