# ACSL Junior Division 2016-2017 Contest #1
# ACSL AGRAM

inputs = []
for i in range(5):
    inputs.append(input().split(", "))
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
        print(str(min(check_2)) + ", " + str(lead[1]))
    else:
        print(str(min(check)) + ", " + str(lead[1]))

