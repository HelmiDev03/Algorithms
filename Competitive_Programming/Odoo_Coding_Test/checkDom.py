import re

def CodingChallenge(strParam):
    valid = {'b', 'i', 'em', 'div', 'p'}
    
    def getTags(s):
        return re.findall(r'<\s*(/?)\s*(\w+)\s*>', s)  # allow spaces
    
    def is_valid(tags,stack):  #o(n) assuming n is the number of tags
        for i , (close, tag) in enumerate(tags):
            if not close:
                stack.append((tag,i))
            else:
                if not stack or stack[-1][0] != tag:
                    return False
                stack.pop()
        return len(stack) == 0
    
    tags = getTags(strParam)


    stack=[]
    if is_valid(tags,stack):
        return True
    

    #if stack si empty afetr fct call then taht mean we started the string with close tag , so can't be corrected
    if not stack :
        return False

    #the problem in the tag at top of stack  ,we will try to do 4 replacemnt on it
    errortag = stack[-1][0]
    index = stack[-1][1]
    for new_tag in valid: #this is o(n)
        if new_tag != errortag :
            tags[index] = ('' , new_tag)
            if is_valid( tags , []):
                return errortag


    return False



print(CodingChallenge("<div><p><i></p></div></i>"))