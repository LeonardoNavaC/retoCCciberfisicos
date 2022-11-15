import cv2 as cv

cam = cv.VideoCapture(0)
ret, frame = cam.read()



# let's assume the number of images gotten is 0
img_counter = 49

# while loop
while True:
    # intializing the frame, ret
    ret, frame = cam.read()
    # if statement
    if not ret:
        print('failed to grab frame')
        break
    # the frame will show with the title of test
    # Croping and reshaping the image
    #print(frame.shape)
    frame = frame[500:,384:-384,:]
    #print(frame.shape)
    cv.imshow('test', frame)
    #to get continuous live video feed from my laptops webcam
    k  = cv.waitKey(1)
    # if the escape key is been pressed, the app will stop
    if k%256 == 27:
        print('escape hit, closing the app')
        break
    # if the spacebar key is been pressed
    # screenshots will be taken
    elif k%256  == 32:
        # the format for storing the images scrreenshotted
        img_name = 'image_'+str(img_counter)+'.png'
        # saves the image as a png file
        cv.imwrite(img_name, frame)
        print('screenshot taken')
        # the number of images automaticallly increases by 1
        img_counter += 1

# release the camera
cam.release()

# stops the camera window
cam.destoryAllWindows()
