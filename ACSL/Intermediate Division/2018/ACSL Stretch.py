# Contest 3

def cols(grid, col):
    return [row[col] for row in grid]


def piece_a(start, grid, c, direction, blocked):
    row = (start-1) // c

    if direction == "left":
        if start + 1 in grid[row] and start + 2 in grid[row] and start + 1 not in blocked and \
                start + 2 not in blocked and start + 3 not in blocked:
            return start + 3
        else:
            return start
    else:
        if start - 1 in grid[row] and start - 2 in grid[row] and start - 1 not in blocked and \
                start - 2 not in blocked and start - 3 not in blocked:
            return start - 3
        else:
            return start


def piece_b(start, grid, c, direction, blocked):
    row = (start-1) // c
    col = (start-1) % c
    if direction == "left":
        if start + c in cols(grid, col) and start + c in grid[row+1] and start + c not in blocked and \
                start + c + 1 in grid[row+1] and start + c + 1 not in blocked and \
                start + c + 1 in cols(grid, col + 1):
            return start + c + 2
        else:
            return start
    else:
        if start - 1 in grid[row] and start - 1 not in blocked and start - 1 in cols(grid, col-1) and \
                start - c - 1 in grid[row - 1] and start - c - 1 not in blocked and \
                start - c - 1 in cols(grid, col - 1):
            return start - c - 2
        else:
            return start


def piece_c(start, grid, c, direction, blocked):
    row = (start-1) // c
    col = (start-1) % c
    if direction == "left":

        try:
            if start + 1 in grid[row] and start + 1 in cols(grid, col+1) and start + 1 not in blocked and start + c + 1 in grid[row+1] and \
                start + c + 1 not in blocked and start + c + 1 in cols(grid, col + 1) and \
                start + c + c + 1 in grid[row+2] and start + c + c + 1 not in blocked and \
                start + c + c + 1 in cols(grid, col + 1):
                return start + 2 + c + c
            else:
                return start
        except:
            return start
    else:
        try:
            if start - c in grid[row-1] and start - c not in blocked and \
                    start - c in cols(grid, col) and start - c - c - 1 in grid[row-2] and \
                    start - c - c - 1 not in blocked and start - c - c - 1 in cols(grid, col - 1) and \
                    start - c - c in grid[row-2] and start - c - c in cols(grid, col) and \
                    start - c - c not in blocked:
                return start - 2 - c - c
            else:
                return start
        except:
            return start


inputs = []
for i in range(5):
    inputs.append(list(map(int, input().split())))

for nums in inputs:
    row, col, start, blocked = nums[0], nums[1], nums[2], nums[4:]

    if (start-1) % col == 0:
        direction = "left"
    else:
        direction = "right"

    grid = [[i+1+j*col for i in range(col)] for j in range(row)]
    pieces = ["a", "b", "c"]
    count = 0

    order = ""
    for i in range(5):
        new_start = piece_a(start, grid, col, direction, blocked)
        if new_start != start:
            order += "A"
            start = new_start
            if (direction == "left" and (start-1) % col == 0) or (direction == "right" and (col == 0)):
                break
        new_start = piece_b(start, grid, col, direction, blocked)
        if new_start != start:
            order += "B"
            start = new_start
            if (direction == "left" and (start - 1) % col == 0) or (direction == "right" and (col == 0)):
                break
        new_start = piece_c(start, grid, col, direction, blocked)
        if new_start != start:
            order += "C"
            start = new_start
            if (direction == "left" and (start - 1) % col == 0) or (direction == "right" and (col == 0)):
                break
    if direction == "left":
        print(order)
    else:
        print(order[::-1])
