# Contest 2

inputs = []
for i in range(5):
    inputs.append([str(x) for x in input() if x != " "])

for i in range(len(inputs)):
    expression = inputs[i]
    expression.pop(0)
    expression.pop(0)
    expression.pop()
    atoms = []
    par = False
    lists = []
    list_ = ["("]
    for val in expression:
        if val == ")":
            par = False
            list_.append(")")
            lists.append(list_)
            list_ = ["("]
        if val == "(" or par is True:
            par = True
            if val != "(":
                list_.append(val)
        if par is False:
            atoms.append(val)

    if i == 0:
        print(lists)
        if expression[0] != "(":
            print(atoms[0])
        else:
            print("".join(lists[0]))
    elif i == 1:
        if expression[0] == "(":
            for j in range(len(lists[0])):
                expression.pop(0)
        else:
            expression.pop(0)
        expression.insert(0, "(")
        expression.insert(0, "'")
        expression.insert(len(expression), ")")
        print("".join(expression))
    elif i == 2:
        if expression[len(expression)-1] != ")":
            print(atoms[len(atoms)-1])
        else:
            print("".join(lists[len(lists)-1]))
    elif i == 3:
        if expression[0] != "(":
            expression.pop()
        else:
            for j in range(len(lists[len(lists)-1])):
                expression.pop()

        expression.insert(0, "(")
        expression.insert(0, "'")
        expression.insert(len(expression), ")")
        print("".join(expression))
    elif i == 4:
        print(len(lists))

