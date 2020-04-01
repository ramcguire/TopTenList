#ifndef GALLERY_H
#define GALLERY_H
#include <vector>
#include <string>
#include "IDirectionable.h"

using std::vector;
using std::string;

struct Emoticon
{
  string display="";
  string description="";
};

class Gallery : public IDirectionable
{
private:
  vector<Emoticon> _collection;

public:
  Gallery();
  void add(string emoticon, string text);
  Emoticon get(int index);
  //Required for IDirectionable interface:
  void display_forward();
  void display_backward();
};

#endif
