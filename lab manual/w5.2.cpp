#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool hasArrayTwoCandidates(int A[], int arr_size, int key)
{
	int l, r;
	sort(A, A + arr_size);
	l = 0;
	r = arr_size - 1;
	while (l < r) {
		if (A[l] + A[r] == key) 
        {
            cout<<A[l]<<" "<<A[r]<<endl;
			return 1;
        }
		else if (A[l] + A[r] < key)
			l++;
		else 
			r--;
	}
	return 0;
}


int main()
{
	int A[] = { 1, 4, 45, 6, 10, -8 };
	int key =0;
    cout<<"enter key"<<endl;
    cin>>key;
	int arr_size = sizeof(A) / sizeof(A[0]);

	if (hasArrayTwoCandidates(A, arr_size, key))
		cout << "elements exits";
	else
		cout << "elements do not exits";

	return 0;
}
