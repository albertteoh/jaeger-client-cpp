/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef dependency_TYPES_H
#define dependency_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace jaegertracing { namespace thrift {

class DependencyLink;

class Dependencies;


class DependencyLink {
 public:

  static const char* ascii_fingerprint; // = "99D57D762942D436C0E0A065B166EE5B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0xD5,0x7D,0x76,0x29,0x42,0xD4,0x36,0xC0,0xE0,0xA0,0x65,0xB1,0x66,0xEE,0x5B};

  DependencyLink(const DependencyLink&);
  DependencyLink& operator=(const DependencyLink&);
  DependencyLink() : parent(), child(), callCount(0) {
  }

  virtual ~DependencyLink() throw();
  std::string parent;
  std::string child;
  int64_t callCount;

  void __set_parent(const std::string& val);

  void __set_child(const std::string& val);

  void __set_callCount(const int64_t val);

  bool operator == (const DependencyLink & rhs) const
  {
    if (!(parent == rhs.parent))
      return false;
    if (!(child == rhs.child))
      return false;
    if (!(callCount == rhs.callCount))
      return false;
    return true;
  }
  bool operator != (const DependencyLink &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DependencyLink & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const DependencyLink& obj);
};

void swap(DependencyLink &a, DependencyLink &b);


class Dependencies {
 public:

  static const char* ascii_fingerprint; // = "315F85222FA0D924D55E8B20337B325C";
  static const uint8_t binary_fingerprint[16]; // = {0x31,0x5F,0x85,0x22,0x2F,0xA0,0xD9,0x24,0xD5,0x5E,0x8B,0x20,0x33,0x7B,0x32,0x5C};

  Dependencies(const Dependencies&);
  Dependencies& operator=(const Dependencies&);
  Dependencies() {
  }

  virtual ~Dependencies() throw();
  std::vector<DependencyLink>  links;

  void __set_links(const std::vector<DependencyLink> & val);

  bool operator == (const Dependencies & rhs) const
  {
    if (!(links == rhs.links))
      return false;
    return true;
  }
  bool operator != (const Dependencies &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Dependencies & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  friend std::ostream& operator<<(std::ostream& out, const Dependencies& obj);
};

void swap(Dependencies &a, Dependencies &b);

}} // namespace

#endif
