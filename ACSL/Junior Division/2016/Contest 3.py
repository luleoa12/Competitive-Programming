# ACSL Junior Division 2016-2017 Contest #3
# ACSL Lights Out

inputs = []
for i in range(5):
    inputs.append(list(map(str, input().split(", "))))

for tiles in inputs:
    grid = [["0", "0", "0", "0", "0", "0", "0", "0"],
            ["0", "0", "0", "0", "0", "0", "0", "0"],
            ["0", "0", "0", "0", "0", "0", "0", "0"],
            ["0", "0", "0", "0", "0", "0", "0", "0"],
            ["0", "0", "0", "0", "0", "0", "0", "0"],
            ["0", "0", "0", "0", "0", "0", "0", "0"],
            ["0", "0", "0", "0", "0", "0", "0", "0"],
            ["0", "0", "0", "0", "0", "0", "0", "0"]]
    count = 0
    count2 = 0
    for i in range(1, int(tiles[0]) + 1):
        for j in range(1, len(tiles[i])):
            grid[8-int(tiles[i][0])][int(tiles[i][j])-1] = "1"
            count2 += 1
    row = 8-int(tiles[-1][0])
    col = int(tiles[-1][1])-1

    if grid[row][col] == "0":
        count += 1
    else:
        count2 -= 1
    if -1 < col-1 < 8:
        if grid[row][col-1] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < col+1 < 8:
        if grid[row][col+1] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < row-1 < 8:
        if grid[row-1][col] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < row + 1 < 8:
        if grid[row+1][col] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < col + 2 < 8:
        if grid[row][col + 2] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < col - 2 < 8:
        if grid[row][col - 2] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < row + 2 < 8:
        if grid[row + 2][col] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < row - 2 < 8:
        if grid[row - 2][col] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < col+1 < 8 and -1 < row+1 < 8:
        if grid[row+1][col+1] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < col+1 < 8 and -1 < row-1 < 8:
        if grid[row - 1][col+1] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < col-1 < 8 and -1 < row+1 < 8:
        if grid[row+1][col - 1] == "0":
            count += 1
        else:
            count2 -= 1
    if -1 < col - 1 < 8 and -1 < row - 1 < 8:
        if grid[row - 1][col - 1] == "0":
            count += 1
        else:
            count2 -= 1
    print(count + count2)





