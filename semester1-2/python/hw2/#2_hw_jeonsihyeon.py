x =  int(input('4자리 정수를 입력하세요:'))   #lets say x = 1357
sum = 0
a = x % 10
x //= 10
b = x % 10
x //=10
c = x % 10
x //= 10
d = x % 10
sum = sum + a + b + c + d
print(sum)