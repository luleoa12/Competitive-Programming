# ACSL Intermediate Division 2015-2016 Contest #2
# ACSL Strings

inputs = []
for i in range(5):
    inputs.append(list(map(str, input().split(", "))))


for i in range(len(inputs)):
    parameters = inputs[i]
    ans = ""
    if i == 0:
        word = parameters[0]
        n = int(parameters[1])
        char = parameters[2]
        for j in range(len(word)):
            ans += word[j]
            if j != len(word) - 1 and (j + 1) % n == 0:
                ans += char
        print(ans)
    elif i == 1:
        word = parameters[0]
        char = parameters[1]

        ans = word.replace(char, "")
        print(ans)
    elif i == 2:
        word = parameters[0]
        char = parameters[1]
        word = word.replace(char, "*")
        for j in range(len(word)):
            if word[j] != "*":
                ans += word[j]
            else:
                break
        print(ans)

    elif i == 3:
        ans = []
        word = parameters[0]
        char = parameters[1]
        cur = ""
        for j in range(len(word)):
            if word[j] == char:
                ans.append(cur)
                cur = char
            else:
                cur += word[j]
        ans.append(cur)
        print(" ".join(ans))
    elif i == 4:
        ans = []
        word = parameters[0]
        n = int(parameters[1])
        char = parameters[2]
        cur = ""
        for j in range(len(word)):
            cur += word[j]
            if len(cur) == n:
                ans.append(cur)
                cur = ""
            if j < len(word) - 1:
                if word[j + 1] == char:
                    ans.append(cur)
                    cur = ""
        ans.append(cur)
        print(" ".join(ans))









