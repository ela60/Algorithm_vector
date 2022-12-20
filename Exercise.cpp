#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>


using namespace std;

int main()
{
    vector<int>vec1;
    vector<int>vec (3, 10);

    vector<int>::iterator it;
    vec.push_back(7);
    vec.push_back(117);
    vec.push_back(70);
    vec.push_back(700);
    vec.push_back(77);

    sort(vec.begin(),vec.end());
    for(int i=0;i<=5;i++)
    {
        vec.push_back(11);
    }
   

    //vec.push_back(10);
    //vec.push_back(7);
    //printf("%d",vec[1]);
    //cout<<endl;
    // cout << vec.size() <<endl;

     for(int i=0;i<vec.size();i++)
     {
        cout<< vec[i]<<"\t";
     }
      puts("");

     //it =vec.begin();
    // it++;
    for(it=vec.begin();it !=vec.end();it++)
    {
        cout<< *it <<endl;

    }
     


    return 0;
}