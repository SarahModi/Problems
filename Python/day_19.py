# Create a program that can take in input of the target ip
# Save the ip in a variable
# Pass the variable through a function and print "Attacking_____"

ip = input ("What is you target ip?: ")

def nmap(ip):
 print(f"Attacking {ip}...")

nmap(ip)
