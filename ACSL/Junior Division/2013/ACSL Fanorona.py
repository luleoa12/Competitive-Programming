def check(black_piece, white_piece, rows):
    if (black_piece in rows[0] and white_piece in rows[0]) or (black_piece in rows[1] and white_piece in rows[1]) \
            or (black_piece in rows[2] and white_piece in rows[2]) or \
            (black_piece in rows[3] and white_piece in rows[3]) \
            or (black_piece in rows[4] and white_piece in rows[4]):
        return True
    else:
        return False


inputs = []
for i in range(5):
    inputs.append(input().split(", "))

for exp in inputs:
    white = []
    black = []
    rows = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]
    for i in range(1, int(exp[0])+1):
        white.append(int(exp[i]))
    for i in range(int(exp[0])+2, len(exp)):
        black.append(int(exp[i]))
    captured = []
    for i in range(len(white)):
        if white[i] - 2 in black and white[i] - 1 not in white and white[i] - 1 not in black:
            black_piece = white[i] - 2
            for j in range(3):
                if black_piece - j in black:
                    if check(black_piece - j, white[i], rows) is True:
                        captured.append(str(black_piece - j))
                        black.remove(black_piece - j)
                else:
                    break
            white.append(white[i] - 1)
        if white[i] + 2 in black and white[i] + 1 not in white and white[i] + 1 not in black:
            black_piece = white[i] + 2
            for j in range(3):
                if black_piece + j in black:
                    if check(black_piece + j, white[i], rows) is True:
                        captured.append(str(black_piece + j))
                        black.remove(black_piece + j)
                else:
                    break
            white.append(white[i] + 1)
        if white[i] + 10 in black and white[i] + 5 not in white and white[i] + 5 not in black and white[i] < 26:
            black_piece = white[i] + 10
            for j in range(3):
                if black_piece + 5 * j in black:
                    captured.append(str(black_piece + 5 * j))
                    black.remove(black_piece + 5 * j)
                else:
                    break
            white.append(white[i] + 5)
        if white[i] + 1 in black and white[i] - 1 not in white and white[i] - 1 not in black:
            black_piece = white[i] + 1
            for j in range(3):
                if black_piece + j in black:
                    if check(black_piece + j, white[i], rows) is True:
                        captured.append(str(black_piece + j))
                        black.remove(black_piece + j)
                else:
                    break
            white.append(white[i] - 1)
        if white[i] + 5 in black and white[i] - 5 not in white and white[i] - 5 not in black and white[i] < 26:
            black_piece = white[i] + 5
            for j in range(3):
                if black_piece + 5 * j in black:
                    captured.append(str(black_piece + 5 * j))
                    black.remove(black_piece + 5 * j)
                else:
                    break
            white.append(white[i] - 5)
        if white[i] - 10 in black and white[i] - 5 not in white and white[i] - 5 not in black and white[i] < 26:
            black_piece = white[i] - 10
            for j in range(3):
                if black_piece - 5 * j in black:
                    captured.append(str(black_piece - 5 * j))
                    black.remove(black_piece - 5 * j)
                else:
                    break
            white.append(white[i] - 5)
        if white[i] - 1 in black and white[i] + 1 not in white and white[i] + 1 not in black:
            black_piece = white[i] - 1
            for j in range(3):
                if black_piece - j in black:
                    if check(black_piece - j, white[i], rows) is True:
                        captured.append(str(black_piece - j))
                        black.remove(black_piece - j)
                else:
                    break
            white.append(white[i] + 1)
        if white[i] - 5 in black and white[i] + 5 not in white and white[i] + 5 not in black and white[i] < 26:
            black_piece = white[i] - 5
            for j in range(3):
                if black_piece - 5 * j in black:
                    captured.append(str(black_piece - 5 * j))
                    black.remove(black_piece - 5 * j)
                else:
                    break
            white.append(white[i] + 5)

    if len(captured) == 0:
        print("NONE")
    else:
        print(", ".join(captured))




