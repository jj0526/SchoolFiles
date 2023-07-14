import numpy as np
a = np.array ([[2,-1,1], [1,3,-1],[1,0,2]])
inv_a = np.linalg.inv(a)
b = np.array([[-2],[10],[-8]])
c = np.dot(inv_a,b)
print(c)