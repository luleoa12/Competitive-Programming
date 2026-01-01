# ACSL Intermediate Division 2013-2014 Contest #4 
# ACSL Numble


def largest_num(sorted_num, length, cur_nums, cur_length, check):
    if cur_length == length:
        if sum(cur_nums) % 5 == 0:
            return cur_nums
        return False

    for num in sorted_num:
        if num in check:
            check.remove(num)
            ans = largest_num(sorted_num, length, cur_nums + [num], cur_length + 1, check)
            check.append(num)
            if ans:
                return sorted(ans, reverse=True)


input_nums = list(map(int, input().split(", ")))
data = []
for i in range(5):
    data.append(input())
for d in data:
    length1, length2, cross_digit = map(int, d.split(", "))
    nums = sorted([int(x) for x in str(input_nums[0])], reverse=True)
    num1 = (largest_num(nums, length1, [], 0, nums))
    nums = sorted([int(x) for x in str(input_nums[1])], reverse=True)
    num2 = (largest_num(nums, length2, [], 0, nums))

    crossed_index1 = 0
    crossed_index2 = 0
    for i in range(len(num1)):
        if num1[i] == cross_digit:
            crossed_index1 = i
    for i in range(len(num2)):
        if num2[i] == cross_digit:
            crossed_index2 = i
    check = False
    for num in num2:
        if not check and num == cross_digit:
            check = True
            for i in range(len(num1)):
                if i != len(num1)-1:
                    print(num1[i], end=" ")
                else:
                    print(num1[i])

        else:
            for x in range(crossed_index1*2):
                print(end=" ")
            print(str(num))
    # For clarity
    print("\n")
