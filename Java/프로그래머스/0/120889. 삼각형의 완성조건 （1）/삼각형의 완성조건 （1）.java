import java.util.*;

class Solution {
    public int solution(int[] sides)
    {
        int longestSide = Arrays.stream(sides).max().orElse(0);
        int otherSidesSum = Arrays.stream(sides).sum() - longestSide;

        return longestSide < otherSidesSum || longestSide == otherSidesSum * 0.5 ? 1 : 2;
    }
}