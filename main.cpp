#include <iostream>
using namespace std;
void initial_amount(double money)
{
    cin >> money;
    cout << "You've succesfully introduced" << " " << money << " "
         <<"euros into the slotting machine" << endl;
}
void start_gambling(double m)
{
    int k1=0, k2=0, k3=0, k4=0, N=100, a[100][100];
    initial_amount(m);
    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            a[i][j] = rand()%N;
            if(a[i][j] == 80)
            {
                k1 ++;
            }
            if(a[i][j] == 66)
            {
                k2 ++;
            }
            if(a[i][j] == 70)
            {
                k3 ++;
            }
            if(a[i][j] == 71)
            {
                k4 ++;
            }
        }
        if(k1 == 4 && k2 == 4 && k3 == 4 && k4 == 4)
        {
            m*=2;
            cout << "Congratulations!!! You've just doubled your money...for now ;) ... Now you have" << m << "Euros" << "\n" << "Try again to earn more!!!" << endl;
        }
        else
        {
            m/=2;
            cout << "OOOPS!!! You've lost a bunch of cash!!! Introduce more if you wanna win ;) ... The remaining amount is:" << m << " Euros" << endl;
        }

    }
}

int main()
{
    double money;
    cin >> money;
    start_gambling(money);
}
