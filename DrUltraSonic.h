/* インクルードガード */
#pragma once

class DrUltraSonic // classの定義
{
private: // privateはクラス内からしかアクセスできない
public:  // publicはどこからでもアクセス可能
    int m_echo_pin;
    int m_trig_pin;
    DrUltraSonic(int echo_pin, int trig_pin);
    double measureReturnTime();
};
