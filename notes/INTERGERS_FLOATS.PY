price = float(input("What is the cost of the item: $"))
              
tax_rate= float(input("What is the tax precent in your state: %"))

tax_rate_decimal = tax_rate/100



total = round(price*(1 + tax_rate_decimal), 2)

rounded_total = round(total, 2)
print(rounded_total)

"""apples = int(27) 

friends = 4

print( "Each of my friends can have", int(apples)//friends, "and i will have ", int(apples)%friends, "left over. ")"""

