# ACSL Intermediate Division 2017-2018 Contest #4
# Duplicates

def sort_dict(dictionary):
    return dict(sorted(dictionary.items()))

def split_command(commands):
    command = ""
    vals = ""
    seen_space = False
    for i in range(len(commands)):
        if not seen_space and commands[i] == " ":
            seen_space = True
        else:
            if seen_space:
                vals += commands[i]
            else:
                command += commands[i]

    return command, vals


def format_string(string, counts_history):
    counts = {}
    for i in range(len(string)):
        if string[i] != " ":
            if string[i] not in counts:
                counts[string[i]] = 1
            else:
                counts[string[i]] += 1
            counts_history.append(sort_dict(counts).copy())
    return counts, counts_history


def add(string, counts, count_history):
    for letter in string:
        if letter in counts:
            counts[letter] += 1
        elif letter != " ":
            counts[letter] = 1
        counts_history.append(sort_dict(counts).copy())
    return counts, count_history


def delete(string, counts, count_history):
    for letter in string:
        if letter in counts and letter != " ":
            counts[letter] -= 1
            if counts[letter] == 0:
                del counts[letter]
            counts_history.append(sort_dict(counts).copy())
    return counts, count_history


def report(index, count_history):
    ans = ""
    for i in range(len(count_history)):
        count = count_history[i]
        cur = get_key(count, index)
        if cur is not None and (ans == "" or cur != ans[-1]):
            ans += cur
    return ans


def get_key(dictionary, index):
    for i, key in enumerate(dictionary.keys()):
        if i == index:
            return str(key)

count = 0
ans = []
counts = {}
counts_history = []
while count != 5:
    commands = input()
    command, string = split_command(commands)
    if command != "REPORT":
        string = string.upper()

    if command == "REPORT":
        print(report(int(string)-1, counts_history))

    elif command == "ADD":
        counts, counts_history = add(string, counts, counts_history)
    elif command == "DELETE":
        counts, counts_history = delete(string, counts, counts_history)
    elif command == "RESET":
        counts_history = []
        counts, counts_history = format_string(string, counts_history)




