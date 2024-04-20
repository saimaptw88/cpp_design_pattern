#include "serializer.hh"


std::string Serializer::decode(const std::string& str) const {
  return "decode: " + str;
}

std::string Serializer::encode(const std::string& str) const {
  return "encode: " + str;
}
