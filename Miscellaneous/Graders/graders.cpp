#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// random generator
int ngrandom (int i) { return rand() % i; }

int main() {
  srand ( unsigned ( std::time(NULL) ) );

  // initialize vector with student names.
  vector<string> ecen303names;
  ecen303names.push_back("Student1");
  ecen303names.push_back("Student2");
  ecen303names.push_back("Student3");
  ecen303names.push_back("Student4");

  // initialize vector with grader names.
  vector<string> ecen303graders;
  ecen303graders = ecen303names;

  // generate a derangement using the rejection method.
  bool derangement = false;
  vector<string>::iterator niterator;
  vector<string>::iterator giterator;

  while (derangement == false) {
    // permute grader names using built-in random generator.
    random_shuffle ( ecen303graders.begin(), ecen303graders.end(), ngrandom);
    // checking that permuation is derangement.
    derangement = true;
    niterator = ecen303names.begin();
    giterator = ecen303graders.begin();
    while ((niterator != ecen303names.end()) && (derangement == true)) {
      if (*niterator == *giterator) {
        derangement = false;
      }
      niterator++;
      giterator++;
    }
  }

  cout << endl << "==== Graders and Students ===="  << endl << endl;
  giterator = ecen303graders.begin();
  for (string name : ecen303names) {
    cout << "Grader: " << *giterator << ";    Student: " << name << endl;
    giterator++;
  }
  cout << endl;

  cout << endl << "==== Students and Graders ===="  << endl << endl;
  giterator = ecen303graders.begin();
  for (string name : ecen303names) {
    cout << "Student: " << name << ";    Grader: " << *giterator << endl;
    giterator++;
  }
  cout << endl;
}

