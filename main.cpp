#include "Win32/Manager.h"

int main() {
	Window window("Hello world", 800, 600);
	TextView lbl(&window, "This is an autosize label");
	window.show();

	Window window1("Another Window");
	window1.setLocation(500, 300);
	window1.show();

	// It does not matter from
	// where we join from.
	window1.join();
}