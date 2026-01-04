class Solution:
    def finalPositionOfSnake(self, n: int, commands: List[str]) -> int:
        grid = []
        for i in range(n):
            cur = []
            for j in range(n):
                cur.append((i*n)+j)
            grid.append(cur)
        # Updown, leftright
        pos = [0, 0]
        for c in commands:
            if c == "RIGHT":
                pos[1] += 1
            elif c == "LEFT":
                pos[1] -= 1
            elif c == "DOWN":
                pos[0] += 1
            elif c == "UP":
                pos[0] -= 1
        return grid[pos[0]][pos[1]]