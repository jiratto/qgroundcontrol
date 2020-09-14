import serial
import time

with serial.Serial('/dev/ttyUSB1', 38400, timeout=1) as ser:
    while (True):
        time.sleep(1)
        sentence = b'!AIVDM,1,1,,B,177KQJ5000G?tO`K>RA1wUbN0TKH,0*5C\r\n'
        ser.write(sentence)
        print(sentence)
