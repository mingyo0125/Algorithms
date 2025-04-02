def solution(hp):
    count = hp // 5;
    hp %= 5;
    count += hp // 3;
    hp %= 3;
    count += hp;
    return count;