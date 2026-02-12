import random
name = input("Enter a Name: ")

print( "Hi " +name+ "!  Welcome to Tic Tac Toe")

yesorno=input("Are you ready to play?(yes or no): ")

if (yesorno)=="yes" :
    print("Great")
else:
    print("Dont care, you're still playing")

def show_board(board_spot):
    board1= f" {board_spot[0]} | {board_spot[1]} | {board_spot[2]} \n"
    board2= f" {board_spot[3]} | {board_spot[4]} | {board_spot[5]} \n"
    board3= f" {board_spot[6]} | {board_spot[7]} | {board_spot[8]} \n"
    complete_board= board1+board2+board3
    return complete_board

board_spot=[0,1,2,3,4,5,6,7,8]  

def win (board_spot):
    if board_spot[0]==board_spot[1]==board_spot[2]:
        print("You Win!")
        return True
    elif board_spot[3]==board_spot[4]==board_spot[5]:
        print("You Win!")
        return True
    elif board_spot[6]==board_spot[7]==board_spot[8]:
        print("You Win!")
        return True
   
    elif board_spot[0]==board_spot[4]==board_spot[8]:
        print("You Win!")
        return True
    elif board_spot[6]==board_spot[4]==board_spot[2]:
        print("You Win!")
        return True
    elif board_spot[6]==board_spot[7]==board_spot[8]:
        print("You Win!")
        return True
   
    elif board_spot[0]==board_spot[3]==board_spot[6]:
        print("You Win!")
        return True
    elif board_spot[1]==board_spot[4]==board_spot[7]:
        print("You Win!")
        return True
    elif board_spot[2]==board_spot[5]==board_spot[8]:
        print("You Win!")
        return True





while True:
    
    complete_board= show_board(board_spot)
    print(complete_board)
    box_select= int(input("Select a box (0-8): "))
    board_spot[box_select] = "X"

    complete_board= show_board(board_spot)
    
    
    #print(random.choice(board_spot))

    if win(board_spot):
        break
   
   
    #break
  
  
  
  
  
   
    
    
    
    

    
  







