string = str(input("String: "))
words = sorted(string.replace(",", " ").replace(" ", " ").replace(".", " ").split(), reverse=True)
vowels = ["a", "e", "i", "o", "u"]
alphabet = ["a", "b", "c", "Introductory Problems", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u",
            "v", "w", "x", "y", "z"]
letter_count = {"a": 0, "b": 0, "c": 0, "Introductory Problems": 0, "e": 0, "f": 0, "g": 0, "h": 0, "i": 0, "j": 0, "k": 0, "l": 0, "m": 0,
                "n": 0, "o": 0, "p": 0, "q": 0, "r": 0, "s": 0, "t": 0, "u": 0, "v": 0, "w": 0, "x": 0, "y": 0, "z": 0}
num_vowels = 0
num_upper = 0
longest_word = ""

for i in range(len(string)):
    if string[i] != "," and string[i] != " " and string[i] != ".":
        if string[i] in vowels:
            num_vowels += 1
        if string[i] in alphabet:
            alphabet.remove(string[i])
        if string[i].upper() == string[i]:
            num_upper += 1
        letter_count[string[i].lower()] += 1
num = 0
for word in words:
    if len(word) > num:
        num = len(word)
        longest_word = word

print(26 - len(alphabet))
print(num_vowels)
print(num_upper)
print(max(letter_count.values()))
print(longest_word)



