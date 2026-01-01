# ACSL Intermediate Division 2013-2014 Contest #2
# Print Formatting

for i in range(5):
    data = list(map(str, input().split(", ")))
    comma = False
    dollar = False
    decimal = False
    count_left = 0
    count_right = 0
    for char in data[0]:
        if char == "$":
            dollar = True
        if char == ",":
            comma = True
        if char == ".":
            decimal = True
        if char == "&" and not decimal:
            count_left += 1
        elif char == "&":
            count_right += 1
    num = data[1]

    start = False
    count = 0
    for val in num:
        if start:
            count += 1
        if val == ".":

            start = True
    if decimal and count > count_right:
        num = str(round(float(num), count_right))
        start = False
        count2 = 0
        for val in num:
            if start:
                count2 += 1
            if val == ".":
                start = True
        if count_right != count2:
            while count2 != count_right:
                count2 += 1
                num = num + "0"
    if decimal and count < count_right:
        for j in range(count_right-count):
            num += "0"
    if dollar:
        num = "$" + num
    length = len(num)
    if decimal:
        length -= 1
    if dollar:
        length -= 1
    while length != count_left + count_right:
        num = "*" + num
        length += 1
    ans = num
    if comma:
        if decimal:
            seen_decimal = False
            for j in range(len(num)-3, 0, -3):
                if num[j] != "." and seen_decimal:
                    ans = ans[:j] + "," + ans[j:]
                elif num[j] == ".":
                    seen_decimal = True
        else:
            for j in range(len(num) - 3, 0, -3):
                ans = ans[:j] + "," + ans[j:]


    print(ans)






