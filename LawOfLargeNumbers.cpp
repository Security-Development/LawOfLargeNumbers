#include <iostream>

using namespace std;

int* sort(int* arr, int size) 
{

    for(int i = 0; i <= size - 1; i++)
    {
        for( int j = i + 1; j <= size; j++)
        {
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }   

    }

    return arr;

} 


int main()
{
    int n, m, k;
    int result = 0;
    int one, two;

    cin >> n >> m >> k;

    int arr[n] = {};

    for(int i = 0; i < n; i++)
    {
        int ass;
        cin >> ass;
        arr[i] = ass;
    }
    int len = sizeof(arr) / sizeof(*arr);
    sort(arr, len);

    /* 모범 답 */
    one = arr[len];
    two = arr[len - 1];
    int count = m % 3;
    result += (m - count) * one;
    result += (count) * two;

    cout << result;


    /* 답 */
    // for(int i = 0 ; i < m; i++) 
    // {
    //     for(int j = 0; j < k; j++) 
    //     {
    //         if(m <= 0) 
    //             break;
            
    //         result += one;
    //         m -= 1;
    //     }
        
    //     if(m <= 0) 
    //         break;
        
    //     result += two;
    //     m -= 1;

    // }

    // cout << result;

    
}