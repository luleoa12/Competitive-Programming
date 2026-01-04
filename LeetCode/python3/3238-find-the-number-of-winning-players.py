class Solution:
    def winningPlayerCount(self, n: int, pick: List[List[int]]) -> int:
        data = {}
        for cur in pick:
            if cur[0] not in data:
                data[cur[0]] = {cur[1]: 1}
            else:
                if cur[1] in data[cur[0]]:
                    data[cur[0]][cur[1]] +=1
                else:
                    data[cur[0]][cur[1]]= 1
        count = 0
        print(data)
        
        for player in data:
            check = False
            for color in data[player]:
                if data[player][color] > player:
                    check = True
                    break
            if check:
                count += 1
        return count
        
            