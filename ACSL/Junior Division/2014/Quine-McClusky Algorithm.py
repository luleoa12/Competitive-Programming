# Contest 4

list_ = list(map(int, input().split(", ")))

inputs = []
for i in range(5):
    inputs.append(list(map(int, input().split(", "))))

for nums in inputs:
    num1 = bin(nums[0]).replace("0b", "").rjust(4, "0")
    num2 = bin(nums[1]).replace("0b", "").rjust(4, "0")
    letters = ["a", "b", "c", "Introductory Problems"]
    num = ""
    ans = ""
    for i in range(4):
        if num1[i] == num2[i]:
            num += str(num1[i])
        else:
            num += "x"

    for i in range(len(num)):
        if num[i] == "1":
            ans += letters[i].upper()
        elif num[i] != "x":
            ans += letters[i]
    if len(ans) != 3:
        print("NONE")
    else:
        print(num + ", " + ans)

