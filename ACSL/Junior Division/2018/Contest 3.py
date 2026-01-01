# ACSL Junior Division 2018-2019 Contest #3
# Stretch

def piece_a(start, cols, blocked):
    if (start+2) % cols == ((start % cols) + 2) % cols and start % cols != 0 and (start+1) % cols != 0 and \
            start + 2 not in blocked and start + 1 not in blocked and start + 3 not in blocked:
        return start + 3
    else:
        return start


def piece_b(start, rows, cols, blocked):
    if (start + cols) <= rows*cols and start + cols not in blocked:
        if (start + 1) % cols == ((start % cols) + 1) % cols and start % cols != 0 and start + cols + 1 not in blocked:
            return start + cols + 2
        else:
            return start
    else:
        return start


def piece_c(start, rows, cols, blocked):
    if (start + 1) % cols == ((start % cols) + 1) % cols and start % cols != 0 and start + 1 not in blocked:
        if (start + 2*cols) <= rows*cols and \
                start + cols + 1 not in blocked and start + cols + cols + 1 not in blocked:
            return start + cols + cols + 2
        else:
            return start
    else:
        return start


inputs = []
for i in range(5):
    inputs.append(input().split())

for nums in inputs:
    blocked = []
    rows = int(nums[0])
    cols = int(nums[1])
    start = int(nums[2])
    grid = [[i + j * 10 for i in range(1, cols + 1)] for j in range(0, rows)]
    for i in range(int(nums[3])):
        blocked.append(int(nums[4 + i]))
    order = ""
    while True:
        new_start = piece_a(start, cols, blocked)
        if new_start != start:
            order += "A"
            start = new_start
            if (start - 1) % cols == 0:
                break
        new_start = piece_b(start, rows, cols, blocked)
        if new_start != start:
            order += "B"
            start = new_start
            if (start - 1) % cols == 0:
                break
        new_start = piece_c(start, rows, cols, blocked)
        if new_start != start:
            order += "C"
            start = new_start
            if (start - 1) % cols == 0:
                break

    print(order)

