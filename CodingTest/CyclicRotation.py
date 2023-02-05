############# Version 1 ##############################
######################################################

def ShiftRight(K, N, i):        # Just directly count the final index and array at once 
    K = K % N
    new_pos = i + K
    if (new_pos >= N):
        new_pos = new_pos - N
    
    return new_pos

def solution(A, K):
   
    N = len(A)
    final_A = []

    for i in range(N):
        new_pos = ShiftRight(K,N,i). # i is index in array
        final_A.insert(new_pos, A[i])
        #print(A[i])
        #print(final_A[i])
    
    return final_A

######################################################


############# Version 2 ##############################
######################################################

def ShiftRight(A, N):    # for just one shifting to right way
    shift_A = []
    for n in range(N):
        if(n+1 == N):
            shift_A.insert(0, A[n])
        else:
            shift_A.insert(n+1, A[n])

    return shift_A

def solution(A, K):
    
    N = len(A)
    Result = A

    for k in range(K):     # Until the input K counts
        Result = ShiftRight(Result, N).copy()
    
    return Result

######################################################
