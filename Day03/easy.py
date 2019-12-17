
sz = 25000
wire1 = []
wire2 = []
board = [[0 for x in range(sz)] for y in range(sz)] 


def input():
    global wire1
    global wire2
    fp = open('input.in')
    line1 = fp.readline()
    line2 = fp.readline()
    wire1 = line1.split(',')
    wire2 = line2.split(',')
#    print(wire1)

def sim( wire, idx ): # takes a list of strings with all the moves
    global board
    curX = 12500
    curY = 12500

    sol = 1000000
    for move in wire:
        val = int(move[1:])
        step = 0
        
        if move[0] == 'U' or move[0] == 'R':
            step = 1
        if move[0] == 'D' or move[0] == 'L':
            step = -1
        
        for i in range(1,val + 1):
            if move[0] == 'U' or move[0] == 'D':
                curY += step
            if move[0] == 'R' or move[0] == 'L':
                curX += step

            if(board[curX][curY] != 0 and board[curX][curY] != idx):
                sol = min(sol, abs(curX - 12500) + abs(curY-12500) )
            else:
                board[curX][curY] = idx

    return sol

input()
print(sim(wire1, 1))
print(sim(wire2, 2))


