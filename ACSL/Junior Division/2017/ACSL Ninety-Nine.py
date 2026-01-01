# 87, 5, 8, 9, 7, 4, 6, 3, 9, 0, 2
# 78, 2, 4, 8, 3, 8, 5, 0, 6, 9, 8
# 85, 7, 9, 7, 6, 5, 9, 4, 5, 0, 1
# 84, 8, 4, 2, 7, 9, 0, 1, 9, 8, 3
# 95, 9, 0, 9, 0, 1, 0, 1, 0, 2, 5

# 65, 0, 8, 0, 7, 0, 6, 0, 5, 1, 4
# 74, 2, 0, 1, 8, 2, 0, 1, 7, 0, 4
# 84, 2, 4, 6, 8, 0, 3, 9, 1, 5, 7
# 92, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
# 80, 9, 7, 5, 3, 1, 8, 6, 4, 2, 0

inputs = []
for i in range(5):
    inputs.append(list(map(int, input("Input: ").split(","))))
values = {1: 1, 2: 2, 3: 3, 4: -10, 5: 5, 6: 6, 7: 7, 8: 8, 9: 0}

# True = Player's turn
# False = Dealer's turn
turn = None
for num in inputs:
    points = num[0]
    player = [num[1], num[2], num[3], num[4], num[6], num[8], num[10]]
    dealer = [num[5], num[7], num[9]]
    order = [num[1], num[5], num[2], num[7], num[3], num[9], num[4], num[6], num[8], num[10]]
    winner = ""
    for i in range(len(order)):
        val = order[i]
        if val in player:
            turn = True
        elif val in dealer:
            turn = False
        if val == 0:
            if points + 11 > 99:
                points += 1
            else:
                points += 11
        else:
            points += values[val]
        if points > 99:
            if turn is True:
                winner = "dealer"
                print(str(points) + ", " + str(winner))
                break
            else:
                winner = "player"
                print(str(points) + ", " + str(winner))
                break




