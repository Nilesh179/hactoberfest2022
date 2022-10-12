#include <iostream>
using namespace std;

int FindRoot(int num) {
    int start=0, end, mid, ans;
    end = num;
    mid = (start + ((end-start)/2));
    ans=0;
    
    while(start <= end) {
        long long int square = (mid*mid);

        if(square == num) {
            return mid;
        } else if(square > num) {
            end = mid - 1;
        } else {
            ans = mid;
            start = mid + 1;
        }

        mid = (start + ((end-start)/2));
    }

    return ans;
}

int main() {
    int arr[100], n;

    cout<<"Enter any number: ";
    cin>>n;

    cout<<"\nSquare root of "<<n<<" is "<<FindRoot(n);

    return 0;
}
