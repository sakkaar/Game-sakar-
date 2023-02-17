# guess the number from 1 to 1oo
import random 
randnumber = random .randint(1, 100)

userguess = None
guesses = 0

while (userguess != randnumber):
    usersguess = int(input("Enter your guess: "))
    guesses += 1
    
    if (userguess==randnumber):
     print ("You guessed it right ")
else:
    if(userguess>randnumber):
     print ("You guessed it wrong!  Enter a smaller number ")
    else:
        print ("You guessed it wrong!  Enter a larger number ")

print (f"You guessed the number in {guesses} guesses")

   