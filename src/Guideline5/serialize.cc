#include <iostream>

#include "serialize.hh"


namespace Guideline5 {
Document* serialize(DocumentType from, DocumentType to, Document& document) {
  if (from == DocumentType::pdf) {
    if (to == DocumentType::pdf) {
      std::cout << "UNCHANGED: pdf -> pdf" << std::endl;
      return &document;
    } else if (to == DocumentType::word) {
      std::cout << "CHANGED: pdf -> word" << std::endl;
      return &document;
    } else if (to == DocumentType::xml) {
      std::cout << "CHANGED: pdf -> xml" << std::endl;
      return &document;
    }
  } else if (from == DocumentType::word) {
    if (to == DocumentType::pdf) {
      std::cout << "CHANGED: word -> pdf" << std::endl;
      return &document;
    } else if (to == DocumentType::word) {
      std::cout << "UNCHANGED: word -> word" << std::endl;
      return &document;
    } else if (to == DocumentType::xml) {
      std::cout << "CHANGED: word -> xml" << std::endl;
      return &document;
    }
  } else if (from == DocumentType::xml) {
    if (to == DocumentType::pdf) {
      std::cout << "CHANGED: xml -> pdf" << std::endl;
      return &document;
    } else if (to == DocumentType::word) {
      std::cout << "CHANGED: xml -> word" << std::endl;
      return &document;
    } else if (to == DocumentType::xml) {
      std::cout << "UNCHANGED: xml -> xml" << std::endl;
      return &document;
    }
  }
}
};  // namespace Guideline5
