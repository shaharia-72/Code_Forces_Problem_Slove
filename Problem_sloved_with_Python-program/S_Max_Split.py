'''Given a balanced string S
 consists of ['R', 'L'] characters. Split it into maximum number of strings such that the new strings are also balanced.

Note:

Balanced strings are those who have equal quantities of 'L' and 'R' characters.
You can not remove or reorder the characters while making the new strings.
Input
Only one line contains a string S
 (2≤|S|≤1000)
 where |S| is the length of the string.

It's guaranteed that S
 consists of only ['L', 'R'] letters, S
 is balanced and |S|
 is even.

Output
Print maximum number of balanced strings then the balanced strings in any order.

Examples
inputCopy
LLRRLLLRRR
outputCopy
2
LLRR
LLLRRR
inputCopy
LLLRRR
outputCopy
1
LLLRRR'''


def split_string(s):
    count = 0
    result = []
    current_s = ""
    for char in s:
        if char == "L":
            count += 1
        else:
            count -= 1
        current_s += char

        if count == 0:
            result.append(current_s)
            current_s = ""
    return result


s = input().strip()
result = split_string(s)
print(len(result))
for x in result:
    print(x)
