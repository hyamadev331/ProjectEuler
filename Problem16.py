def digitSum(n):
    s = str(n)
    array = list(map(int, s))
    return sum(array)


n = 2 ** 1000
print(digitSum(n))
