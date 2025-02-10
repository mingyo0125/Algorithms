class Solution {
    public int solution(int[] numbers)
    {
        int first = 0, second = 0;
        for(int i = 0; i < numbers.length; i++)
        {
            int num = numbers[i];

            if(num > first)
            {
                second = first;
                first = num;
                continue;
            }

            if(num > second)
            {
                second = num;
            }
        }

        return first * second;
    }
}