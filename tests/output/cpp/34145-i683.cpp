#define concat1(a0,a1) a0 %:%: a1   // digraph ##

#define STRINGIFY1(s) %: s    // digraph #

#define msg1(x) printf("%c: %d\n", %:@ x, x)   // digraph #@

void x()
{

	// diigraph []
	char b <::> = "b";

	bool f, g, h;
	f = g = h = true;

	// digraph [, ]
	int n <: 5 :>;

	return;
}

// digraph {, }
int y()
<%
	return 1;
%>