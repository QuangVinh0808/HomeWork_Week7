#include <iostream>
#include <vector>
using namespace std;

struct danso{
    int year;
    int NumberOfPerson;
};

// vector<int> YearWithMinPerson(vector<danso> a)
// {

// }

// vector<int> YearWithMaxPerson(vector<danso> a)
// {

// }

vector<int> YearWithZeroPerson(vector<danso> a)
{
    vector<int> tmp;
    for(auto it : a){
        if(it.NumberOfPerson == 0) tmp.push_back(it.year);
    }
    return tmp;
}

int main()
{
    vector<danso> a(51);
    for(int i = 0; i <= 50; i++){
        cin >> a[i].year >> a[i].NumberOfPerson;
    }

    vector<int> listYearZeorPerson = YearWithZeroPerson(a);
    if(listYearZeorPerson.size() == 0) cout << "Khong co nam nao khong co nguoi sinh !";
    else{
        for(auto it : listYearZeorPerson) cout << "Nhung nam khong co nguoi sinh ra la : " << it << ' ';
    }
    cout << '\n';

}