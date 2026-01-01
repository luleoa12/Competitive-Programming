# ACSL Intermdiate Division 2013-2014 Contest 1
# ACSL Scrabble

word = list(map(str, input().split(", ")))

for i in range(5):
    data = list(map(str, input().split(", ")))
    word_multiplier = 1
    score = 0
    if data[1] == "V":
        increment = 10
        add_val = 31

    else:
        increment = 1
        add_val = 4
    index = 0
    for j in range(int(data[0]), int(data[0]) + add_val, increment):
        if word[index] == "A" or word[index] == "E":
            word_score = 1
        elif word[index] == "D" or word[index] == "R":
            word_score = 2
        elif word[index] == "B" or word[index] == "M":
            word_score = 3
        elif word[index] == "V" or word[index] == "Y":
            word_score = 4
        elif word[index] == "J" or word[index] == "X":
            word_score = 8
        else:
            word_score = 0
        letter_multiplier = 1
        if j % 3 == 0 and j % 2 == 1:
            letter_multiplier = 2
        elif j % 5 == 0:
            letter_multiplier = 3
        elif j % 7 == 0:
            word_multiplier = 2
        elif j % 8 == 0:
            word_multiplier = 3
        score += (word_score*letter_multiplier)
        index += 1
    print(score*word_multiplier)





