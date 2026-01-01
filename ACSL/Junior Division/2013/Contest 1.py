# ACSL Junior Division 2013-2014 Contest #1
# ACSL Scrabble

old_word = list(map(str, input()))
word = []
for i in old_word:
    if i != " " and i != ",":
        word.append(i)

pos = []
for i in range(5):
    pos.append(int(input()))
for position in pos:
    total = 0
    word_multiplier = 1
    for i in range(len(word)):
        letter = word[i]
        point = 0
        letter_multiplier = 1

        if (position+i) % 3 == 0 and (position+i) % 2 == 1:
            letter_multiplier = 2
        elif (position+i) % 5 == 0:
            letter_multiplier = 3
        elif (position+i) % 7 == 0:
            word_multiplier = 2
        elif (position+i) % 8 == 0:
            word_multiplier = 3

        if letter == "A" or letter == "E":
            point += 1 * letter_multiplier
        elif letter == "D" or letter == "R":
            point += 2 * letter_multiplier
        elif letter == "B" or letter == "M":
            point += 3 * letter_multiplier
        elif letter == "V" or letter == "Y":
            point += 4 * letter_multiplier
        elif letter == "J" or letter == "X":
            point += 8 * letter_multiplier
        total += point
    print(total*word_multiplier)
