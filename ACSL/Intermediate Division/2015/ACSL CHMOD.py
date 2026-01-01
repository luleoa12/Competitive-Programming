# Contest 1

conversion1 = {0: ["000", "---"], 1: ["001", "--x"], 2: ["010", "-w-"], 3: ["011", "-wx"], 4: ["100", "r--"],
              5: ["101", "r-x"], 6: ["110", "rw-"], 7: ["111", "rwx"]}

conversion2 = {"000": "---", "001": "--x", "010": "-w-", "011": "-wx", "100": "r--", "101": "r-x",
               "110": "rw-", "111": "rwx"}

conversion3 = {"---": "000", "--x": "001", "-w-": "010", "-wx": "011", "r--": "100", "r-x": "101",
               "rw-": "110", "rwx": "111"}

octals = []
for i in range(2):
    octals.append(list(map(int, input().split(", "))))

bins = []
for i in range(2):
    bins.append(list(map(str, input().split(", "))))

char = list(map(str, input().split(", ")))

for octal in octals:
    ans1 = []
    ans2 = []
    for num in octal:
        ans1.append(conversion1[num][0])
        ans2.append(conversion1[num][1])
    print("{} and {}".format(" ".join(ans1), " ".join(ans2)))

for b in bins:
    ans1 = []
    ans2 = []
    for num in b:
        cur = 0
        for i in range(len(num)):
            cur += int(((2**(i)) * int(num[2-i])))
        ans1.append(str(cur))
        ans2.append(conversion2[num])
    print("{} and {}".format("".join(ans1), " ".join(ans2)))

ans1 = []
ans2 = []
for group in char:

    ans2.append(conversion3[group])

for b in ans2:
    cur = 0
    for i in range(len(b)):
        cur += ((2**i) * (int(b[2-i])))
    ans1.append(str(cur))
print("{} and {}".format("".join(ans1), " ".join(ans2)))



