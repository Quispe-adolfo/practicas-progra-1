#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    int min_num, max_num, med_num;
    
    cin >> A >> B >> C;
    
    min_num = min(A, min(B, C));
    max_num = max(A, max (B, C));
    med_num = (A + B + C) - min_num - max_num;
    
    cout << min_num<< endl;
    cout << med_num << endl;
    cout << max_num << endl;
    
    cout<<endl;
    
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    
    return 0;
}