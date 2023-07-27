# edu_game
교육용 게임 프로그램/C프로그래밍 수업 과제
- my.h
    - 난수 생성을 위해 rand함수 정보를 가지고 있는 <stdib.h>를 포함
    - 난수 생성될 때마다 다른 값이 호풀되기 위해 time함수를 사용하기 위해 <time.h>포함
    - 다중 소스 프로그램을 작성하기 위해 함수 원형 정의는 헤더파일인 my.h파일에 작성
- edu_gmae.c
    - main함수가 있는 소스 파일
    - 산수가 좋아/비밀을 맞춰봐/점수 보기/끝내기로 메뉴 구성됨
    - 3. 점수보기 메뉴가 선택되면 게임별 점수의 합인 최종점수가 출력됨
    - 4.끝내기가 선택되기전까지 계속해서 메뉴를 보여줌
- arithGame.c
    - 1.산수가 좋아 메뉴가 선택되면 수행되는 게임을 담은 소스파일
    - 더하기 할래?/빼기 할래?/곱하기 할래? 총 3가지 메뉴로 구성됨
    - 총 5문제로 구성함
    - 오답시 벌점 5초가 추가됨
    - 문제를 다 푼 후 문제당 평균 시간과 점수가 출력됨
- findSecret.c
    1. 비밀을 맞춰봐 메뉴가 선택되면 수행되는 게임을 담은 소스파일
    - 랜덤으로 할당된 값을 이용자가 맞추는 게임
    - 랜덤으로 할당되는 값은 1과 이용자에게 입력받은 최댓값 사이의 정수임
    - 정답일 겨우 소요시간과 시도횟수, 점수가 출력됨
