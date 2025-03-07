import os

rand = os.urandom(16)
print("RAND:", rand.hex().upper())
