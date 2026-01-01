
inputs = []
for i in range(5):
    inputs.append(list(input().split()))


for val in inputs:
    hours = 0
    minutes = 0
    for i in range(len(val)):
        if i == 0:
            size = 1
        elif i == 4:
            size = 5
        else:
            size = i
        if val[i] == "R":
            hours += size
        elif val[i] == "G":
            minutes += 5*size
        elif val[i] == "B":
            hours += size
            minutes += 5*size
    print("{:02d}:{:02d}".format(hours, minutes))

