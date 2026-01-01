# Remember pascal's triangle starts with row 0.


def sum_diagonal(pascals_triangle, goal_sum):
    row = 0
    sum_ = 0
    list_ = []
    while sum_ != goal_sum:
        x = 1
        list_ = [str(pascals_triangle[row][0])]
        sum_ = pascals_triangle[row][0]
        while True:
            if row == 0:
                break
            if row == 1:
                break
            sum_ += pascals_triangle[row - x][x]
            list_.append(str(pascals_triangle[row-x][x]))
            if pascals_triangle[row - x][x] == 1:
                break
            if pascals_triangle[row - x][x] == (row+1)/2:
                break
            x += 1
        row += 1

    return list_


def pascal_row(num):
    row_num = 3
    while row_num != num:
        new_row = [1]
        val = 0
        while True:
            if len(pascals_triangle[-1]) == len(new_row):
                new_row.append(1)
                break
            else:
                new_row.append(pascals_triangle[row_num][val]+pascals_triangle[row_num][val+1])
            val += 1
        pascals_triangle.append(new_row)
        row_num += 1
    return pascals_triangle

inputs = []
for i in range(5):
    inputs.append(int(input()))


# inputs = [8, 89, 610, 10946, 317811]

for num in inputs:
    pascals_triangle = [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1]]
    pascal_row(120)
    print(" ".join(sum_diagonal(pascals_triangle, num)))


