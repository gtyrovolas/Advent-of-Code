
def getDigs( inp ):
    ans = []
    while(inp > 0):
        ans.append(inp % 10)
        inp //= 10
    ans.reverse()
    return ans

def check( digs ):

    double = False
    prev = -1
    eq = 0
    
    for num in digs:
        if prev > num: return False
        if prev == num:
            eq += 1
        else:
            if eq == 1: double = True
            eq = 0
        prev = num

    if eq == 1: double = True
    return double


def main():
    st = 236491
    en = 713787
    
    cnt = 0
    for i in range(st, en + 1):
        digs = getDigs(i)
        if check(digs):
            cnt += 1
    return cnt

print(main())

