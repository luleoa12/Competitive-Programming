def find_greatest(sorted_num, len, l, n):
  if n == len:
    if sum(l) % 5 == 0:
      return l
    return False
  for num in sorted_num:
    if num not in l:
      find = find_greatest(sorted_num, len, l + [num], n + 1)
      if find:
        return find

def numble(numlist, len):
  sorted_num = sorted(numlist, reverse=True)
  g = find_greatest(sorted_num, len, [], 0)
  if not g:
    return "NONE"
  return "".join(str(i) for i in g)

inp = input().split(", ")
numlist = list(map(int, list(inp[0])))
len = int(inp[1])
print(numble(numlist, len))