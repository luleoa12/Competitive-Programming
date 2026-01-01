inputs = []
for i in range(5):
    inputs.append(input("Data: ").split(", "))
for data in inputs:
    ans = []
    num = [x for x in str(data[1])]
    money = False
    comma = False
    negative = False
    star = True
    if "," in data[0]:
        comma = True
    count = 0
    if "*" in data[0]:
        star = True
    else:
        star = False
    if "$" in data[0]:
        money = True
    if "&" in data[0]:
        for val in data[0]:
            if val == "&":
                count += 1
    if "-" in data[0]:
        negative = True
        num.remove("-")
    length = len(num)
    if money is True:
        num.insert(0, "$")
        if star is True:
            while count > length:
                num.insert(0, "*")
                count -= 1
    else:
        while count > length:
            num.insert(0, "*")
            count -= 1
    ans = num
    if comma is True:
        for i in range(len(num)-3, 0, -3):
            ans.insert(i, ",")
    if negative is True:
        num.append("-")
    print("".join(ans))





