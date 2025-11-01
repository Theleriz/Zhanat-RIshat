#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int P = 31; // P it's prime that bigger then size of alphabet

int get_hash(string s){
    int result = 0;
    int p_pow = 1;

    for(int i = 0; i < s.size(); i++){//body of hash function in this function hash is polindrom 
        result += s[i] * p_pow;
        p_pow * P;
    }

    return result;
}

vector<int> makeHashSumTable(string s){
    vector<int> result(s.size());
    result[0] = s[0];
    int p_pow = P;

    for(int i = 1; i < s.size(); i++){
        result[i] = result[i - 1] + s[i] * p_pow;
        p_pow = p_pow * P;
    }

    return result;
}

vector<int> preP(int p, int size){
    vector<int> result(size);
    int p_pow = 1;
    
    for(int i = 0; i < size; i++){
        result.push_back(p_pow);
        p_pow * p;
    }

    return result;
}

vector<int> patternMatch(string s, string target){ //return vector with inner index 
    vector<int> prefixHash = makeHashSumTable(s); // make table with precomputed hash table
    vector<int> p = preP(P, s.size());//make table of powers of P
    int targetHash = get_hash(target);

    for(int i = 0; i < s.size() - target.size() + 1; i++){
        int j = i + m - 1; //end index of interval of hash sums
        int hash = prefixHash[j];

        if(i > 0){
            hash -= prefixHash[i - 1];
        }

        if(hash == targetHash * p[i]){ // we cant divide to find acctual hash so we just multiple other side to compare
            result.push_back(i);
        }
    }

}



int main(){

    //test case of correct working of hash table 
    string s = "abc";
    cout << get_hash(s) << endl;
    vector<int> hash = makeHashSumTable(s);
    string tmp = "";
    for(int i = 0; i < s.size(); i++){
        tmp += s[i];
        cout << "substring " << tmp << " ";
        cout << endl;
        int t = 0;
        t += get_hash(tmp);
        cout << t << " ";
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < hash.size(); i++){
        cout << hash[i] << " ";
    }
}