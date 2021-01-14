import numpy as np
from scipy.sparse import csr_matrix


# create a 2-D representation of the matrix
A = np.array([[1, 0, 0, 0, 0, 0], [1, 0, 2, 0, 0, 1],
              [0, 0, 0, 2, 0, 10]])
B = np.array([[1, 0, 5, 0, 9, 0], [0, 0, 2, 0, 0, 1],
              [0, 9, 0, 2, 0, 0]])
print("Matrix representation: \n", A)
print("Matrix representation: \n", B)


# convert to sparse matrix representation
S1 = csr_matrix(A)
print("Sparse matrix: \n", S1)

S2 = csr_matrix(B)
print("Sparse matrix: \n", S2)


# Addition of the Sparse Matrix
matrix_result = (S1.tocsr() + S2.tocsr()).tolil()

print("Sparse Addition is: \n", matrix_result)


# TransPose of the Sparse Matrix
M = 3  # row
N = 6  # column
T = [[0 for x in range(M)] for y in range(N)]


def transpose(A, T):
    for i in range(N):
        for j in range(M):
            T[i][j] = A[j][i]


transpose(A, T)

T1 = csr_matrix(T)
T2 = T1.todense()
print("Transpose Matrix is:\n", T2)
print("Sparse Transpose Matrix is:\n", T1)
