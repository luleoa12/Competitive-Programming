# ACSL Junior Division 2016-2017 Contest #4
# ACSL Skyscraper

inputs = []
for i in range(5):
    inputs.append(list(map(int, input().split(", "))))

def permute(list_):
    if len(list_) == 0:
        return []
    if len(list_) == 1:
        return [list_]
    l = []
    for i in range(len(list_)):
        remaining_list = list_[:i] + list_[i + 1:]
        for p in permute(remaining_list):
            l.append([list_[i]] + p)
    return l


for group in inputs:
    left_clue = group[0]
    right_clue = group[1]
    ans = 0
    for permutation in permute([1, 2, 3, 4, 5]):
        left_count = 0
        right_count = 0
        max_val = 0
        for num in permutation:
            if num > max_val:
                max_val = num
                left_count += 1
        max_val = 0
        permutation = permutation[::-1]
        for i in range(len(permutation)):
            if permutation[i] > max_val:
                max_val = permutation[i]
                right_count += 1
        if left_count == left_clue and right_clue == right_count:
            ans += 1
    print(ans)



