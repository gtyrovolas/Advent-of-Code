
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
    for num in digs:
        if prev == num: double = True
        if prev > num: return False
        prevPrev = prev
        prev = num
    return double


def main():
    st = 236491
    en = 713787
    
    cnt = 0
    for i in range(st, en + 1):
        digs = getDigs(i)
        if check(digs):
            print(i)
            cnt += 1
    return cnt

print(main())

