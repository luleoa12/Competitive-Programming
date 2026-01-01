# Contest 4


def count_visible(nums):
    count = 0
    max_val = 0
    for num in nums:
        if num > max_val:
            max_val = num
            count += 1
    return count

def check_axis(axis, left_clue, right_clue):
    count = count_visible(axis)
    if count != int(left_clue):
        return False
    axis = axis[::-1]
    count = count_visible(axis)
    if count != int(right_clue):
        return False
    return True


def valid_grid(grid, clues):
    for i in range(len(grid)):
        row = grid[i]
        col = [grid[0][i], grid[1][i], grid[2][i], grid[3][i]]
        if not check_axis(row, clues[i+1][0], clues[i+1][-1]):
            return False
        if not check_axis(col, clues[0][i], clues[-1][i]):
            return False
    return True


def copy(grid):
    return [row[:] for row in grid]


def all_possible_grids(index, grids):
    possible_grids = []
    x = index[0]
    y = index[1]
    if index == [4, 0]:
        return grids
    for grid in grids:
        if grid[x][y] == 0:
            row = grid[x]
            col = [grid[i][y] for i in range(4)]
            new_grid = copy(grid)
            if 1 not in row and 1 not in col:
                new_grid[x][y] = 1
                possible_grids.append(new_grid)
            new_grid = copy(grid)
            if 2 not in row and 2 not in col:
                new_grid[x][y] = 2
                possible_grids.append(new_grid)
            new_grid = copy(grid)
            if 3 not in row and 3 not in col:
                new_grid[x][y] = 3
                possible_grids.append(new_grid)
            new_grid = copy(grid)
            if 4 not in row and 4 not in col:
                new_grid[x][y] = 4
                possible_grids.append(new_grid)
        else:
            possible_grids.append(grid)

    return all_possible_grids([x+((y+1)//4), (y+1) % 4], possible_grids)


clues = input().split(", ")
grid = [[0 for _ in range(4)] for _ in range(4)]

for i in range(len(clues)):
    if int(clues[i]) > 10000:
        grid[i-1] = [int(j) for j in clues[i][1:-1]]
        break

possible_grids = all_possible_grids([0, 0], [grid])

ans_grid = 0
for grid in possible_grids:
    if valid_grid(grid, clues):
        ans_grid = grid

for i in range(5):
    position = input()
    print(ans_grid[int(position[0])-1][int(position[1])-1])



