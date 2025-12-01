def containsDuplicate(nums):
    counter = 1
    seen_numbers = {}
    for number in nums:
        if number in list(seen_numbers.values()):
            return True
        seen_numbers[counter] = number
        counter += 1
    return False


print(containsDuplicate([1, 2, 5, 5, 7, 9, 0]))
