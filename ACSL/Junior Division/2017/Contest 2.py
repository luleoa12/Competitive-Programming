# ACSL Junior Division 2017-2018 Contest #2
# ACSL Enclosure

inputs = []
for i in range(5):
    inputs.append(input().replace(" ", ""))

for exp in inputs:
    index = 0
    direction = 0
    for i in range(len(exp)):
        if exp[i] == ")":
            index = i + 1
            direction = "left"
        elif exp[i] == "(":
            index = i + 1
            direction = "right"
    nums = ["1", "2", "3", "4", "5", "6", "7", "8", "9"]
    ans = []
    if direction == "left":
        for i in range(0, index):
            if exp[i] in nums and i > 0:
                ans.append(str(i-1))

    elif direction == "right":
        for i in range(index, len(exp)):
            if i > index and exp[i] in nums:
                ans.append(str(i+2))

    print(", ".join(ans))

