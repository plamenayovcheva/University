#include <iostream>
#include <string>
using namespace std;
int main()
{
            // ����� ���� 15 ������
            int h,m;
            cin>>h;
            cin>>m;
            m = m + 15;
            // ����������� �� 60 ������
            if (m >= 60)
            {
                h += 1;  // h = h + 1;
                m -= 60; // m = m - 60;
            }
            // ����������� �� ���������
            if (h > 23) h -= 24;
            // �������� �� ������ ���� ��� ������ ��-����� �� 10
            if(m < 10) cout<<h<<":0"<<m;
            else cout<<h<<":"<<m;

system ("pause");
return 0;
}
