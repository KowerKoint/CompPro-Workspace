#define REP(a,b) for(int a = 0;a < (b);++a)
#define ALL(a) (a).begin(),(a).end()
#define END(a) { print(a); return; }
#define DBG(a) { cerr << #a << ": "; dbg(a); }
using ll = long long;
using P = pair<int, int>;
using VI = vector<int>;
using VVI = vector<VI>;
using VVVI = vector<VVI>;
using VL = vector<ll>;
using VVL = vector<VL>;
using VVVL = vector<VVL>;
using VP = vector<P>;
using VVP = vector<VP>;
using VVVP = vector<VVP>;
using LP = pair<ll, ll>;
using VLP = vector<LP>;
using VVLP = vector<VLP>;
using VVVLP = vector<VVLP>;
using VD = vector<double>;
using VVD = vector<VD>;
using VVVD = vector<VVD>;
using VS = vector<string>;
using VVS = vector<VS>;
using VVVS = vector<VVS>;
constexpr int INF = 1001001001;
constexpr ll LINF = 1001001001001001001ll;

#ifdef atcoderall

using namespace atcoder;
using MI7 = modint1000000007;
using MI3 = modint998244353;

ostream &operator<<(ostream &os, const modint &x) {
  os << x.val();
  return os;
}

ostream &operator<<(ostream &os, const MI3 &x) {
  os << x.val();
  return os;
}

ostream &operator<<(ostream &os, const MI7 &x) {
  os << x.val();
  return os;
}

istream &operator>>(istream &is, modint &x) {
  int y; is >> y;
  x = y;
  return is;
}

istream &operator>>(istream &is, MI3 &x) {
  int y; is >> y;
  x = y;
  return is;
}

istream &operator>>(istream &is, MI7 &x) {
  int y; is >> y;
  x = y;
  return is;
}

#endif

template<class T>
void print(const T &t) { cout << t << '\n'; }
template<class Head, class... Tail>
void print(const Head &head, const Tail &... tail) {
  cout << head << ' ';
  print(tail...);
}

template<class T>
void dbg(const T &t) { cerr << t << '\n'; }
template<class Head, class... Tail>
void dbg(const Head &head, const Tail &... tail) {
  cerr << head << ' ';
  dbg(tail...);
}

template< typename T1, typename T2 >
ostream &operator<<(ostream &os, const pair< T1, T2 >& p) {
  os << p.first << " " << p.second;
  return os;
}

template< typename T1, typename T2 >
istream &operator>>(istream &is, pair< T1, T2 > &p) {
  is >> p.first >> p.second;
  return is;
}

template< typename T >
ostream &operator<<(ostream &os, const vector< T > &v) {
  for(int i = 0; i < (int) v.size(); i++) {
    os << v[i] << (i + 1 != v.size() ? " " : "");
  }
  return os;
}

template< typename T >
istream &operator>>(istream &is, vector< T > &v) {
  for(T &in : v) is >> in;
  return is;
}

template< typename T1, typename T2 >
inline bool chmax(T1 &a, T2 b) { return a < b && (a = b, true); }

template< typename T1, typename T2 >
inline bool chmin(T1 &a, T2 b) { return a > b && (a = b, true); }