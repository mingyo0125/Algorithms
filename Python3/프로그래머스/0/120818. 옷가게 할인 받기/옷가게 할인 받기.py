def solution(price):
    if price >= 500_000:
        discount_rate = 0.2
    elif price >= 300_000:
        discount_rate = 0.1
    elif price >= 100_000:
        discount_rate = 0.05
    else:
        discount_rate = 0

    return int(price * (1 - discount_rate))