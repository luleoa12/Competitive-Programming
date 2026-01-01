# Contest 3

import copy

def abc(filled, data, ans):
    grid = [["" for i in range(4)] for j in range(4)]
    for num in filled:
        grid[num//6-1][num % 6-2] = "-1"
    for i in range(1, len(data), 2):
        cell = int(data[i])
        j = 0
        if cell in [2, 3, 4, 5]:
            while grid[0+j][cell-2] == "-1":
                j += 1
            grid[0+j][cell-2] = data[i-1]
        elif cell in [7, 13, 19, 25]:
            while grid[(cell // 6) - 1][0+j] == "-1":
                j += 1
            grid[(cell // 6) - 1][0+j] = data[i-1]
        elif cell in [12, 18, 24, 30]:
            while grid[((cell // 6)-2)][3-j] == "-1":
                j += 1
            grid[((cell // 6)-2)][3-j] = data[i-1]
        elif cell in [32, 33, 34, 35]:
            while grid[3-j][(cell % 6) - 2] == "-1":
                j += 1
            grid[3-j][(cell % 6) - 2] = data[i-1]
    print(solve([grid], [0, 0], ans))


def solve(grids, index, ans):
    possible_grids = []
    x = index[0]
    y = index[1]

    if index == [4, 0]:
        return grids[0][(ans//6)-1][(ans % 6) - 2]
    for grid in grids:
        if grid[x][y] == "":
            row = grid[x]
            col = [grid[i][y] for i in range(4)]
            new_grid = copy.deepcopy(grid)
            if "A" not in col and "A" not in row:
                new_grid[x][y] = 'A'
                possible_grids.append(new_grid)
            new_grid = copy.deepcopy(grid)
            if "B" not in col and "B" not in row:
                new_grid[x][y] = 'B'
                possible_grids.append(new_grid)
            new_grid = copy.deepcopy(grid)
            if "C" not in col and "C" not in row:
                new_grid[x][y] = 'C'
                possible_grids.append(new_grid)
        else:
            possible_grids.append(grid)

    return solve(possible_grids, [x + ((y+1)//4), (y+1) % 4], ans)


for i in range(5):
    inp = input().split(", ")
    filled_cells = list(map(int, inp[:4]))
    given_locations = inp[5:-1]
    find = inp[-1]
    abc(filled_cells, given_locations, int(find))
