import numpy as np
A = np.mat("1 -1;1 0")
c = np.mat("-1; 4")
print(np.linalg.solve(A,c))

print("-----------")
A = A.T
c = np.mat("-1; 0")
print(np.linalg.solve(A,c))

print("-----------")

A = np.mat("1 -1;1 1;-1 0;0 -1")
b = np.mat("2;6;0;0")
x = np.mat("4;2")
print(A@x-b)