# ACSL Intermediate Division 2014-2015 Contest #3
# ACSL Isola


inputs = []
for i in range(5):
    inputs.append(list(map(int, input().split(","))))


for data in inputs:
    key = data[1]
    blockage = data[2:-1]
    blockage.append(data[0])
    x = 0
    y = 0
    for i in range(1, 8):
        for j in range(1, 8):
            if i + (7 * (j - 1)) == key:
                x = i
                y = j
                break

    ans_len = 0
    ans = []

    # Down
    cur = []
    for i in range(y-1, 0, -1):
        num = x + 7 * (i-1)
        if num not in blockage:
            cur.append(str(num))
        else:
            break
    if len(cur) > ans_len:
        ans = cur
        ans_len = len(cur)

    # Up
    cur = []
    for i in range(y+1, 8):
        num = x + 7 * (i-1)
        if num not in blockage:
            cur.append(str(num))
        else:
            break
    if len(cur) > ans_len:
        ans = cur
        ans_len = len(cur)

    # Right
    cur = []
    for i in range(x+1, 8):
        num = i + 7*(y-1)
        if num not in blockage:
            cur.append(str(num))
        else:
            break
    if len(cur) > ans_len:
        ans = cur
        ans_len = len(cur)

    # Left
    cur = []
    for i in range(x-1, 0, -1):
        num = i + 7*(y-1)
        if num not in blockage:
            cur.append(str(num))
        else:
            break
    if len(cur) > ans_len:
        ans = cur
        ans_len = len(cur)

    # Top right to bottom left diagonal
    cur = []
    for i in range(1, min(x, y)):
        num = key - 8 * i
        if num not in blockage:
            cur.append(str(num))
        else:
            break
    if len(cur) > ans_len:
        ans = cur
        ans_len = len(cur)

    # Bottom left to top right diagonal
    cur = []
    for i in range(1, min(8 - x, 8 - y)):
        num = key + 8 * i
        if num not in blockage:
            cur.append(str(num))
        else:
            break
    if len(cur) > ans_len:
        ans = cur
        ans_len = len(cur)

    # Top left to bottom right diagonal
    cur = []
    for i in range(1, min(8-x, y)):
        num = key - 6 * i
        if num not in blockage:
            cur.append(str(num))
        else:
            break
    if len(cur) > ans_len:
        ans = cur
        ans_len = len(cur)

    # Bottom right to top left diagonal
    cur = []
    for i in range(1, min(x, 8-y)):
        num = key + 6 * i
        if num not in blockage:
            cur.append(str(num))
        else:
            break
    if len(cur) >= ans_len:
        ans = cur
        ans_len = len(cur)

    if not ans:
        print("NONE")
    else:
        print(", ".join(ans))








