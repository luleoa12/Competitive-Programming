# ACSL Junior Division 2018-2019 Contest #4
# Prefix Evaluation

inputs = []
for i in range(5):
    inputs.append(list(map(str, input().split(" "))))

for exp in inputs:
    digits = [str(i) for i in range(-20, 21)]
    i = -1
    while len(exp) != 1:
        i += 1
        char = exp[i]
        if char == "+":
            if exp[i + 1] in digits and exp[i + 2] in digits:
                exp[i] = str(int(exp[i+1]) + int(exp[i + 2]))
                exp.remove(exp[i + 1])
                exp.remove(exp[i + 1])
                i = -1

        elif char == "-":
            if exp[i + 1] in digits and exp[i + 2] in digits:
                exp[i] = str(int(exp[i+1]) - int(exp[i + 2]))
                exp.remove(exp[i + 1])
                exp.remove(exp[i + 1])
                i = -1

        elif char == "*":
            if exp[i + 1] in digits and exp[i + 2] in digits:
                exp[i] = str(int(exp[i + 1]) * int(exp[i + 2]))
                exp.remove(exp[i + 1])
                exp.remove(exp[i + 1])
                i = -1

        elif char == "@":
            if exp[i + 1] in digits and exp[i + 2] in digits and exp[i + 3] in digits:
                if int(exp[i + 1]) > 0:
                    exp[i] = exp[i + 2]
                else:
                    exp[i] = exp[i + 3]
                exp.remove(exp[i + 1])
                exp.remove(exp[i + 1])
                exp.remove(exp[i + 1])
                i = -1

    print(exp[0])
