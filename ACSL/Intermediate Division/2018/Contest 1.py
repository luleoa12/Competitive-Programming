# ACSL Intermediate Division 2018-2019 Contest #1
# Digit Reassembly

inputs = []
for i in range(5):
    inputs.append(list(map(int, input().split())))

for nums in inputs:
    num = str(nums[0])
    n = nums[1]

    ans = 0
    for i in range(len(num)-n+1):
        ans += int(num[i:i+n])
    print(ans)

