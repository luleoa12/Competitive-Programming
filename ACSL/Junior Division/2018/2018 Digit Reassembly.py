# 1325678945
# 987654
# 456160
# 143295823976154
# 123456

num = []
for i in range(5):
    num.append([i for i in input("Number: ")])
count = 0
print(len(num[0]))
sum_ = 0
for i in range(len(num[1])):
    sum_ += int(num[1][i])
print(sum_)
sum_ = 0
for i in range(0, len(num[2]), 2):
    sum_ += int(num[2][i])
print(sum_)
count = 0
for digit in num[3]:
    if int(digit) == 4:
        count += 1
print(count)
if len(num) % 2 == 0:
    print(num[4][int(len(num[4])/2)])
else:
    print(num[4][int((len(num[4])-1)/2)])
