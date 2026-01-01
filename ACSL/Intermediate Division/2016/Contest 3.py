# ACSL Intermediate Division 2016-2017 Contest #3
# ACSL Lights Out

def flip(state):
    if state == "1":
        return "0"
    else:
        return "1"


inputs = []
for i in range(5):
    inputs.append(list(map(str, input().split(" "))))

for tiles in inputs:
    grid = [["0" for _ in range(8)] for _ in range(8)]
    for i in range(1, int(tiles[0])+1):
        tile = tiles[i]
        for j in range(1, len(tile)):
            grid[8-int(tile[0])][int(tile[j])-1] = "1"
    tiles_pressed = []

    for i in range(int(tiles[int(tiles[0])+1])):
        tiles_pressed.append(tiles[int(tiles[0])+1+i+1])

    for tile in tiles_pressed:
        row = 8 - int(tile[0])
        col = int(tile[1])-1
        grid[row][col] = flip(grid[row][col])
        if -1 < col - 1 < 8:
            grid[row][col-1] = flip(grid[row][col-1])
        if -1 < col + 1 < 8:
            grid[row][col+1] = flip(grid[row][col+1])
        if -1 < row - 1 < 8:
            grid[row-1][col] = flip(grid[row-1][col])
        if -1 < row + 1 < 8:
            grid[row+1][col] = flip(grid[row+1][col])
        if -1 < col + 2 < 8:
            grid[row][col+2] = flip(grid[row][col+2])
        if -1 < col - 2 < 8:
            grid[row][col-2] = flip(grid[row][col-2])
        if -1 < row + 2 < 8:
            grid[row+2][col] = flip(grid[row+2][col])
        if -1 < row - 2 < 8:
            grid[row-2][col] = flip(grid[row-2][col])
        if -1 < col + 1 < 8 and -1 < row + 1 < 8:
            grid[row+1][col+1] = flip(grid[row+1][col+1])
        if -1 < col + 1 < 8 and -1 < row - 1 < 8:
            grid[row-1][col+1] = flip(grid[row-1][col+1])
        if -1 < col - 1 < 8 and -1 < row + 1 < 8:
            grid[row+1][col-1] = flip(grid[row+1][col-1])
        if -1 < col - 1 < 8 and -1 < row - 1 < 8:
            grid[row-1][col-1] = flip(grid[row-1][col-1])


    count = 0
    for i in range(8):
        for j in range(8):

            if grid[i][j] == "1":
                count += 1

    print(count)




