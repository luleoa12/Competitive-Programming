

inputs = []
for i in range(5):
    inputs.append(input())


# inputs = ['314159265', '11223344', '25897257', '91', '9876543210']
# inputs = ['1123581321345589', '19782017', '574839285638204927', '4', '2178281828']

for num in inputs:
    ans = [num[0]]
    start = 1
    offset = 1
    digits_left = len(num) - 1
    end = 0
    while digits_left > offset:
        end = start + offset
        if int(num[start:end]) <= int(ans[-1]):
            offset += 1
            end = start + offset
            ans.append(num[start:end])
            start = end
            digits_left -= offset
        elif int(num[start:end]) > int(ans[-1]):
            ans.append(num[start:end])
            start = end
            digits_left -= offset
    if num[start:end+offset] != "" and ans[-1] != "":
        if int(num[start:end+offset]) > int(ans[-1]):
            ans.append(num[start:end+offset])
    print(" ".join(ans))
