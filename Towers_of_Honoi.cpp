#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: n-1 disk source → auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Step 2: nth disk source → destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: n-1 disk auxiliary → destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n = 3;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
