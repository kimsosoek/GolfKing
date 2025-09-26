

#include <iostream>
#include "GameManager.h"

int main()
{
    // 1. GameManager 객체를 생성합니다.
    //    이 한 줄만으로도 생성자가 호출되어
    //    코스 데이터, 스토리, 시작 아이템 지급 등 모든 준비가 끝납니다.
    GameManager game;

    // 2. GameManager의 Run() 함수를 호출하여 게임의 메인 루프를 시작합니다.
    //    이 함수가 실행되면, 우리가 만든 게임의 오프닝 스토리가 나오고
    //    메인 메뉴가 나타나게 됩니다.
    game.Run();

    // 3. Run() 함수가 끝나면(플레이어가 게임을 종료하면) 프로그램이 정상적으로 종료됩니다.
    return 0;
}