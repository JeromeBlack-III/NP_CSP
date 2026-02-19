"""NP, 3, Update Financial Calculator - Python"""

def percent(type, amount):
    return round(amount/type * 100, 2)

def whatis(amount):
    return float(input(f"What is the Monthly {amount}?: $"))




Monthly_Income = whatis ("Income")

Rent = whatis ("rent")

Utilities = whatis ("Utilities")

Groceries = whatis ("Groceries")

Transportation = whatis ("Transportation")

Rent_total = percent(Monthly_Income,Rent)

print("Your rent is ",Rent, "$ and that is", Rent_total, "% of your income")

Utilities_total = percent(Monthly_Income,Utilities)

print("Your utilities are ",Utilities, "$ and that is", Utilities_total, "% of your income")

Groceries_total = percent(Monthly_Income,Groceries)

print("Your groceries are ",Utilities, "$ and that is", Utilities_total, "% of your income")

Transportation_total = percent(Monthly_Income,Transportation)

print("Your transportation is ",Transportation, "$ and that is", Transportation_total, "% of your income")


Savings =round(Monthly_Income*.10,2)


print("You should save ",Savings, "$ and that is 10% of your income")

Total_spending = Monthly_Income-(Rent+Utilities+Groceries+Transportation)

print(Total_spending, "$ is how much you have left to spend") 