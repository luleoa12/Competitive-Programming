
# Contest 1

inputs = []
for i in range(5):
    inputs.append(list(map(str, input().split(", "))))


for data in inputs:
    start_city = data[0]
    end_city = data[1]
    car_size = data[2]
    highway = data[3]
    gas_cost = data[4]

    routes_length = [450, 140, 120, 320, 250, 80]

    miles = 0
    for i in range(ord(start_city)-64, ord(end_city)-64):
        miles += routes_length[i-1]

    mph = 0
    if highway == "I":
        mph = 65
    elif highway == "H":
        mph = 60
    elif highway == "M":
        mph = 55
    elif highway == "S":
        mph = 45

    mpg = 0
    if car_size == "C":
        mpg = 28
    elif car_size == "M":
        mpg = 25
    elif car_size == "F":
        mpg = 22
    elif car_size == "V":
        mpg = 20

    time = "{:02d}:{:02d}".format(int(miles/mph), round((miles/mph-int(miles/mph))*60))
    cost = "${:.2f}".format(round(miles/mpg*float(gas_cost), 2))
    print(str(miles) + ", " + str(time) + ", " + str(cost))

