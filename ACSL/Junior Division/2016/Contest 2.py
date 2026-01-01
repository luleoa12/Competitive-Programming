# ACSL Junior Division 2016-2017 Contest #2
# ACSL Ascending

inputs = []
for i in range(5):
    inputs.append(input())

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
