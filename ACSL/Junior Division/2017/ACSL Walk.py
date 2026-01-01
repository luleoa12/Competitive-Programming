arr = input().split(", ")
ans = []
for i in arr:
    ans.append([int(j) for j in i])
for i in range(len(ans)):
    for j in range(4 - len(ans[i])):
        ans[i].insert(0, 0)
inputs = []
for i in range(5):
    inputs.append(list(map(int, input().split(", "))))
for pos in inputs:
    pos[0] -= 1
    pos[1] -= 1
    grid = [row[:] for row in ans]
    for i in range(6):
        if grid[pos[0]][pos[1]] == 0:
            grid[pos[0]][pos[1]] += 1
            pos[1] += 1
            if pos[1] == 4:
                pos[1] = 0
        elif grid[pos[0]][pos[1]] == 1:
            grid[pos[0]][pos[1]] += 1
            pos[1] -= 1
            if pos[1] == -1:
                pos[1] = 3
        elif grid[pos[0]][pos[1]] == 2:
            grid[pos[0]][pos[1]] += 1
            pos[0] -= 1
            if pos[0] == -1:
                pos[0] = 3
        elif grid[pos[0]][pos[1]] == 3:
            grid[pos[0]][pos[1]] -= 3
            pos[0] += 1
            if pos[0] == 4:
                pos[0] = 0
    print(str(pos[0]+1) + ", " + str(pos[1]+1))
