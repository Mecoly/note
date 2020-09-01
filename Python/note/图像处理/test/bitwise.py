import cv2 as cv
#图片读取
img1 = cv.imread('Trackbar_Color.png')
img2 = cv.imread('blending.jpg')
# 主图的logo范围图片部分
rows,cols,channels = img2.shape
roi = img1[0:rows, 0:cols ]
# logo和取反
img2gray = cv.cvtColor(img2,cv.COLOR_BGR2GRAY)
ret, mask = cv.threshold(img2gray, 10, 255, cv.THRESH_BINARY)
mask_inv = cv.bitwise_not(mask)
# 主图logo位置扣掉
img1_bg = cv.bitwise_and(roi,roi,mask = mask_inv)
# logo图扣出
img2_fg = cv.bitwise_and(img2,img2,mask = mask)
# logo图放入主图选出部分
dst = cv.add(img1_bg,img2_fg)
# 合成部分放回原图
img1[0:rows, 0:cols ] = dst
cv.imshow('res',img1)
cv.waitKey(0)
cv.destroyAllWindows()