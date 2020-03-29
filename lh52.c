int loop_function() {
	int s;
	int n;
	int t;
	int p;
	assume(s<n&&t<p);
	while (s < n) {
		p = p + 5;
		t = t + 3;
		s = s + 1;
	}
	return 0;
}
