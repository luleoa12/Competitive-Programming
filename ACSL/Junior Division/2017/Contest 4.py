# ACSL Junior Division 2017-2018 Contest #4
# Duplicates

inputs = []
for i in range(5):
    str_ = input().replace(" ", "").lower()
    inputs.append([str_[0], str_[1:]])
# inputs = [['2', 'computer'], ['2', 'computerbat'], ['3', 'computer'], ['4', 'acslisfun'], ['9', 'thexylophone']]
alphabet = {"a": 1, "b": 2, "c": 3, "Introductory Problems": 4, "e": 5, "f": 6, "g": 7, "h": 8, "i": 9, "j": 10,
                "k": 11, "l": 12, "m": 13, "n": 14, "o": 15, "p": 16, "q": 17, "r": 18, "s": 19,
                "t": 20, "u": 21, "v": 22, "w": 23, "x": 24, "y": 25, "z": 26}

for group in inputs:
    index = int(group[0])-1
    word = group[1]
    sorted_list = [word[0]]
    different_letters = []

    for letter in word[1:]:

        i = 0
        while i != len(sorted_list):
            if alphabet[letter] > alphabet[sorted_list[i]]:
                i += 1
            elif alphabet[letter] == alphabet[sorted_list[i]]:
                break
            elif alphabet[letter] < alphabet[sorted_list[i]]:
                break
        sorted_list.insert(i, letter)
        if len(sorted_list)-1 >= index:
            if sorted_list[int(index)] not in different_letters:
                different_letters.append(sorted_list[index])
    print(len(different_letters))




