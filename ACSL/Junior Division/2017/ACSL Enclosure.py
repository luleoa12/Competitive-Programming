
#
# inputs = []
# for i in range(5):
#     inputs.append(input().replace(" ", ""))
inputs = ['(2+3*6+1', '2–5*(6+1', '5+5–2)*5', '3*5+(8/4*2', '2+8/4*5)']
# inputs = ['6+2/3*4)', '(2–2+2+3*4/2', '8/(2+3–6+2', '7–5+8*6/2)+1', '9+6)/2–4+5']
print(inputs)
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

