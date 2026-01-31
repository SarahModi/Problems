# Return information from a funtion

def fails(total, failed):
  failed_percentage = failed / total
  return failed_percentage

percentage = fails (4,3) #total=4, failed=3

if (percentage >= .5):
   print("Account Locked.")
