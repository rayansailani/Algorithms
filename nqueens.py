def isSafe(board, row, col):
    #vertically up
    r = row - 1
    c = col
    while (r>=0):
        if (board[r][c] == 1):
            return False
        r = r - 1
    
    #horizontally left 
    r = row 
    c = col - 1
    while(c>=0):
        if (board[r][c] == 1):
            return False
        c = c - 1
        
    #diagonally left up
    r = row - 1 
    c = col - 1
    while(r>=0 and c>=0):
        if (board[r][c] == 1):
            return False
        r = r - 1
        c = c - 1
    
    #diagonally right up
    r = row -1
    c = col + 1
    while(r>=0 and c<len(board[0])):
        if (board[r][c] == 1):
            return False
        c = c + 1
        r = r - 1  
    
    return True



def nqueen(board, row, col , queens, total , answer):
    # print(board)
    if queens == total:
        print(answer)
        for x in range(0, len(board)):
            print(board[x])
            
        return 

    #if the current element reaches the column boundary increment the row
    if (col == len(board[0])):
        row = row + 1
        col = 0
        
   # if the current element reaches the end of the board then we cannot proceed further
    if (row == len(board)):
        return 
    
    if isSafe(board, row, col):
        # do 
        board[row][col] = 1
        #recur
        nqueen(board, row, col+1, queens, total + 1, answer + " [ " + str(row) + "," + str(col) + " ]")
        #backtrack(undo)
        board[row][col] = 0
    
    #dont place the queen in that position
    nqueen(board, row, col+1, queens, total, answer)
        

board = [[0,0,0,0], [0,0,0,0], [0,0,0,0] ,[0,0,0,0]]
nqueen(board, 0,0,4,0,"")
