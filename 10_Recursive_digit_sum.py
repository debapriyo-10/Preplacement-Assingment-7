def digitSum(n):
    if n < 10:
        return n
    return digitSum(sum(int(d) for d in str(n)))

s, k = input().split()
k = int(k)
initial_sum = sum(int(d) for d in s) * k
print(digitSum(initial_sum))