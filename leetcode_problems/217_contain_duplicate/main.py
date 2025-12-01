def containsDuplicate(nums):
    seen_numbers = {}
    for number in nums:
        if number in seen_numbers:
            return True
        seen_numbers[number] = True
    return False


print(containsDuplicate([1, 2, 54, 5, 7, 9, 0]))
