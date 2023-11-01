#include <bits/stdc++.h>
using namespace std;
// --- USTAWIENIA ---

string path = "./zap1.out";
// Odkomentuj sekcję dla odpowiedniego pliku
// -> zap1.out
constexpr int TESTS = 10000000, INTERVAL=1000;
constexpr int MN=16, MAXT=32;
// -> zap2.out
// constexpr int TESTS = 350000, INTERVAL=100;
// constexpr int MN=3000, MAXT=1000000000;
// -> zap3.out
// constexpr int TESTS = 1000, INTERVAL=1;
// constexpr int MN= 500000, MAXT=1000000000;


// --------- WZORCÓWKA -----------

int tab[MN]; // Możesz użyć zmiennych testerki

int solve(pair<int, vector<pair<int, int>>> wej){
	for(int i = 1; i < 5; i++)
		tab[i]=0;
	int n = wej.first;
	return n;
}

// --------- GENERATORKA ---------
#include <iostream> 
#include <random> 
  
mt19937 mt;  

int r(int a, int b){
    return mt() %(b-a+1) + a;
}



pair<int, vector<pair<int, int>>> gen(int seed){ 
    mt.seed(seed);
    int n = r(2, MN);
    vector<pair<int, int>> res;
    for(int i = 1; i <= n; i++){
        int a = r(1, MAXT-1);
        int b = r(a+1, MAXT);
        res.push_back({a, b});
    }
    return {n, res};
}

// -------- TESTERKA ----------

void print_test(pair<int, vector<pair<int, int>>> t){
    cout << t.first << '\n';
    for(auto i : t.second){
        cout << i.first << ' ' << i.second << '\n';
    }
}

ifstream odp;
int main(){
    odp.open(path);
    for(int i = 1; i <= TESTS; i++){
        auto in = gen(i);
        int cur_res=-1;

		//Jeśli masz RE, odkomentuj tą sekcję żeby wypisywać test przed wykonaniem
		// cout << "TEST " << i << "\n";
		// cout << "Wejscie:\n";
		// print_test(in);

		cur_res = solve(in);
		
		int ans=-1;
		odp >> ans;
        if(ans != cur_res){
			cout << "TEST " << i << " : WA\n";
			cout << "Wejscie:\n";
            print_test(in);
			cout << "Wyjscie:\n" << cur_res << '\n' << "Odpowiedź:\n" << ans << '\n';
            break;
        }

        if(i%INTERVAL == 0){
            cout << "TESTY do " << i << " OK\n";
        }
    }
}
