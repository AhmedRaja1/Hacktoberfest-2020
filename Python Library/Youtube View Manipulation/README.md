# Youtube View Manipulation Script

## What is this
This is a simple python script that is used to rewatch Youtube videos and generate the views on to a video. This abides by Youtube's policy and the view's generates according to Youtube's guidelines

## How to proceed with the project and get it up and running

### Requirements 

- selenium webdriver: https://www.selenium.dev/downloads/
- vs code: https://code.visualstudio.com/
- python3: https://www.python.org/downloads/

### Installation
Run CMD as admin and type in the following

```
pip install selenium
```

```
pip install pyautogui
```

This is all you need now run the code below and your done

### Python Code

```python
import pyautogui
import time


from selenium import webdriver


i=0
while i != 5000:
    time.sleep(5)
    browser = webdriver.Chrome("E:\projects\chromedriver")
    browser.get("https://youtu.be/MUBTuYYLib8")


    time.sleep(10)
    pyautogui.typewrite(["k"])
    time.sleep(180)
    i=i+1
    pyautogui.hotkey("alt","F4")
```
## Video Tutorial
<a href="https://youtu.be/M75P3XE8KDk">![image](https://user-images.githubusercontent.com/47780362/136695525-94db200c-bbe7-465b-85d2-0b8ebdd6753d.png)
<a>
