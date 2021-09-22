#mattes
import numpy as np

p = [ 1, 9, 3, 33, 1, 2, 11, 4, 10, 5, 1]

M = np.zeros((len(p),len(p))) #  dp variables
b = np.zeros((len(p),len(p))) # for backtrackign 


def m(i,j):
    if i == j:
        M[i,j] = 0
        return 0
    m_ij = float("inf")
    k_star = 0
    for k in range(i, j):
        if M[i,k] == 0:
            M[i,k] = m(i,k)
        if M[k+1,j] == 0:
            M[k+1,j] = m(k+1,j)
        m_ikj = M[i,k] + M[k+1,j] + p[i-1]*p[k]*p[j]
        if m_ikj < m_ij:
            m_ij = m_ikj
            k_star = k
    M[i,j] = m_ij
    b[i,j] = k_star
    return m_ij

m(1,len(p)-1)
print(M[1,len(p)-1])

def backtracking(b,i,j):
    i = int(i)
    j = int(j)
    if i == j:
        return str(i)
    s = "("
    s+=backtracking(b,i,b[i,j]) + ")("
    s+=backtracking(b,b[i,j] + 1,j) + ")"
    return s
    
print(backtracking(b,1,len(p)-1))
