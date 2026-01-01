# ACSL Junior Division 2015-2016 Contest #4
# ACSL Reg Exp

char_str = list(map(str, input().split(", ")))

inputs = []
for i in range(5):
    list_ = str(input())
    inputs.append([list_[j] for j in range(len(list_))])


for exp in inputs:
    length = 0
    check = exp[:]
    if "?" in check:
        check.remove("?")
        if "*" in check:
            length = 8
        elif "+" in check:
            length = 6
        elif "?" in check:
            length = 3
        else:
            length = 2
    elif "+" in check:
        check.remove("+")
        if "*" in check:
            length = 12
        elif "+" in check:
            length = 9
        else:
            length = 3
    elif "*" in check:
        check.remove("*")
        if "*" in check:
            length = 16
        else:
            length = 4
    possible_ans = ["" for i in range(length)]
    first = True
    for i in range(len(exp)):
        char = exp[i]
        if char == "?":
            if first is False:
                possible_ans[1] += str(exp[i - 1])
            else:
                for j in range((length // 2), length):
                    possible_ans[j] += str(exp[i - 1])
            first = False

        elif char == "*":
            for j in range(length):
                if j % 4 == 1:
                    possible_ans[j] = possible_ans[j] + str(exp[i - 1])
                if j % 4 == 2:
                    possible_ans[j] = possible_ans[j] + str(exp[i - 1]) + str(exp[i - 1])
                if j % 4 == 3:
                    possible_ans[j] = possible_ans[j] + str(exp[i - 1]) + str(exp[i - 1]) + str(exp[i - 1])

        elif char == "+":
            for j in range(length):
                if j % 3 == 0:
                    possible_ans[j] = possible_ans[j] + str(exp[i - 1])
                if j % 3 == 1:
                    possible_ans[j] = possible_ans[j] + str(exp[i - 1]) + str(exp[i - 1])
                if j % 3 == 2:
                    possible_ans[j] = possible_ans[j] + str(exp[i - 1]) + str(exp[i - 1]) + str(exp[i - 1])
        else:
            if i != len(exp) - 1:
                if exp[i + 1] != "?" and exp[i + 1] != "*" and exp[i + 1] != "+":
                    for j in range(len(possible_ans)):
                        possible_ans[j] += str(char)
            elif i == len(exp) - 1:
                for j in range(len(possible_ans)):
                    possible_ans[j] += str(char)
    output = []
    if "" in possible_ans:
        output.append("#")
    for ans in possible_ans:
        if ans in char_str and ans not in output:
            output.append(ans)
    if len(output) == 0:
        print("NONE")
    else:
        print(", ".join(output))

