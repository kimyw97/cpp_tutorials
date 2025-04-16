#include <ctime>
#include <iostream>

using namespace std;
int main()
{
    // time_t timestamp;
    // time(&timestamp);

    // cout << ctime(&timestamp) << endl;
    /*
    날짜와 시간은 주로 두가지 타입을 사용
    time_t와 tm
    아래는 struct tm의 맴버
    tm_sec: 초
    tm_min: 분
    tm_hour: 시
    tm_mday: 그달의 날짜
    tm_mon: 달
    tm_year: 1900년 이후의 연도 수
    tm_wday: 요일
    tm_yday: 연중 일수 (0~365)
    tm_isdst 서머타임이 적용된 경우 양수 아닌 경우 0 알 수 없는 경우 음수
    */
    struct tm datetime;
    time_t timestamp;

    datetime.tm_year = 2023 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    datetime.tm_isdst = -1;
    timestamp = mktime(&datetime);
    cout << ctime(&timestamp) << endl;

    return 0;
}