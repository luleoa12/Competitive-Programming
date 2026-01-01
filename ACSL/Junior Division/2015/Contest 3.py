# ACSL Junior Division 2015-2016 Contest #3
# ACSL ABC

inputs = []
for i in range(5):
    inputs.append(list(map(str, input().split(", "))))
print(inputs)

for input in inputs:
    grid = [["", "", ""], ["", "", ""], ["", "", ""]]
    for i in range(1, 1+(int(input[0]))*2, 2):
        if 0 <= int(input[i]) - 1 < 3:
            grid[0][(int(input[i]) - 1) % 3] = input[i + 1]
        elif 3 <= int(input[i]) - 1 < 6:
            grid[1][(int(input[i]) - 1) % 3] = input[i + 1]
        else:
            grid[2][(int(input[i]) - 1) % 3] = input[i + 1]

    for x in range(2):
        for i in range(3):
            row_num = grid[i]
            for j in range(3):
                column_num = [grid[0][j], grid[1][j], grid[2][j]]
                letters = ["A", "B", "C"]
                if grid[i][j] == "":
                    if "A" in row_num or "A" in column_num:
                        letters.remove("A")
                    if "B" in row_num or "B" in column_num:
                        letters.remove("B")
                    if "C" in row_num or "C" in column_num:
                        letters.remove("C")
                    if len(letters) == 1:
                        grid[i][j] = letters[0]

    ans = ""
    for i in range(3):
        for j in range(3):
            ans += grid[i][j]
    print(ans)



