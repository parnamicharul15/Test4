print('''
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."  . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/________/
*******************************************************************************
''')

print("Wlecome to Treasure island.")
print("Your mission is to find the treasure.")
print("You're at the croos road. Where do you want to go?")
direction_1 = input("         Type 'left' or 'right'\n")
if direction_1 == 'left':
    print("You've come yo a lake. There is an island in the middle of the lake.")
    wait_swim = input("Type 'wait' to wait for a boat. Type 'swim' to swin across.\n")
    if wait_swim == 'wait':
        print("You arrive at the island unharmed. There is a house with 3 doors.")
        colour = input("One red, one yellow and one blue. Which colour do you choose?\n")
        if colour == 'red':
            print("Burned by fire.")
            print("Game over")
        elif colour == 'blue':
            print("Eaten by beasts.")
            print("Game over.")
        elif colour == 'yellow':
            print("You win!")
        else:
            print("Game over.")
    else:
        print("Attacked by trout.")
        print("Game over.")
else:
    print("Fell into a hole.")
    print("Game over.")