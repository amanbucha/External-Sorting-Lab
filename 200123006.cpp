#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    vector<int> records;
    int buffer_pages,records_per_page,total_records;
    cin>>buffer_pages>>records_per_page>>total_records;
    for(int i=0; i<total_records; i++) cin>>records[i];
    sort(records.begin(), records.end());
    for(int i=0; i<total_records; i++) cout<<records[i]<<endl;
    return 0;
}