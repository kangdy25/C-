#ifndef SWAP_FUNCTION_TEMPLATES_H_INCLUDED
#define SWAP_FUNCTION_TEMPLATES_H_INCLUDED
#include <utility>
using namespace std;
template <typename ANY>
void swapFT(ANY &a, ANY &b) {
	ANY temp = move(a); 
	a = move(b);
	b = move(temp);
}
#endif
