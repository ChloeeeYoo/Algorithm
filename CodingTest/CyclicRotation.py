def ShiftRight(K, N, i):
    K = K % N
    new_pos = i + K
    if (new_pos >= N):
        new_pos = new_pos - N
    
    return new_pos

def solution(A, K):
    # Implement your solution here
    N = len(A)
    final_A = []

    for i in range(N):
        new_pos = ShiftRight(K,N,i)
        final_A.insert(new_pos, A[i])
        #print(A[i])
        #print(final_A[i])
    
    return final_A
