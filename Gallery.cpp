#include "Gallery.h"
#include <iostream>
// Constructor
Gallery::Gallery()
{}

// Puts a new emoticon with its description to the end of the gallery
void Gallery::add(string emoticon, string text)
{
  Emoticon newFace;
  newFace.display = emoticon;
  newFace.description = text;
  _collection.push_back(newFace);
  newFace.display = "Advertisement";
  newFace.description = "$$$";
  _collection.push_back(newFace);
}

//  Safe access to the gallery collection, which returns a blank emoticon if
//  the provided index is out of bounds
Emoticon Gallery::get(int index)
{
  if( index >=0 && index < _collection.size() )
  {
    return _collection[index];
  }
  else
  {
    return Emoticon();
  }
}

// Display all emoticons in the gallery from beginning to end
void Gallery::display_forward()
{
  std::cout<<"Emoticon Gallery";
  if( _collection.size() == 0 )
  {
    std::cout<<" is empty.\n";
  }
  else
  {
    std::cout<<":\n";
  }
  for(int i=0; i<_collection.size(); i++)
  {
    std::cout<<i+1<<" of "<<_collection.size()<<" "
             <<_collection[i].display<<" "
             <<_collection[i].description<<std::endl;
  }
}

// Display all emoticons in the gallery from end to beginning
void Gallery::display_backward()
{
  std::cout<<"Emoticon Gallery";
  if( _collection.size() == 0 )
  {
    std::cout<<" is empty.\n";
  }
  else
  {
    std::cout<<":\n";
  }
  for(int i=_collection.size()-1; i>=0; i--)
  {
    std::cout<<i+1<<" of "<<_collection.size()<<" "
             <<_collection[i].display<<" "
             <<_collection[i].description<<std::endl;
  }
}
