
# Contest 2
inputs = []
for i in range(5):
    inputs.append(input())


print("'({})".format((inputs[0][2: len(inputs[0])-1])[::-1]))

cur_count = 0
cur_char = inputs[1][2]
cur_ans = []

for char in inputs[1][2:len(inputs[1])-1]:
    if char == cur_char:
        cur_count += 1
    elif char != " ":
        cur_ans.append("({} {})".format(cur_count, cur_char))
        cur_char = char
        cur_count = 1
cur_ans.append("({} {})".format(cur_count, cur_char))

print("'({})".format(" ".join(cur_ans)))


cur_count = 0
cur_char = inputs[2][2]
cur_ans = []

for char in inputs[2][2:len(inputs[2])-1]:
    if char == cur_char:
        cur_count += 1
    elif char != " ":
        if cur_count != 1:
            cur_ans.append("({} {})".format(cur_count, cur_char))
        else:
            cur_ans.append(cur_char)
        cur_char = char
        cur_count = 1

cur_ans.append("({} {})".format(cur_count, cur_char))
print("'({})".format(" ".join(cur_ans)))


n = int(inputs[3][-2])
cur_ans = []
cur_count = 0
add_char = True
cur_part = ""
for char in inputs[3][2:len(inputs[3])-1]:
    if char == "(":
        cur_count += 1
        if cur_count % n == 0 or cur_count == 0:
            add_char = False
    if add_char:
        cur_part += char
        if char == ")":
            cur_ans.append("".join(cur_part.strip()))
            cur_part = ""
    else:
        if char == ")":
            add_char = True
print("'({} {})".format(" ".join(cur_ans), n))


cur_ans = []
cur_count = 0
cur_part = ""
n = int(inputs[4][-2])
for char in inputs[4][2:len(inputs[4])-1]:
    if cur_count != n:
        cur_part += str(char)
    else:
        cur_part += char
        cur_ans.append("'({})".format(cur_part.strip()))
        cur_part = ""
        cur_count += 1

    if char == ")":
        cur_count += 1
cur_ans.append("'({})".format(cur_part.strip()))
print(" ".join(cur_ans))




