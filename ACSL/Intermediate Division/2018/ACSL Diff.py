# Contest 2

def common_string(word1, word2):
    ans = ""
    for letter in word1:
        if letter in word2:
            word2 = word2[word2.index(letter)+1:]
            ans += letter

    return ans

inputs = []
for i in range(5):
    inputs.append(input().split())

for i in range(len(inputs)):
    word1 = inputs[i][0]
    word2 = inputs[i][1]

    cur1 = common_string(word1, word2)
    cur2 = common_string(word2, word1)
    cur3 = common_string(word1[::-1], word2[::-1])
    cur4 = common_string(word2[::-1], word1[::-1])

    ans = "".join(sorted(set(cur1).intersection(cur2).intersection(cur3).intersection(cur4)))
    if ans:
        print(ans)
    else:
        print("NONE")


