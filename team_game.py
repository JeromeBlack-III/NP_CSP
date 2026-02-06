name = input("Enter a Name: ")

print( "hi " +name+ "!  Welcome to Tic Tac Toe")

yesorno=input("Are you ready to play?(yes or no): ")

if (yesorno)=="yes" :
    print("Great")
else:
    print("Dont care, you're still playing")

gamemode=input("Do you want to play to 3 or 5 points?(3 or 5):  ")

if (gamemode)== "3" or "5":
    print("Loading...")
