#include <cassert>
#include <fstream>
#include <string>

#include "constraints.h"
#include "testlib.h"

using namespace std;

void small_generator(string filename, int T, int max_N, long long max_M, int max_A) {
  ofstream of(filename);
  of << T << endl;
  while (T > 3) {
    int N = rnd.next(1, max_N);
    long long M = rnd.next(1LL, max_M);
    of << N << " " << M << endl;

    vector<int> A;
    vector<bool> used(max_A + 1, false);

    int crt_A = rnd.next(1, max_A);
    used[crt_A] = true;
    A.push_back(crt_A);

    while (A.size() < N) {
      crt_A = rnd.next(1, max_A);
      if (used[crt_A]) continue;
      used[crt_A] = true;
      A.push_back(crt_A);
    }

    of << A[0];
    for (int i = 1; i < N; i++) {
      of << " " << A[i];
    }
    of << endl;

    T--;
  }

  // 2 case for GCD \neq 1
  int gcd_set[] = {2, 3};
  for (int i = 0; i < 2; i++, T--) {
    vector<int> A;
    for (int crt_A = gcd_set[i]; A.size() < max_N && crt_A <= max_A; crt_A += gcd_set[i]) {
      A.push_back(crt_A);
    }

    int N = A.size();
    long long M = max_M;
    of << N << " " << M << endl;
    of << A[0];
    for (int i = 1; i < N; i++) {
      of << " " << A[i];
    }
    of << endl;
  }

  // 1 case for answer = M
  {
    int N = 1;
    long long M = max_A - 1;
    of << N << " " << M << endl;
    of << max_A << endl;
    T--;
  }

  //assert(T == 0);
}

void medium_generator(string filename, int T, int max_N, long long max_M, int max_A) {
  ofstream of(filename);
  of << T << endl;
  while (T > 5) {
    int N = rnd.next(1, max_N);
    long long M = rnd.next(1LL, max_M);
    of << N << " " << M << endl;

    vector<int> A;
    vector<bool> used(max_A + 1, false);

    int crt_A = rnd.next(1, max_A);
    used[crt_A] = true;
    A.push_back(crt_A);

    while (A.size() < N) {
      crt_A = rnd.next(1, max_A);
      if (used[crt_A]) continue;
      used[crt_A] = true;
      A.push_back(crt_A);
    }

    of << A[0];
    for (int i = 1; i < N; i++) {
      of << " " << A[i];
    }
    of << endl;

    T--;
  }

  // 1 cases from hand.in

  { // hand3.in
    of << "12 222" << endl;
    of << "20 76 88 111 119 135 147 149 151 193 195 211" << endl;
    T--;
  }

  // 3 case for GCD \neq 1
  int gcd_set[] = {3, 5, 7};
  for (int i = 0; i < 3; i++, T--) {
    vector<int> A;
    for (int crt_A = gcd_set[i] * 100; A.size() < max_N && crt_A <= max_A; crt_A += gcd_set[i]) {
      A.push_back(crt_A);
    }

    int N = A.size();
    long long M = max_M;
    of << N << " " << M << endl;
    of << A[0];
    for (int i = 1; i < N; i++) {
      of << " " << A[i];
    }
    of << endl;
  }

  // 1 case for answer = M
  {
    int N = 1;
    long long M = max_A - 1;
    of << N << " " << M << endl;
    of << max_A << endl;
    T--;
  }

  //assert(T == 0);
}

void large_generator(string filename, int T, int max_N, long long max_M,
                     int max_A) {
  ofstream of(filename);
  of << T << endl;

  // 40 cases : smallest_A >= 29000 and N == 30 and M >= 9*10^17 (TLE)
  const int smallest_A = 29000;
  for (int i = 0; i < 40; i++, T--) {
    int N = max_N;
    long long M = rnd.next((long long) 9e17, max_M);
    of << N << " " << M << endl;

    vector<int> A;
    vector<bool> used(max_A + 1, false);

    int crt_A = rnd.next(smallest_A, max_A);
    used[crt_A] = true;
    A.push_back(crt_A);

    while (A.size() < N) {
      crt_A = rnd.next(smallest_A, max_A);
      if (used[crt_A]) continue;
      used[crt_A] = true;
      A.push_back(crt_A);
    }

    of << A[0];
    for (int i = 1; i < N; i++) {
      of << " " << A[i];
    }
    of << endl;
  }

  // 4 cases from hand.in

  { // hand2.in
    of << "3 31000000217" << endl;
    of << "6 10 15" << endl;
    T--;
  }

  { // hand3.in
    of << "12 222" << endl;
    of << "20 76 88 111 119 135 147 149 151 193 195 211" << endl;
    T--;
  }

  { // hand5.in
    of << "3 1000000000000000000" << endl;
    of << "5000 9998 9999" << endl;
    T--;
  }

  { // hand6.in
    of << "2 1000000000000000000" << endl;
    of << "29999 30000" << endl;
    T--;
  }

  // 2 case for GCD \neq 1
  int gcd_set[] = {3, 13};
  for (int i = 0; i < 2; i++, T--) {
    vector<int> A;
    for (int crt_A = gcd_set[i] * 500; A.size() < max_N && crt_A <= max_A; crt_A += gcd_set[i]) {
      A.push_back(crt_A);
    }

    int N = A.size();
    long long M = max_M;
    of << N << " " << M << endl;
    of << A[0];
    for (int i = 1; i < N; i++) {
      of << " " << A[i];
    }
    of << endl;
  }

  // 1 case for answer = M
  {
    int N = 1;
    long long M = max_A - 1;
    of << N << " " << M << endl;
    of << max_A << endl;
    T--;
  }

  // 3 cases for random (small N)
  for (int i = 0; i < 3; i++, T--) {
    int N = rnd.next(3, 5);
    long long M = rnd.next((long long) 9e17, max_M);
    of << N << " " << M << endl;

    vector<int> A;
    vector<bool> used(max_A + 1, false);

    int crt_A = rnd.next(smallest_A, max_A);
    used[crt_A] = true;
    A.push_back(crt_A);

    while (A.size() < N) {
      crt_A = rnd.next(smallest_A, max_A);
      if (used[crt_A]) continue;
      used[crt_A] = true;
      A.push_back(crt_A);
    }

    of << A[0];
    for (int i = 1; i < N; i++) {
      of << " " << A[i];
    }
    of << endl;
  }

  assert(T == 0);
}

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  small_generator("small.in", SMALL_T, SMALL_MAX_N, SMALL_MAX_M, SMALL_MAX_A);
  medium_generator("medium.in", MEDIUM_T, MEDIUM_MAX_N, MEDIUM_MAX_M, MEDIUM_MAX_A);
  large_generator("large.in", LARGE_T, LARGE_MAX_N, LARGE_MAX_M, LARGE_MAX_A);
  for (int i = 0; i < 10; ++i) {
    large_generator("random-test" + to_string(i) + ".in", LARGE_T, LARGE_MAX_N,
                    LARGE_MAX_M, LARGE_MAX_A);
  }
  return 0;
}
