number = int(input("input an integer"))
fac = 1
for i in range(1,number+1):
    fac = fac * i
print("{}! is {}".format(number, fac))