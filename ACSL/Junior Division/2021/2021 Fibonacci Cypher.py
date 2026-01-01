


def fib(num):
    if num == 0:
        return 1
    if num == 1:
        return 2
    return fib(num - 1) + fib(num - 2)

inputs = []
for i in range(5):
    inputs.append([x for x in str(input())])

# inputs = [['h', ' ', 'A', 'C', 'S', 'L', ' ', 'c', '2'],
#           ['s', ' ', 'P', 'y', 't', 'h', 'o', 'n', ' ', 'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g'],
#           ['a', ' ', 'F', 'i',  'b', 'o', 'n', 'a', 'c', 'c', 'i', ' ', 'N', 'u', 'm', 'b', 'e', 'r', 's'],
#           ['j', ' ', 'H', 'e', 'l', 'p', ' ', 'M', 'E', '!'],
#           ['z', ' ', 'I', 't', ' ', 'i', 's', ' ', '9', ':', '3', '0', ' ', 'i', 'n', ' ', 't', 'h', 'e', ' ',
#           'm', 'o', 'r', 'n', 'i', 'n', 'g', '.']]


for message in inputs:
    alphabet = {"a": 1, "b": 2, "c": 3, "Introductory Problems": 4, "e": 5, "f": 6, "g": 7, "h": 8, "i": 9, "j": 10, "k": 11, "l": 12,
                "m": 13, "n": 14, "o": 15, "p": 16, "q": 17, "r": 18, "s": 19, "t": 20, "u": 21, "v": 22, "w": 23,
                "x": 24, "y": 25, "z": 26}
    key = message[0]
    message.remove(key)
    message.remove(" ")
    ans = ""
    for i in range(0, len(message)):
        num = [j for j in alphabet if alphabet[j] == (alphabet[key] + (fib(i)) % 26) % 26 or
               alphabet[j] == (alphabet[key] + (fib(i)) % 26)]
        offset_code = ord(str(num[0]))
        string_code = ord(str(message[i]))
        ans += str(offset_code + string_code)
        ans += " "
    print(ans)
