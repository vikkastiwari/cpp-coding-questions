cash = [1, 2, 4, 2, 5, 4]


def minimum_withdraw(start, end, amount):
    if(amount == 0):
        return 0

    if start > end or amount < 0:
        return 10**9

    else:
        return min(1+minimum_withdraw(start+1, end, amount-cash[start]), 1+minimum_withdraw(start, end-1, amount-cash[start]))


def withdraw(atm, amount):
    start = 0
    end = len(atm)-1

    if(amount == 0):
        return 0

    if start > end or amount < 0:
        return 10**9

    if sum(atm) < amount:
        return 10**9

    else:
        return minimum_withdraw(start, end, amount)


amount = 5
print(withdraw(cash, amount))
