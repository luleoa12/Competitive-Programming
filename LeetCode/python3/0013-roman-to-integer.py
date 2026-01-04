class Solution:
    def romanToInt(self, s: str) -> int:
        value = 0
        
        roman_to_integer = {"I": 1, 
                            "V": 5, 
                            "X": 10, 
                            "L": 50, 
                            "C": 100,  
                            "D": 500, 
                            "M": 1000}
        i = 0
        while i < len(s):
            num = roman_to_integer[s[i]]
            if i + 1 < len(s):
                if roman_to_integer[s[i]] < roman_to_integer[s[i+1]]:  
                    num = roman_to_integer[s[i+1]] - roman_to_integer[s[i]]
                    i += 1      # skip
            value += num
            i += 1              # keep going 
        return value
        
        
        
        
        
        
        
#         for i in range(len(s)):
#             if s[i] == "I":
#                 value += 1
#                 if i != len(s) - 1:
#                     if s[i+1] == "V":
#                         value -= 1
#                     elif s[i+1] == "X":
#                         value -= 1
                        
        
#             elif s[i] == "V":  
#                 if i != 0:
#                     if s[i-1] != "I":
#                         value += 5
#                     else:
#                         value += 4
#                 else:
#                     value += 5
                
#             elif s[i] == "X":
#                 if i != 0:
#                     if s[i-1] == "I":
#                         value += 9
#                     else:
#                         value += 10
#                 else:
#                     value += 10
#                 if i != len(s) - 1:
#                     if s[i+1] == "L":
#                         value -= 10

#                     elif s[i+1] == "C":
#                         value -= 10
                
#             elif s[i] == "L":
#                 if i != 0:
#                     if s[i-1] != "X":
#                         value += 50
#                     else:
#                         value += 40
#                 else:
#                     value += 50
                
#             elif s[i] == "C":  
#                 if i != 0:
#                     if s[i-1] == "X":
#                         value += 90
#                     else:
#                         value += 100
#                 else:
#                     value += 100
#                 if i != len(s) - 1:
#                     if s[i+1] == "D" :
#                         value -= 100

#                     elif s[i+1] == "M":
#                         value -= 100

                        
                
#             elif s[i] == "D":
#                 if i != 0:
#                     if s[i-1] != "C":  
#                         value += 500
#                     else:
#                         value += 400
#                 else:
#                     value += 500
                    
#             elif s[i] == "M":
#                 if i != 0:
#                     if s[i-1] == "C":
#                         value += 900
#                     else:
#                         value += 1000
#                 else:
#                     value += 1000
                    
#         return value
                