#include <iostream>
#include <map>
using namespace std;

//-------------------------------------------------------------------------------
// Parameters
// pos -> iterator to the position before which the new element will be inserted
// value -> element value to insert
// first, last -> range of elements to insert
// ilist -> initializer list to insert
// the values from nh ->  a compatible node handle

// Note : Paasing position accurately may decrease the time complexity from
// log(n) to near constant
//-------------------------------------------------------------------------------

void print(string s, map<string, int>::iterator const &it, bool b) {
    cout << s;
    cout << "Insertion of {" << it->first << ", " << it->second << "} "
         << (b ? "succeeded\n" : "failed\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, int> A, B;

    //---------------------------------------------------------------------------
    // Insert overloads that return bool and iterator pair
    //---------------------------------------------------------------------------
    // Iteartor -> to the inserted element (or to the element that prevented it)
    // Bool -> denoting whether the insertion took place or not
    //---------------------------------------------------------------------------

    // Inserting directly by passing key value pair
    const auto m_pr = A.insert({"One", 1});
    print("\nInserting by default method : ", m_pr.first, m_pr.second);

    {
        // Trying to insert the same key again
        const auto pr = A.insert({"One", 1});
        print("Inserting prev key again : ", pr.first, pr.second);
    }

    {
        // Inserting via forwarding to emplace
        const auto pr = A.insert(pair{"Two", 2});
        print("Inserting via emplace : ", pr.first, pr.second);
    }

    //---------------------------------------------------------------------------
    // Insert overloads that only return an iterator
    //---------------------------------------------------------------------------
    // Iteartor -> to the inserted element (or to the element that prevented it)
    // As these don't overloads don't return a bool, we can make a custom bool
    // by noticing if there is any change in size of map pre and post insertion
    //---------------------------------------------------------------------------

    {
        // Insterting by giving a postion hint
        const int n = A.size();
        const auto it = A.insert(m_pr.first, {"Four", 4});
        print("Insering via pos hint : ", it, A.size() != n);
        /*
        Note :
        Here we passed in position hint of "One". Therefore in order to get
        a successful insertion in desired time complexity we need to insert a
        key-value pair which is likely to insert before One. e.g. Four (F is
        smaller than O). We can send in "Three" but it will defeat the purpose
        of sending positional hint and the time complexity will be musch worse
        (T is larger than O). Although insertion will be successful
        */
    }

    {
        // Trying to insert the same key again
        const int n = A.size();
        const auto it = A.insert(m_pr.first, {"Four", 4});
        print("Inserting prev key again : ", it, A.size() != n);
    }

    {
        // Inserting via forwarding to emplace
        const int n = A.size();
        const auto it = A.insert(m_pr.first, pair{"Five", 5});
        print("Inserting via emplace : ", it, A.size() != n);
    }

    //---------------------------------------------------------------------------
    // Insert overloads that return nothing. These are overlaods which allow
    // multiple inserts at once. If multiple elements in the range have keys
    // that compare equivalent to the target map, it is unspecified which
    // element is inserted and which not. Therefore it is nonsensical to return.
    //---------------------------------------------------------------------------

    {
        // Inserting from initializer list
        A.insert({{"Six", 6}, {"Seven", 7}});
        cout << "\nPairs : {Six, 6}, {Seven, 7} inserted by intialization "
                "list\n";
    }

    // Extracting a node from map A for future use
    auto node_one = A.extract(m_pr.first);
    cout << "Pair : {One, 1} extracted from A\n\n";
    {
        // Inserting from range.
        B.insert(A.begin(), A.end());
    }

    //---------------------------------------------------------------------------
    // Inserting a node handler (nh)
    //---------------------------------------------------------------------------
    // Returns an insert_return_type with the members initialized as follows:
    //---------------------------------------------------------------------------
    // Case 1) nh empty :
    // inserted -> false, position -> end(), node -> stayes empty.

    // Case 2) Insertion successful :
    // inserted -> true, position -> iterator to inserted element, node -> now
    // becomes empty (as we have to use move function)

    // Case 3) Insertion failed :
    // inserted -> false, position -> points to an element with a key equivalent
    // to nh.key(), node -> has previous value of nh
    //---------------------------------------------------------------------------

    const auto triplet = B.insert(move(node_one));
    print("Inserting a node handler : ", triplet.position, triplet.inserted);

    //---------------------------------------------------------------------------
    // Inserting a node handler with positional hint
    //---------------------------------------------------------------------------
    // Returns an iterator pointing to :
    //---------------------------------------------------------------------------
    // Case 1) nh empty : end
    // Case 2) Insert successful : the inserted element
    // Case 3) Insert failed : to an element with a key equivalent to nh.key()
    //---------------------------------------------------------------------------

    // Extracting the inserted node again only to put it back
    node_one = B.extract(triplet.position);
    cout << "\nPair : {One, 1} extracted from B\n\n";
    {
        const int n = B.size();
        const auto it = B.insert(B.begin(), move(node_one));
        print("Inserting a node handler with pos hint : ", it, B.size() != n);
    }

    cout << "\n\nMap A : ";
    for (auto const &i : A) cout << "{" << i.first << ", " << i.second << "}, ";
    cout << '\n';
    cout << "Map B : ";
    for (auto const &i : B) cout << "{" << i.first << ", " << i.second << "}, ";
    cout << "\n\n";

    return 0;
}