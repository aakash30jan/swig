namespace std{
templace<class T1, class T2> struct pairing{
T1 first;
T2 second;
pair() : first(T1()), second(T2()) { };
        pair(const T1 &f, const T2 &s) : first(f), second(s) { }
};
}
