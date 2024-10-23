#include <iostream>
#include <vector>
using namespace std;

struct danso{
    int year;
    int NumberOfPerson;
};

vector<int> YearWithMinPerson(vector<danso> a)
{
    int min_val = 1e9;
    for(auto x : a){
        if(min_val > x.NumberOfPerson) min_val = x.NumberOfPerson;
    }
    vector<int> tmp;
    for(auto x : a){
        if(x.NumberOfPerson == min_val) tmp.push_back(x.year);
    }
    return tmp;
}

vector<int> YearWithMaxPerson(vector<danso> a)
{
    int max_val = -1;
    for(auto x : a){
        if(max_val < x.NumberOfPerson) max_val = x.NumberOfPerson;
    }
    vector<int> tmp;
    for(auto x : a){
        if(x.NumberOfPerson == max_val) tmp.push_back(x.year);
    }
    return tmp;
}

vector<int> YearWithZeroPerson(vector<danso> a)
{
    vector<int> tmp;
    for(auto it : a){
        if(it.NumberOfPerson == 0) tmp.push_back(it.year);
    }
    return tmp;
}

vector<int> YearWithSamePerson(vector<danso> a, int n)
{
    vector<int> tmp;
    for(auto x : a)
    {
        if(x.NumberOfPerson == n) tmp.push_back(x.year);
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
        cout << "Nhung nam khong co nguoi sinh ra la : ";
        for(auto it : listYearZeorPerson)  cout << it << ' ';
    }
    cout << '\n';

    vector<int> listYearMinPerson = YearWithMinPerson(a);
    vector<int> listYearMaxPerson = YearWithMaxPerson(a);

    cout << "Nam co nhieu nguoi duoc sinh ra nhat la : ";
    for(auto x : listYearMaxPerson) cout << x << ' ';
    cout << '\n';

    cout << "Nam co it nguoi sinh ra nhat la : ";
    for(auto x : listYearMinPerson) cout << x << ' ';
    cout << '\n';

    int numberPerson;
    cout << "Nhung nam co "; cin >> numberPerson; cout << "la\n";
    vector <int> listYearSamePerson = YearWithSamePerson(a, numberPerson);
    if(listYearSamePerson.size() != 0)
    {
        for(int x : listYearSamePerson) cout << x << ' ';
    }
    else cout << "NONE";
}