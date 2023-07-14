import numpy as np
a = np.array ([[1,2], [3,4]])
b = np.linalg.inv(a)
c = np.dot(a,b)
d = np.dot(b,a)
print(c)
print(d)