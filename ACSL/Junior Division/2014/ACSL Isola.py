# Contest 3

inputs = []
for i in range(5):
    inputs.append(input().split(","))

for nums in inputs:
    up = []
    down = []
    left = []
    right = []
    blockage = [int(nums[0])]
    for i in range(1, len(nums)-1):
        blockage.append(int(nums[i]))
    y_coord = 0
    x_coord = 0

    start = nums[1]

    for x in range(1, 8):
        for y in range(1, 8):
            if x + (7 * (y - 1)) == int(start):
                x_coord = x
                y_coord = y
                break
    print(x_coord)
    print(y_coord)
    for i in range(y_coord-1, 0, -1):
        number = x_coord + 7 * (i - 1)
        if number not in blockage:
            down.append(str(number))
        else:
            break
    for i in range(y_coord+1, 8):
        number = x_coord + 7 * (i - 1)
        if number not in blockage:
            up.append(str(number))
        else:
            break
    for i in range(x_coord-1, 0, -1):
        number = i + 7 * (y_coord - 1)
        if number not in blockage:
            left.append(str(number))
        else:
            break
    for i in range(x_coord+1, 8):
        number = i + 7 * (y_coord - 1)
        if number not in blockage:
            right.append(str(number))
        else:
            break
    if len(right) > len(left) and len(right) > len(up) and len(right) > len(down):
        print(", ".join(right))
    elif len(left) > len(right) and len(left) > len(up) and len(left) > len(down):
        print(", ".join(left))
    elif len(up) > len(right) and len(up) > len(left) and len(up) > len(down):
        print(", ".join(up))
    elif len(down) > len(right) and len(down) > len(left) and len(down) > len(up):
        print(", ".join(down))
    else:
        print("NONE")













