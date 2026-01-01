
# Contest 1

inputs = []
for i in range(5):
    inputs.append(input().split(", "))

for cards in inputs:
    lead_card = cards[0]
    dealer_cards = cards[1:]

    vals = {"A":1, "2":2, "3":3, "4":4, "5":5, "6":6, "7": 7, "8":8, "9":9, "T":10, "J":11, "Q":12, "K":13}

    optimal_card = 15
    same_suit_lowest_card = 15
    same_suit = False
    lowest_card = 15
    ans1 = 0
    ans2 = 0
    ans3 = 0
    for card in dealer_cards:
        if card[1] == lead_card[1]:
            same_suit = True
            if vals[card[0]] < same_suit_lowest_card:
                same_suit_lowest_card = vals[card[0]]
                ans1 = card
            if optimal_card > vals[card[0]] > vals[lead_card[0]]:
                optimal_card = vals[card[0]]
                ans2 = card
        else:
            if vals[card[0]] < lowest_card:
                lowest_card = vals[card[0]]
                ans3 = card

    if optimal_card != 15:
        print(ans2)
    elif same_suit:
        print(ans1)
    else:
        print(ans3)










