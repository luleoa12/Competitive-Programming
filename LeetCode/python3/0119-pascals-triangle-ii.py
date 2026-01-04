class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        pascals_triangle = [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1]]
        row_num = 3
        if rowIndex <= 3:
            return pascals_triangle[rowIndex]
        while row_num != rowIndex:
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
        return pascals_triangle[rowIndex]