# Contest 1

list_ = list(input().split())
speed = 0
miles = 0
price = 0
for i in range(len(list_)):
    if i == 0:
        miles = (list_[i])[:len(list_[i])-1]
    elif i == 1:
        price = (list_[i])[:len(list_[i])-1]
    elif i == 2:
        speed = (list_[i])
cities = []
for i in range(5):
    list_ = list(input())
    city = []
    for j in range(len(list_)):
        if j == 0 or j == 3:
            city.append(list_[j])
    cities.append(city)
for places in cities:
    ans = []
    distance = 0
    if places[0] == "A":
        if places[1] == "B":
            distance = 450
        elif places[1] == "C":
            distance = 590
        elif places[1] == "D":
            distance = 710
        elif places[1] == "E":
            distance = 1030
        elif places[1] == "F":
            distance = 1280
        elif places[1] == "G":
            distance = 1360
    elif places[0] == "B":
        if places[1] == "C":
            distance = 140
        elif places[1] == "D":
            distance = 260
        elif places[1] == "E":
            distance = 580
        elif places[1] == "F":
            distance = 830
        elif places[1] == "G":
            distance = 910
    elif places[0] == "C":
        if places[1] == "D":
            distance = 120
        elif places[1] == "E":
            distance = 440
        elif places[1] == "F":
            distance = 690
        elif places[1] == "G":
            distance = 770
    elif places[0] == "D":
        if places[1] == "E":
            distance = 320
        elif places[1] == "F":
            distance = 570
        elif places[1] == "G":
            distance = 650
    elif places[0] == "E":
        if places[1] == "F":
            distance = 250
        elif places[1] == "G":
            distance = 330
    elif places[0] == "F":
        if places[1] == "G":
            distance = 80
    ans.append(str(distance))

    if len(str(int(distance/int(speed)))) == 1 and len(str(int((distance/int(speed)*60) % 60))) == 1:
        ans.append("0" + str(int(distance/int(speed))) + ":" + "0" + str(int((distance/int(speed)*60) % 60)))
    elif len(str(int(distance/int(speed)))) == 2 and len(str(int((distance/int(speed)*60) % 60))) == 1:
        ans.append(str(int(distance / int(speed))) + ":" + "0" + str(int((distance / int(speed) * 60) % 60)))
    elif len(str(int(distance/int(speed)))) == 1 and len(str(int((distance/int(speed)*60) % 60))) == 2:
        ans.append("0" + str(int(distance / int(speed))) + ":" + str(int((distance / int(speed) * 60) % 60)))
    else:
        ans.append(str(int(distance / int(speed))) + ":" + str(round((distance / int(speed) * 60) % 60)))
    if len(str(round((round((distance / int(miles) * float(price)), 2)) - (int(distance / int(miles) * float(price))), 2))) == 3:
        ans.append("$" + str(round((distance/int(miles)*float(price)), 2)) + "0")
    else:
        ans.append("$" + str(round((distance / int(miles) * float(price)), 2)))
    print(", ".join(ans))


