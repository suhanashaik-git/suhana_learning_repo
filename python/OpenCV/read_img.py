import cv2 as cv

img = cv.imread('image.png')

cv.imshow('Cat', img)
cv.waitKey(0) 