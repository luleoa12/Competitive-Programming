# 5D2D6H9D9S6H
# 4C1C6C7H5S4D
# 3D4H5C6S2D1D
# 9S8H7C7D9H3H
# 1C1D9H8S9S7C

# 4S2S5S6S8S9S
# 7H3S3H3D3C2H
# 9D3C5H1S7D9S
# 6C1S2H7S8D9H
# 1D2S3D4S2H2C

inputs = []
for i in range(5):
    inputs.append(input("Cards: "))
for cards in inputs:
    lead = [cards[0], cards[1]]
    check = []
    check_2 = []
    for i in range(3, len(cards), 2):
        if str(cards[i]) == str(lead[1]):
            if cards[i - 1] > lead[0]:
                check.append(cards[i - 1])
            else:
                check_2.append(cards[i - 1])
    if len(check) == 0 and len(check_2) == 0:
        print("NONE")
    elif len(check) == 0 and len(check_2) != 0:
        print(str(min(check_2)) + str(lead[1]))
    else:
        print(str(min(check)) + str(lead[1]))

