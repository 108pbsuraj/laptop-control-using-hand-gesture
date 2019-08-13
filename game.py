# -*- coding: utf-8 -*-
"""
Created on Fri Jul 26 13:01:08 2019

@author: Shivraj
"""



import serial
import time
import pyautogui

ser= serial.Serial('COM3',9600)
time.sleep(3)

pyautogui.hotkey('alt','win','r')
while 1:
    val =str( ser.readline() )
    

    if 'Up' in val :
        pyautogui.typewrite(['up'])
        print(val)
    
    if 'Down' in val :
        pyautogui.typewrite(['down'])
        print(val)
        
    if 'Right' in val :
        pyautogui.typewrite(['right'])
        print(val)

        
    if 'Left' in val:
        pyautogui.typewrite(['left'])
        print(val)

                     