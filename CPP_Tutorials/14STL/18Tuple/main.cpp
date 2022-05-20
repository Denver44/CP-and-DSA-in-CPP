#include <iostream>
#include <tuple>
using namespace std;
/*
tuple<datatype, datatype....> objectname as many dadatype u can write.
make_tuple this help to make the tuple;
to print out the element of the tuple use get.<index start from o to max-1 in this angular brackets>(in brackets object name);
u can comapre two tuple.
*/
int main()
{
    tuple<int, string, string, int> t1, t2, t3, t4;
    t1 = make_tuple(1, "Denver", "04-04-1989", 4);
    t2 = make_tuple(2, "Tokyo", "04-04-1979", 18);
    t3 = make_tuple(3, "Rio", "23-04-1981", 5);
    t4 = make_tuple(4, "Lisbon", "15-07-1972", 16);
    cout << "sr.no  Name   Dob " << endl;
    cout << get<0>(t1) << "   " << get<1>(t1) << " " << get<2>(t1) << " " << get<3>(t1) << endl;
    cout << get<0>(t2) << "   " << get<1>(t2) << " " << get<2>(t2) << endl;
    cout << get<0>(t3) << "   " << get<1>(t3) << " " << get<2>(t3) << endl;
    cout << get<0>(t4) << "   " << get<1>(t4) << " " << get<2>(t4);

    return 0;
}