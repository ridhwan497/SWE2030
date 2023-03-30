
import random

daysUntilExpiration = random.randint(1, 12)
discountPercentage = 0

# Add your code here
if daysUntilExpiration <= 10:
	print("Your subscription will expire soon. Renew now!")
elif daysUntilExpiration <= 5:
		print("Your subscription expires in", daysUntilExpiration, "days. Renew now and save 10%!")
elif daysUntilExpiration == 1:
		print("Your subscription expires within a day! Renew now and save 20%!")
elif daysUntilExpiration == 0:
		print("Your subscription has expired.")
