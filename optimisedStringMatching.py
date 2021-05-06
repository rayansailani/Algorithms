def createTable(string):
    l = len(string)
    table = dict()
    for x in range(l-1):
        table[string[x]] = l - x - 1
    table[string[l-1]] = l 
    return table

def horsePoolStringMatching(text, pattern):
    if(not len(pattern)):
        return 0
    if(not len(text)):
        return -1
    # creating a bad match table
    bmTable = createTable(pattern)
    # since we are going to start from the right of the pattern we need to assign the iterating value from the len(pattern)
    i = len(pattern) - 1
    while(i < len(text)):
        # this is the value that counts the matched values in the string
        j = 0
        while(j<len(pattern) and pattern[len(pattern) - j -1] == text[i-j]):
            # if there is a match we will go backwards checking for more elements 
            j = j + 1
        # now checking if all the values have been matched
        if(j == len(pattern)):
            print("pattern found")
            return i - j + 1
        # if the pattern is not found we must move the i by that entry in the bad match table
        try:
            jump = bmTable[text[i]]
        except:
            jump = len(pattern)
        i = i + jump
    print("pattern not found")
    return -1
        
    
    

def stringMatching(text, pattern):
    i = 0
    j = 0
    while i<len(text) and j<len(pattern):
        # companre the value of pattern[j] and text[i] if there is a match increment both
        # if there is no match then decrement the value of i and reassign the value of j = 0
        if text[i] == pattern[j]:
            # this means there is a match
            i = i + 1 
            j = j + 1
        else:
            # if there is no match then
            i = i - j + 1
            j = 0
    if(j == len(pattern)):
        return i - j 
    else:
        return -1
            

text = ""
pattern = "testng"
print(horsePoolStringMatching(text,pattern))
print(stringMatching(text, pattern))
print(text.find(pattern))
