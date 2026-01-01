# ACSL Intermediate Division 2017-2018 Contest #3
# ACSL Walk

import copy

def calc(direction_entered, degree):
    if degree == 0:
        return direction_entered
    directions = ""
    if direction_entered == "L":
        directions = "BLAR"
    elif direction_entered == "R":
        directions = "ARBL"
    elif direction_entered == "B":
        directions = "RBLA"
    elif direction_entered == "A":
        directions = "LARB"

    return directions[degree - 1]


def add_leading_zeros(num):
    if len(num) != 8:
        for i in range(8-len(num)):
            num.insert(0, 0)
    return num


arr = input().split(", ")
inputs = []
for i in range(5):
    inputs.append(input().split(", "))

grid = []
for num in arr:
    grid.append(add_leading_zeros([int(i) for i in (bin(int(str(num), 16)).lstrip("0b"))]))

for data in inputs:

    new_grid = copy.deepcopy(grid)

    row, col, direction, steps = int(data[0])-1, int(data[1])-1, data[2], int(data[3])
    new_direction = direction

    for _ in range(steps):

        new_direction = calc(new_direction, new_grid[row][col])
        if new_grid[row][col] != 0:

            new_grid[row][col] = (new_grid[row][col]+1) % 5
            if new_grid[row][col] == 0:
                new_grid[row][col] += 1
        if new_direction == "L":
            col = (col+1) % 8
        elif new_direction == "R":
            col = (col-1) % 8
        elif new_direction == "A":
            row = (row+1) % 8
        elif new_direction == "B":
            row = (row-1) % 8

    print("{}, {}".format(row+1, col+1))

