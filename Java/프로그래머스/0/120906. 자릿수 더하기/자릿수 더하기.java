class Solution {
    public int solution(int n)
    {
        String st = Integer.toString(n);
        int sum = 0;
        for(int i = 0; i < st.length(); i++)
        {
            char ch = st.charAt(i);
            sum += Character.getNumericValue(ch);
        }
        return sum;
    }
}