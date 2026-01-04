class Solution:
    def numberOfAlternatingGroups(self, colors: List[int]) -> int:
        count = 0
        for i in range(len(colors)):
            color1 = colors[i]
            color2 = colors[(i+1)%len(colors)]
            color3 = colors[(i+2)%len(colors)]
            if color1 == 0 and color2 == 1 and color3 == 0:
                count += 1
            elif color1 == 1 and color2 == 0 and color3 == 1:
                count += 1
        return count