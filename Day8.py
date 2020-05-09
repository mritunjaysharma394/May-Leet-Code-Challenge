class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        n = len(coordinates) 
    
        if n == 2:
            return True
    
    
        if coordinates[0][0] == coordinates[1][0]:
            x = coordinates[0][0]
        
            for i in range(2,n):
                if coordinates[i][0] != x:
                    return False
        
            return True
    
        if coordinates[0][1] == coordinates[1][1]:
            y = coordinates[0][1]
        
            for i in range(2,n):
                if coordinates[i][1] != y:
                    return False
        
            return True
    
        slope = (coordinates[1][1] - coordinates[0][1])/ (coordinates[1][0] - coordinates[0][0])
    
        intercept = coordinates[0][1] - slope*coordinates[0][0]
    
        for i in range(2,n):
            if coordinates[i][1] != slope*coordinates[i][0] + intercept:
                return False
        
        return True
        