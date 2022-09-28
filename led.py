import RPi.GPIO as GPIO
import time

led0 = 4
GPIO.setmode(GPIO.BCM)
GPIO.setup(led0, GPIO.OUT)
#yellow = LED(4)
start0 = time.time()


while time.time() - start0 < 3:
 GPIO.output(led0, GPIO.HIGH)

GPIO.output(led0, GPIO.LOW)
