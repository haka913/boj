s = input()
joi =0
ioi =0
for i in range(len(s)-2):
    if s[i] =='J':
        if s[i+1]=='O' and s[i+2]=='I':
            joi+=1
    if s[i]=='I':
        if s[i + 1] == 'O' and s[i + 2] == 'I':
            ioi +=1

print(joi, ioi, sep='\n')



# S=input().replace('I','II').count;print(S('JOI'),S('IOI'))