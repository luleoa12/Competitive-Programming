# ACSL Intermediate Division 2013-2014 Contest #3 
# ACSL Fanorona

def is_vacant(pos, white, black):
    if int(pos) not in white and int(pos) not in black:
        return True
    else:
        return False


def same_row(w, b):
    return (w-1)//5 == (b-1)//5


def same_col(w, b):
    return w%5 == b%5


def not_edge_col(pos):
    return pos % 5 != 0 and pos % 5 != 1


def not_edge_row(pos):
    return pos / 5 != 0 and pos / 5 != 4


def diagonal_right_left(pos):
    return pos in [1, 7, 13, 19, 25]


def diagonal_left_right(pos):
    return pos in [5, 9, 13, 17, 21]


inputs = []
for i in range(5):
    inputs.append(list(map(int, input().split(", "))))

for data in inputs:
    ans = []
    white = []
    black = []
    for i in range(data[0]):
        white.append(data[i+1])
    for i in range(data[data[0]+1]):
        black.append(data[data[0]+i+2])
    for w in white:
        for b in black:
            w = int(w)
            b = int(b)
            distance = w-b
            origin = b
            # Check for same row and white moves towards black
            if abs(distance) == 1 and not_edge_col(w) and is_vacant(w+distance, white, black):
                while b in black and str(b) not in ans and same_row(b, origin):
                    ans.append(str(b))
                    b -= distance
            elif same_row(w, b) and abs(distance) == 2 and is_vacant(w-(distance//2), white, black):
                while b in black and str(b) not in ans and same_row(b, origin):
                    ans.append(str(b))
                    b -= (distance//2)
            elif abs(distance) == 5 and not_edge_row(w) and is_vacant(w+distance, white, black):
                while b in black and str(b) not in ans:
                    ans.append(str(b))
                    b -= distance
            elif abs(distance) == 10 and is_vacant(w-distance//2, white, black):
                while b in black and str(b) not in ans:
                    ans.append(str(b))

                    b -= (distance//2)

            elif abs(distance) == 12 and diagonal_right_left(w) and diagonal_right_left(b) and is_vacant(w-(distance//2), white, black):
                while b in black and str(b) not in ans:
                    ans.append(str(b))
                    b -= (distance//2)
            elif abs(distance) == 6 and diagonal_right_left(w) and diagonal_right_left(b) and is_vacant(w+(distance), white,black):
                while b in black and str(b) not in ans:
                    ans.append(str(b))
                    b -= (distance)

            elif abs(distance) == 8 and diagonal_left_right(w) and diagonal_left_right(b) and is_vacant(w-(distance//2), white,black):
                while b in black and str(b) not in ans:
                    ans.append(str(b))
                    b -= (distance//2)
            elif abs(distance) == 4 and diagonal_left_right(w) and diagonal_left_right(b) and is_vacant(w+(distance), white,black):
                while b in black and str(b) not in ans:
                    ans.append(str(b))
                    b -= (distance)
    if len(ans) == 0:
        print('NONE')
    else:
        print(", ".join(ans))




