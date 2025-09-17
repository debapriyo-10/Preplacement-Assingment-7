def power(base, exp):
    if exp == 0:
        return 1
    return base * power(base, exp - 1)

base, exp = map(int, input().split())
print(power(base, exp))