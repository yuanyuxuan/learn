#include<iostream>
#include<vector>
#include<list>
#include<map>
using namespace std;
template<typename T>
void out_vec(vector<T> vec)
{
     int length = vec.size();
     for(int i=0;i<length;i++)
     {
        cout<<vec[i];
     }
     cout<<endl;
}
template<typename T>
void out_list(list<T> lst1)
{
     for(list<int>::const_iterator iter = lst1.begin();iter != lst1.end();iter++)
    {
       cout<<*iter;
    }
}
int main()
{
//vector;
    vector<int> vec_int;
    vector<int> vec_2(vec_int);
    vector<int> vec_3(vec_int.begin(),vec_int.end());
    vector<int> vec_4(10);
    vector<int> vec_5(10,4);
    vec_int.push_back(100);
    vec_int.push_back(200);
    int size=vec_int.size();
    bool isEmpty=vec_int.empty();
    out_vec(vec_int);
    cout<<vec_int[0];
    vec_int.insert(vec_int.end(),5,3);
   out_vec(vec_int);
    vec_int.pop_back();
    out_vec(vec_int);
//list
    list<int> list_1;
    list<int> list_2(3);
    list<int> list_3(3,2);
    list<int> list_4(list_2);
    list<int> list_5(list_2.begin(),list_2.end());
    list_1.assign(list_2.begin(),list_2.end());
    list_1.push_back(10);
    out_list(list_1);
    return 0;
}
