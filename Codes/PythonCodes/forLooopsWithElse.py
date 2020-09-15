khana = ["roti", "sabzi", "chawal"]

for item in khana:
    if item == "paratha":
        break

else:
    print("Your item was not found")

#the with for will only run when the for loop is finished properly, i.e. no break statements were encountered