//D.최종 좌우 위치 계산
//플레이어의 조준, 정확도, 좌우 바람을 조합하여 최종 좌우 위치를 확정합니다.
//
//maxRandomError = BASE_RANDOM_ERROR * (1 - player.GetAccuracy() / 100.0)
//
//(오버 스윙 상태라면 maxRandomError 값을 크게 증폭)
//
//randomError = (0부터 maxRandomError * 2 까지의 난수) - maxRandomError
//
//finalSidewaysPosition = playerAim + randomError + currentHole.sideWind
//▼
//┌──────────────────┐
//│[결과 판정 & 피드백] │
//│(페어웨이, 벙커, 그린 등)│
//└────────┬─────────┘
//│
//계산된 finalDistance와 finalSidewaysPosition 값으로 공이 떨어진 최종 지형을 판정합니다.
//
//IF(finalDistance가 해저드 구간에 해당)
//
//결과 = 워터 해저드. (+1 벌타)
//
//ELSE IF(finalDistance가 벙커 구간이고, bunkerChance 확률 체크 통과)
//
//결과 = 벙커. (다음 샷 페널티)
//
//ELSE IF(abs(finalSidewaysPosition) > currentHole.fairwayWidth / 2)
//
//결과 = 러프. (다음 샷 페널티)
//
//ELSE
//
//결과 = 페어웨이. (페널티 없음)
//└─(홀인 전까지 반복)
//│
//
//▼
//┌──────────────────┐
//│[홀 종료]    │
//│(다음 홀 or 경기 종료)│
//└────────┬─────────┘
//│
//▼
//┌──────────────────┐
//│[경기 보상]    │
//│(새 클럽 세트 등) │
//└──────────────────┘
//
//4. 홀의 들어갔을 경우 필드 종료(보상으로 아이템 획득)
//4.5 트레이닝(상태 변경 * 옵션)
//5. 필드 9개 종료 시 게임 종료
//
//클래스 설계
//
//1. 게임매니저(플레이어, 홀 관리)
//2. 플레이어
//3. 홀
//
//4. 아이템(골프 클럽, 신발(파생클래스)
//    5. 인벤토리(플레이어가 가지고 있음, 아이템 가지고 있음)