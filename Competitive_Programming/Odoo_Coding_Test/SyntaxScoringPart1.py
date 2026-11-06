
eqv = {
    '(' : ')' ,
    '[' :']' ,
    '{' : '}' ,
    '<' :'>'
}


def checkError(line:str):
    stack =[]
    for tag in line:
        if tag  in ['(' , '[' ,'{' ,'<'] :
            stack.append(tag)
        else:
            if eqv[stack[-1]] == tag:
                stack.pop()
            else:
                return tag    
    return 'no'  





def syntaxeScore(puzzle:str):
    errorPoint = {
            ')' : 3 ,
            ']' : 57 ,
            '}' : 1197,
            '>' : 25137,
            'no' : 0
                 }
    score=0
    lines = puzzle.split('\n')
    for line in lines:
        score+= errorPoint[checkError(line)]
    
    return score

with open("input.txt", "r") as f:
    s = f.read()
print(syntaxeScore(s))