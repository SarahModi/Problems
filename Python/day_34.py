IP = ["192.233.xx.xx", "192.101.xx.xx", "180.064.xx.xx", "192.124.xx.xx", "184.080.xx.xx"]

#Extract the first three characters rom a list of IP addresses
networks = []
for address in IP:
 networks.append(address[0:3])
print(networks)

#Output
#['192', '192', '180', '192', '184']
