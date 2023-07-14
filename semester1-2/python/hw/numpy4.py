import numpy as np
original = np.array ([[0,1,0], [1,0,0],[0,0,1]])
a = np.array ([[0,1,0], [1,0,0],[0,0,1]])
for i in range(2,11):
    a = np.linalg.matrix_power(original,i)
    print(a)