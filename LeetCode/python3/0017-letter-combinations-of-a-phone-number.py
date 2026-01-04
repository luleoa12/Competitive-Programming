class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        letters1 = ""
        letters2 = ""
        letters3 = ""
        letters4 = ""
        
        combos = []
        key = {"2": "abc", 
               "3": "def", 
               "4": "ghi", 
               "5": "jkl", 
               "6": "mno", 
               "7": "pqrs", 
               "8": "tuv", 
               "9": "wxyz"}
        
        if len(digits) == 2:
            for num in digits[0]:
                letters1 += key[num] 
            for num in digits[1]:
                letters2 += key[num] 
                
        if len(digits) == 3:
            for num in digits[0]:
                letters1 += key[num] 
            for num in digits[1]:
                letters2 += key[num] 
            for num in digits[2]:
                letters3 += key[num] 
            
        if len(digits) == 4:
            for num in digits[0]:
                letters1 += key[num] 
            for num in digits[1]:
                letters2 += key[num] 
            for num in digits[2]:
                letters3 += key[num] 
            for num in digits[3]:
                letters4 += key[num] 
                
        
        if len(digits) == 1:
            for num in digits:
                letters1 += key[num]
        
        if len(digits) == 3:
            for i in range(len(letters1)):
                for j in range(len(letters2)):
                    for k in range(len(letters3)):
                        combo = letters1[i] + letters2[j] + letters3[k]
                        combos.append(combo)
                        
        if len(digits) == 4:
            for i in range(len(letters1)):
                for j in range(len(letters2)):
                    for k in range(len(letters3)):
                        for l in range(len(letters4)):
                            combo = letters1[i] + letters2[j] + letters3[k] + letters4[l]
                            combos.append(combo)
        
        if len(digits) == 2:
            for i in range(len(letters1)):
                for j in range(len(letters2)):
                    combo = letters1[i] + letters2[j]
                    combos.append(combo)
                        
        if len(digits) == 1:
            for letter in letters1:
                combos.append(letter)
                    
                
        return combos
        
        
        
        
        