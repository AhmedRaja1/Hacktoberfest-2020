#if u dont have cv2 install it first 
#open command prompt and type "pip install opencv.python"

import cv2

capture = cv2.VideoCapture(0)

while(True):
    ret, fram =capture.read()
    cv2.imshow('video',fram)

    if cv2.waitKey(1) == 27: #if esc key is pressed camera will be closed 
        break
 
capture.release()
cv2.destroyAllWindows()

