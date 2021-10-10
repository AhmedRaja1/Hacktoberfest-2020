import pyautogui
import time


from selenium import webdriver


i=0
while i != 5000:
    time.sleep(5)
    browser = webdriver.Chrome("E:\projects\chromedriver")
    browser.get("https://www.youtube.com/watch?v=mk31hp6LlLI")


    time.sleep(10)
    pyautogui.typewrite(["k"])
    time.sleep(5)
    i=i+1
    pyautogui.hotkey("alt","F4")