time = int(input('초단위로 시간을 입력하세요'))
min = time // 60
sec = time % 60
print('{}초는 {}분 {}초입니다.'.format(time,min,sec))