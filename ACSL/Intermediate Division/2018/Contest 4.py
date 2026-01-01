# ACSL Intermediate Division 2018-2019 Contest #4
# Prefix Evaluation

inputs = []
for i in range(5):
    inputs.append(input().split())

for exp in inputs:
    i = 0
    while len(exp) != 1:
        ops = "+-*>@"
        if exp[i] in "+-*" and exp[i+1] not in ops and exp[i+2] not in ops:
            if exp[i] == "+":
                exp.insert(i, str(int(exp[i+1]) + int(exp[i+2])))
            elif exp[i] == "-":
                exp.insert(i, str(int(exp[i + 1]) - int(exp[i + 2])))
            elif exp[i] == "*":
                exp.insert(i, str(int(exp[i + 1]) * int(exp[i + 2])))
            for j in range(3):
                exp.pop(i + 1)
            i = 0

        elif exp[i] in "@>" and exp[i+1] not in ops and exp[i+2] not in ops and exp[i+3] not in ops:
            if exp[i] == ">":
                exp.insert(i, str(max(int(exp[i+1]), int(exp[i+2]), int(exp[i+3]))))
            elif exp[i] == "@":
                if int(exp[i+1]) > 0:
                    exp.insert(i, exp[i+2])
                else:
                    exp.insert(i, exp[i+3])

            for j in range(4):
                exp.pop(i + 1)

            i = 0
        else:
            i += 1
    print(int(exp[0]))




