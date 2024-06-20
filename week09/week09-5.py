# LeetCode 200. Number of Islands
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        M, N = len(grid), len(grid[0]) # 先知道左手M 右手N有多大, 才能用迴圈

        def travel(i, j): # 會往上下左右(四個方向)旅行, 同時蓋章, 能到的地方都走過
            if i<0 or j<0 or i>=M or j>=N: return # 超過格子範圍, 離開
            if grid[i][j]=='0': return # 不能走的格子, 離開
            # 現在還沒離開, 代表這格可以走, 太好了!
            grid[i][j] = '0' # 標示現在走了, 以後不要再進來了哦!
            travel(i+1, j) # 再往四個方向旅行
            travel(i-1, j)
            travel(i, j+1)
            travel(i, j-1) 
        ans = 0
        for i in range(M):
            for j in range(N):
                if grid[i][j]=='1': # 找到一個可以落腳的陸地
                    ans += 1 # 找到1個答案了
                    travel(i,j) # 開始旅行
        return ans