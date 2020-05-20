s = input()
print(ord('A'), ord('Z'))
result =''
for i in s:
    result+=chr(ord('A')+((ord(i)-ord('A')+23)%26))
print(result)