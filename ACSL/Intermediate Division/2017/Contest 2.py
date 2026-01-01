# ACSL Intermediate Division 2017-2018 Contest #2
# ACSL Enclosure

inputs = []
for i in range(5):
    inputs.append(input())

for ops in inputs:
    found_enclosures = []

    left_bracket = -1
    left_paren = -1
    right_bracket = 999999
    right_paren = 999999
    enclosures = "()[]"

    for i in range(len(ops)):
        op = ops[i]
        if op == "[":
            found_enclosures.append("[")
            left_bracket = i
        elif op == "]":
            found_enclosures.append("]")
            right_bracket = i
        elif op == "(":
            found_enclosures.append("(")
            left_paren = i
        elif op == ")":
            found_enclosures.append(")")
            right_paren = i

    opposite_enclosure = ""
    if ")" in found_enclosures and "(" not in found_enclosures:
        missing_enclosure = "("
        opposite_enclosure = ")"
    elif "(" in found_enclosures and ")" not in found_enclosures:
        missing_enclosure = ")"
        opposite_enclosure = "("
    elif "]" in found_enclosures and "[" not in found_enclosures:
        missing_enclosure = "["
        opposite_enclosure = "]"
    elif "[" in found_enclosures and "]" not in found_enclosures:
        missing_enclosure = "]"
        opposite_enclosure = "["

    ans = []
    nums = [str(i) for i in range(1, 10)]
    operations = "-+*/"
    seen_num = False
    seen_op = False

    if opposite_enclosure == ")":
        for i in range(left_bracket, right_paren-1):
            if i >= left_bracket:
                if i == 0 and ops[i] in nums:
                    ans.append("1")
                if ops[i] in nums:
                    if i != len(ops) - 1 and (ops[i + 1] not in nums) and ops[i-1] not in nums:
                        ans.append(str(i+1))
                    elif i == len(ops)-1:
                        ans.append(str(i+1))

    elif opposite_enclosure == "]":
        for i in range(min(right_paren, right_bracket)):
            if i == 0:
                ans.append("1")
            if ops[i] in operations:
                seen_op = True
            if i < left_paren+1:
                if seen_op and ops[i] in enclosures and ops[i]:
                    ans.append(str(i+1))
                if seen_op and ops[i] in nums:
                    if i != len(ops) - 1 and ops[i + 1] not in nums:
                        ans.append(str(i+1))
                    elif i == len(ops)-1:
                        ans.append(str(i+1))

    elif opposite_enclosure == "(":
        for i in range(left_paren, len(ops)):
            if ops[i] in operations:
                seen_op = True
            if i < right_bracket:
                if seen_op and (ops[i] in nums or ops[i] in "()[]"):
                    if i != len(ops) - 1 and ops[i + 1] not in nums:
                        ans.append(str(i + 2))
                    elif i == len(ops) - 1:
                        ans.append(str(i + 2))

    elif opposite_enclosure == "[":
        for i in range(len(ops)):
            if ops[i] in operations:
                seen_op = True
            if i >= right_paren:
                if seen_op and (ops[i] in nums or ops[i] in "()[]"):
                    if i != len(ops) - 1 and ops[i + 1] not in nums:
                        ans.append(str(i + 2))
                    elif i == len(ops)-1:
                        ans.append(str(i+2))

    print(", ".join(ans))







