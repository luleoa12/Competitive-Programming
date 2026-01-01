# ACSL Junior Division 2017-2018 Contest #1
# ACSL Ninety-Nine

inputs = []
for i in range(5):
    inputs.append(list(map(int, input().split(","))))
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




