import serial

receiver = serial.Serial("/dev/ttyUSB0", 115200)

while(True):
    if receiver.readable():
        res = receiver.readline()
        print(res)