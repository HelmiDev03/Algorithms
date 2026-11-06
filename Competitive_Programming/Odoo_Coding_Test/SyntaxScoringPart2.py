

eqv = {
    '(' : ')' ,
    '[' :']' ,
    '{' : '}' ,
    '<' :'>'
}


def missed(line:str):
    stack=[]
    for tag in line:
        if tag  in ['(' , '[' ,'{' ,'<'] :
            stack.append(tag)
        else:
                if eqv[stack[-1]] == tag:
                    stack.pop()
                else:
                    return []    
    return stack[::-1]




def syntaxeScore(puzzle:str):
    Points = {
            '(' : 1,
            '[' : 2,
            '{' : 3,
            '<' : 4,

                 }
    scoreLines=[]
    lines = puzzle.split('\n')
    missing = []
    for line in lines:
       missing.append(missed(line))   
    missing=[i for i in missing if  i]   
    for line in missing:
        s=0
        for tag in line :
            s=s*5
            s+=Points[tag]
        scoreLines.append(s)  
    scoreLines = sorted(scoreLines)
    return scoreLines[len(scoreLines) // 2]
        

with open("input.txt", "r") as f:
    s = f.read()
print(syntaxeScore(s))