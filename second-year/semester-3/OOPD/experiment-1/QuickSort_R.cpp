#include <iostream>

using namespace std;

int Partition( int ar[], int low, int high )
{
    int temp, i = low + 1, j = high, pivot = ar[ low ];
    while ( i <= j )
    {
        while ( ar[i] < pivot && i < high )
            i++;
    
        while ( ar[j] > pivot )
            j--;

        if ( i < j )
        {
            temp = ar[ j ];
            ar [ j ] = ar [ i ];
            ar [ i ] = temp;
            i++;
            j--;
        }
        else
            i++;
    }
    ar [ low ] = ar [ j ];
    ar [ j ] = pivot;
    return j;
}

void quickSort( int ar[], int low, int high )
{
    int pivot;
    if ( low >= high )
        return;

    pivot = Partition ( ar, low, high );

    quickSort ( ar, low, pivot-1 );
    quickSort ( ar, pivot+1, high );
}

int main()
{
    int n;
    cout << "Enter number of elements:\n";
    cin >> n;
    int ar[ n ];

    cout << "\nEnter "<<n<<" elements:\n";
    for ( int i = 0 ; i < n ; i++ )
        cin >> ar[i];
    
    quickSort ( ar, 0, n-1 );

    cout << "\nThe sorted array is:\n";
    for ( int i = 0 ; i < n ; i++ )
        cout << ar [ i ] << " ";

    cout << endl;
}