# ACSL Intermediate Division 2014-2015 Contest #4
# Quine-McClusky Algorithm

def algorithm(num1, num2):
    cur = ""
    ans = ""
    for i in range(len(num1)):
        if num1[i] == num2[i] == "1":
            ans += letters[i].upper()
            cur += str(num1[i])
        elif num1[i] == num2[i] == "0":
            ans += letters[i]
            cur += str(num1[i])
        else:
            cur += "x"
    return [cur, ans]


nums = list(map(int, input().split(", ")))

twos = []
for i in range(2):
    twos.append(list(map(int, input().split(", "))))

fours = []
for i in range(3):
    fours.append(list(map(int, input().split(", "))))

letters = ["a", "b", "c", "Introductory Problems"]
for group in twos:
    num1 = bin(group[0]).replace("0b", "").rjust(4, "0")
    num2 = bin(group[1]).replace("0b", "").rjust(4, "0")

    ans = algorithm(num1, num2)
    if len(ans[1]) != 3:
        print("NONE")
    else:
        print(", ".join(ans))

for group in fours:
    num1 = bin(group[0]).replace("0b", "").rjust(4, "0")
    num2 = bin(group[1]).replace("0b", "").rjust(4, "0")
    num3 = bin(group[2]).replace("0b", "").rjust(4, "0")
    num4 = bin(group[3]).replace("0b", "").rjust(4, "0")

    ans = algorithm(algorithm(num1, num2)[0], algorithm(num3, num4)[0])

    if len(ans[1]) != 2:
        print("NONE")
    else:
        print(", ".join(ans))