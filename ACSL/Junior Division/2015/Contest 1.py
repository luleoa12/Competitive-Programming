# ACSL Junior Division 2015-2016 Contest #1
# ACSL CHMOD

inputs = []
for i in range(5):
    inputs.append(list(map(str, input().split(", "))))

conversion = {0: ["000", "---"], 1: ["001", "--x"], 2: ["010", "-w-"], 3: ["011", "-wx"], 4: ["100", "r--"],
              5: ["101", "r-x"], 6: ["110", "rw-"], 7: ["111", "rwx"]}

for nums in inputs:
    ans1 = []
    ans2 = []
    for num in nums:
        ans1.append(conversion[int(num)][0])
        ans1.append(" ")
        ans2.append(conversion[int(num)][1])
        ans2.append(" ")
    print("".join(ans1 + ans2))













