#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector<int> v{10, 20, 30, 40 , 50};

// data

    // cout << "address of v: " << *v.data() << endl;


// assign

    // v.assign(100, 0);

    // v2.assign(v.begin() + 2, v.end()-1);

    // int ar[] = {5, 10, 15, 20, 30};
    // v2.assign(ar, ar + 3);

    // vector<int> v2 {10, 20, 30};
    // v2.assign({1, 2, 50, 100});

    // for(int item : v2){
    //     cout << item << " ";
    // }



// insert

    //  vector<int> v{10, 20, 30, 40 , 50};

    // v.insert(v.begin() + 2 , 100);
    // v.insert(v.begin() + 2 , 5, 100);

    // vector<int> v2{1, 2, 3, 4, 5, 6};

    // v2.insert(v2.begin()+1 , v.begin()+ 1, v.end()-1);

    // for(int item : v2){
    //     cout << item << " ";
    // }


// erase() and clear() 

    // vector<int> v{10, 20, 30, 40 , 50};
    // cout << " before clear: ";
    // for(int item : v){
    //     cout << item << " ";
    // }
    // cout << endl;

    // cout << " after clear: ";
    // v.clear();
    // for(int item : v){
    //     cout << item << " ";
    // }


    // v.erase(v.begin()+ 1);
    // v.erase(v.end()-1);

    // v.erase(v.begin() + 2 , v.end());

    // for(int item : v){
    //     cout << item << " ";
    // }

// v1.swap(v2) 


// emplace
    vector<int> v{10, 20, 30, 40, 50};

    v.emplace(v.begin(), 80);

    for(int item : v){
        cout << item << " ";
    }


    return 0;
}