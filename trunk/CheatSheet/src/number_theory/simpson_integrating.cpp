double a, b; // limites
const int N = 1000*1000;
double s = 0;
for (int i=0; i<=N; ++i) {
	double x = a + (b - a) * i / N;
	s += f(x) * (i==0 || i==N ? 1 : (i&1)==0 ? 2 : 4);
}
double delta = (b - a) / N;
s *= delta / 3.0;