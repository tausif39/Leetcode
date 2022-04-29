class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        import collections
        lg = len(graph)
        
        queue = collections.deque()
        bucket2member = collections.defaultdict(set)
        visited = [-1] * lg
        
        
        for i in range(lg):
            
            if visited[i] == -1: #1st visit
                visited[i] = 0
                bucket2member[0].add(i)
                queue.append(i)
            
            while queue:
                cur_node = queue.popleft()
                adj = graph[cur_node]
                cur_bucket = visited[cur_node]
                opposite_bucket = 1 if cur_bucket == 0 else 0
                
                
                for nxt in adj:
                    if ((nxt in bucket2member[0] and cur_node in bucket2member[0])
                        or (nxt in bucket2member[1] and cur_node in bucket2member[1])):
                        #in the same bucket
                        return False
                    if visited[nxt] != -1:
                        continue
                    
                    bucket2member[opposite_bucket].add(nxt)
                    visited[nxt] = opposite_bucket
                    queue.append(nxt)
        return True