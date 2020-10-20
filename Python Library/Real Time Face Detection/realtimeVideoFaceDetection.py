import cv2
from random import randrange

# Haarcascade Algorithm
# Load Images and Data
# Turn the image into grayscale
# Train the algorithm

# loading some pretrained dataset, provided by opencv community
# Cascade Classifier is a modern day detector

trained_data = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')

# Capture the webcam
# webcam = cv2.VideoCapture('.mp4')

webcam = cv2.VideoCapture(0)

# Iterate forever
while True:
    # Reading the current frame
    successful_frame_read, frame = webcam.read()
    # Converting it to grayscale
    grayscaled_img = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    # Detect Faces
    face_coordinates = trained_data.detectMultiScale(grayscaled_img)
    # Using for loop to iterate through each frame and assigning the frame cordinates to our variables
    for (x, y, w, h) in face_coordinates:
        # Draw the rectangles
        cv2.rectangle(frame, (x, y), (x+w, y+h),
                      (randrange(128, 256), randrange(256), randrange(256)), 10)
    # Showing the webcam results
    cv2.imshow('Realtime Face Detector', frame)
    key = cv2.waitKey(1)

    if key == 81 or key == 113:
        break
# Releasing the camera

webcam.release()

print('Code Completed')
