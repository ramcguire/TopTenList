// Manages a list of top ten hyperlinks
#include "TopTenList.h"

#include <iostream>
#include <string>

#include "Hyperlink.h"

using std::cout;
using std::endl;
using std::string;

TopTenList::TopTenList() { _list.resize(10); }

void TopTenList::set_at(int index, Hyperlink link) {  // if out of range, ignore
  if (index < 1 && index > 10) {
    return;
  }
  _list.at(index - 1) = link;
}

Hyperlink TopTenList::get(int index) { return _list.at(index); }

void TopTenList::display_forward() {
  int index = 1;
  for (auto it = _list.begin(); it != _list.end(); it++) {
    cout << index << ". " << it->text << ": " << it->url << endl;
    index++;
  }
}

void TopTenList::display_backward() {
  int index = 10;
  for (auto it = _list.rbegin(); it != _list.rend(); it++) {
    cout << index << ". " << it->text << ": " << it->url << endl;
    index--;
  }
}
