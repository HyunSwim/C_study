# 오류 체크에 관한 고찰

## 1. publisher node에서 문제가 생겨 topic이 전달되지 않을 때
# time 함수를 사용하여 지정된 시간 내에 callback이 일어나지 않을 시 error를 print하도록 설정

## 2. topic은 전달되나 그 안의 msg가 쓰레기값일 때(센서 해제시)
# 난수를 활용해 얻은 표본 센서값이 그 이전과 같은 경우 error로 처리