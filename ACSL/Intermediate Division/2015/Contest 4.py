# ACSL Junior Division 2015-2016 Contest #4
# ACSL Reg Exp

char_str = input().split(", ")[1:]
inputs = []
for i in range(5):
    inputs.append(input())

for inp in inputs:
    ans = []
    if "." in inp:
        index = inp.index(".")
        for s in char_str:
            if inp[:index] == s[:index] and inp[index+1:] == s[index+1:]:
                ans.append(s)
    elif "[" in inp:
        check = False
        if "^" in inp:
            check = True
        start = False
        chars = ""
        index_start = 0
        index_end = 0
        for i in range(len(inp)):
            s = inp[i]
            if s == "]":
                start = False
                index_end = i
            if start and s != "^":
                chars += s
            if s == "[":
                index_start = i
                start = True

        for s in char_str:
            if check:
                if inp[:index_start] == s[:index_start] and inp[index_end+1:] == s[index_start+1:] and s[index_start] not in chars:
                    ans.append(s)
            else:
                if inp[:index_start] == s[:index_start] and inp[index_end+1:] == s[index_start+1:] and s[index_start] in chars:
                    ans.append(s)
    elif "*" in inp:
        index = inp.index("*")
        length = len(inp) - index-1
        for s in char_str:
            if inp[:index-1] == s[:index-1] and inp[index+1:] == s[len(s)-length:]:
                check = True
                for i in range(index-1, len(s)-length):

                    if s[i] != inp[index-1]:
                        check = False
                        break
                if check:
                    ans.append(s)
    elif "{" in inp:
        start_index = inp.index("{")
        end_index = inp.index("}")
        cur = inp.split(",")
        num1 = int(cur[0][-1])
        num2 = int(cur[1][0])
        length = len(inp) - end_index - 1

        for s in char_str:
            if inp[:start_index-1] == s[:start_index-1] and inp[end_index+1:] == s[len(s) - length:]:
                check = True
                count = 0
                for i in range(start_index-1, len(s) - length):
                    if s[i] != inp[start_index-1]:
                        check = False
                        break
                    count += 1
                if check and num1 <= count <= num2:
                    ans.append(s)
    if len(ans) > 0:
        print(", ".join(ans))
    else:
        print("NONE")