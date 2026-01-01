# ACSL Intermediate Division 2017-2018 Contest #1
# ACSL Ninety-Nine

def point_val(card, total):
    if card == "A":
        if total + 14 <= 99:
            return 14
        else:
            return 1
    values = {"1": 1, "2": 2, "3": 3, "4": 4, "5": 5, "6": 6, "7": 7, "8": 8, "9": 0, "T": -10, "J":  11, "Q": 12, "K": 13}
    return values[card]

def max_card(cards):
    order = ["A", "K", "Q", "J", "T", "9", "8", "7", "6", "5", "4", "3", "2", "1"]
    order = order[::-1]
    max_index = 0
    largest_card = 0
    for card in cards:
        if order.index(card) > max_index:
            max_index = order.index(card)
            largest_card = card
    return largest_card

inputs = []
for i in range(5):
    inputs.append(list(input().split(", ")))

for cards in inputs:
    player_cards = cards[1:4]
    rem_cards = cards[4:]
    points = int(cards[0])

    turn = "player"
    while points <= 99:
        if turn == "player":
            largest_card = max_card(player_cards)
            points += point_val(largest_card, points)
            player_cards.remove(largest_card)

            player_cards.append(rem_cards[0])
            rem_cards.pop(0)
            turn = "dealer"
        elif turn == "dealer":
            points += point_val(rem_cards[0], points)
            rem_cards.pop(0)
            turn = "player"

    print(str(points) + ", " + turn)



