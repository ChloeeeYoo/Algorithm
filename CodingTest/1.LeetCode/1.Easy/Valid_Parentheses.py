class Solution:
    def isValid(self, s: str) -> bool:
        mem = []      # stack list
        for _, val in enumerate(s):
            if val in '({[':        # Check whether it is opening bracket
                mem.append(val)      # -> stack the parameter into the stack list
            elif val in ')}]':      # Check whether it is closing bracket
                if not mem:          # It is 'False' when list is empty
                    return False
                elif 1 <= ord(val) - ord(mem[-1]) <= 2:    # using the ascii code value / all substract opening and closing bracket is within 1~2 
                    mem.pop()                              # pop the opening bracket when it is matching 
                    continue
                else:                                      # it is not matching the opening and closing bracket
                    return False
        if not mem:                     # list is empty    # the number of opening and closing bracket match
            return True
        else:                                              # the number of opening and closing bracket does not match
            return False
