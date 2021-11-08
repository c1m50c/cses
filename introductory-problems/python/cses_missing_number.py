def solve(n, l):
    l_len = len(l)
    missing = ((l_len + 1) * (l_len + 2) // 2) - sum(l)
    print(missing)


if __name__ == "__main__":
    inp_n = [int(x) for x in input().split()]
    inp_l = [int(x) for x in input().split()]
    solve(n=inp_n[0], l=inp_l)