# ACSL Junior Division 2015-2016 Contest #2
# ACSL STRINGS

string = str(input())
vals = []
for i in range(5):
    vals.append(list(map(int, input().split(", "))))

for nums in vals:
    start = 0
    end = 0
    if nums[0] > 0:
        start = nums[0]
    elif nums[0] < 0:
        start = len(string) - abs(nums[0])
    else:
        start = 0
    if nums[1] == 0:
        end = len(string)
    elif nums[1] > 0:
        end = start + nums[1]
    elif nums[1] < 0:
        end = len(string) - abs(nums[1])
    print(string[start:end])


