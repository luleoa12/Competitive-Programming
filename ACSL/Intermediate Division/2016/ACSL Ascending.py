
# Contest 2

inputs = []
for i in range(5):
    inputs.append(str(input()))

for num in inputs:
    l = int(num[0])
    start_num = num[1:l+1]
    rem_nums = num[1+l:][::-1]

    ans = [start_num]
    cur = ""

    for i in range(len(rem_nums)):
        cur += rem_nums[i]
        if int(cur) > int(ans[-1]):
            ans.append(str(cur))
            cur = ""
    print(" ".join(ans))


