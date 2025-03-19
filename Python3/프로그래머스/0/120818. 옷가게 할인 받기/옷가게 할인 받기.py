def solution(price):
    if price >= 500_000:
        discountValue = 0.2
    elif price >= 300_000:
        discountValue = 0.1
    elif price >= 100_000:
        discountValue = 0.05
    else:
        discountValue = 0

    return int(price * (1 - discountValue))