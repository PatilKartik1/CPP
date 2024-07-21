#include <iostream>
using namespace std;
//int main()
// {
//     int arr[5] = {7, 12, 9, 4, 1};
//     int min = arr[0];

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << "min element is:" << min << endl;
// }
int sqrt(int n){

    for (int i = 0; i < n; i++)
    {
        if (i*i==n)
        {
            return i;
        }
    }
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;

    int sqrt1=sqrt(n);
    cout<<sqrt1;
}