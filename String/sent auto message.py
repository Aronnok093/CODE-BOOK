import pyautogui
import turtle
import time
text=input("Input Text: ")
term=int(input("How Many Time: "))
print("Make Sure Your cursor Is In Your Chat Box You Have 8 secound")
time.sleep(8)
for i in range(term):
    time.sleep(4)
    pyautogui.typewrite(text)
    time.sleep(2)
    pyautogui.press('enter')
