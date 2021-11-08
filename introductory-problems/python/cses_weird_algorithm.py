inp = [int(x) for x in input().split()]
n = inp[0]

values = [ n ]

while n != 1:
    if n % 2 == 0:
        n /= 2
    else:
        n = (n * 3) + 1
    values.append(int(n))

print(*values)