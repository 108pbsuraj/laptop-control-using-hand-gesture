import serial
import time
import pyautogui

ser = serial.Serial('COM3', 9600)
time.sleep(3)
while 1:
    val = str(ser.readline())

    if 'Vol_Up' in val:
        pyautogui.typewrite(['up'])
        print(val)

    if 'Vol_Down' in val:
        pyautogui.typewrite(['down'])
        print(val)

    if 'Play/Pause' in val:
        pyautogui.press('space')
        print(val)

    if 'Forward' in val:
        pyautogui.typewrite(['right'])
        print(val)

    if 'Rewind' in val:
        pyautogui.typewrite(['left'])
        print(val)