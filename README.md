You've been asked to add a feature to your company's software. The feature is intended to improve the renewal rate of subscriptions to the software. Your task is to display a renewal message when a user logs into the software system and is notified their subscription will soon end. You'll need to add a couple of decision statements to properly add branching logic to the application to satisfy the requirements.
1)
Review the business rules for this challenge

Rule 1: Your code should only display one message.

The message that your code displays will depend on the other five rules. For rules 2-6, the higher numbered rules take precedence over the lower numbered rules.

Rule 2: If the user's subscription will expire in 10 days or less, display the message:
Output: Your subscription will expire soon. Renew now!

Rule 3: If the user's subscription will expire in five days or less, display the messages:
Output: Your subscription expires in _ days.Renew now and save 10%!

Note

Be sure to substitute the value stored in the variable daysUntilExpiration for _ in your message.

Rule 4: If the user's subscription will expire in one day, display the messages:
Output: Your subscription expires within a day! Renew now and save 20%!

Rule 5: If the user's subscription has expired, display the message:
Output : Your subscription has expired.

Rule 6: If the user's subscription doesn't expire in 10 days or less, display nothing.

To create the initial code for this challenge, enter the following code:
Random random = new Random();
int daysUntilExpiration = random.Next(12);
int discountPercentage = 0;



Implement your solution code using if statements

Your solution must use two separate if statements to implement the business rules.

    Create an if statement that displays a message about when the subscription will expire.

    Tip:    Branch or nest three checks in this first if statement.

    Create a separate if statement that displays a discount offer.

    The business rules indicate when a discount should be offered.

