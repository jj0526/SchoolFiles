s = [8,6,9,10,4,7,10,6,8,7]
count = 0
indexes = []

for i in range(0,len(s)):
    if (s[i]==10):
        count = count + 1
        indexes.append(i)

last = len(indexes)-1

print("index = ",indexes[last])
print("만점 개수 = ",count)