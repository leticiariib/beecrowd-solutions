#include <iostream>
using namespace std;
int main() {
    int h_angulo, m_angulo;
    while (cin >> h_angulo >> m_angulo) {
        int minuto = m_angulo / 6;
        int hora = h_angulo / 30;
        cout << (hora < 10 ? "0" : "") << hora << ":";
        cout << (minuto < 10 ? "0" : "") << minuto << endl;
    }
    return 0;
}