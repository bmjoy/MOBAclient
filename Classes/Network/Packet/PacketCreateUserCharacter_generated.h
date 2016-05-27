// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PACKETCREATEUSERCHARACTER_PACKETS_H_
#define FLATBUFFERS_GENERATED_PACKETCREATEUSERCHARACTER_PACKETS_H_

#include "flatbuffers/flatbuffers.h"

namespace packets {

struct PacketCreateUserCharacter;

struct PacketCreateUserCharacter FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_CHARACTER_NAME = 6,
    VT_X = 8,
    VT_Y = 10,
    VT_MX = 12,
    VT_MY = 14,
    VT_BRADIUS = 16,
    VT_CLIENT_NAME = 18
  };
  uint32_t id() const { return GetField<uint32_t>(VT_ID, 0); }
  const flatbuffers::String *character_name() const { return GetPointer<const flatbuffers::String *>(VT_CHARACTER_NAME); }
  float x() const { return GetField<float>(VT_X, 0); }
  float y() const { return GetField<float>(VT_Y, 0); }
  float mx() const { return GetField<float>(VT_MX, 0); }
  float my() const { return GetField<float>(VT_MY, 0); }
  float bradius() const { return GetField<float>(VT_BRADIUS, 0); }
  const flatbuffers::String *client_name() const { return GetPointer<const flatbuffers::String *>(VT_CLIENT_NAME); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_CHARACTER_NAME) &&
           verifier.Verify(character_name()) &&
           VerifyField<float>(verifier, VT_X) &&
           VerifyField<float>(verifier, VT_Y) &&
           VerifyField<float>(verifier, VT_MX) &&
           VerifyField<float>(verifier, VT_MY) &&
           VerifyField<float>(verifier, VT_BRADIUS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_CLIENT_NAME) &&
           verifier.Verify(client_name()) &&
           verifier.EndTable();
  }
};

struct PacketCreateUserCharacterBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) { fbb_.AddElement<uint32_t>(PacketCreateUserCharacter::VT_ID, id, 0); }
  void add_character_name(flatbuffers::Offset<flatbuffers::String> character_name) { fbb_.AddOffset(PacketCreateUserCharacter::VT_CHARACTER_NAME, character_name); }
  void add_x(float x) { fbb_.AddElement<float>(PacketCreateUserCharacter::VT_X, x, 0); }
  void add_y(float y) { fbb_.AddElement<float>(PacketCreateUserCharacter::VT_Y, y, 0); }
  void add_mx(float mx) { fbb_.AddElement<float>(PacketCreateUserCharacter::VT_MX, mx, 0); }
  void add_my(float my) { fbb_.AddElement<float>(PacketCreateUserCharacter::VT_MY, my, 0); }
  void add_bradius(float bradius) { fbb_.AddElement<float>(PacketCreateUserCharacter::VT_BRADIUS, bradius, 0); }
  void add_client_name(flatbuffers::Offset<flatbuffers::String> client_name) { fbb_.AddOffset(PacketCreateUserCharacter::VT_CLIENT_NAME, client_name); }
  PacketCreateUserCharacterBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PacketCreateUserCharacterBuilder &operator=(const PacketCreateUserCharacterBuilder &);
  flatbuffers::Offset<PacketCreateUserCharacter> Finish() {
    auto o = flatbuffers::Offset<PacketCreateUserCharacter>(fbb_.EndTable(start_, 8));
    return o;
  }
};

inline flatbuffers::Offset<PacketCreateUserCharacter> CreatePacketCreateUserCharacter(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t id = 0,
   flatbuffers::Offset<flatbuffers::String> character_name = 0,
   float x = 0,
   float y = 0,
   float mx = 0,
   float my = 0,
   float bradius = 0,
   flatbuffers::Offset<flatbuffers::String> client_name = 0) {
  PacketCreateUserCharacterBuilder builder_(_fbb);
  builder_.add_client_name(client_name);
  builder_.add_bradius(bradius);
  builder_.add_my(my);
  builder_.add_mx(mx);
  builder_.add_y(y);
  builder_.add_x(x);
  builder_.add_character_name(character_name);
  builder_.add_id(id);
  return builder_.Finish();
}

inline const packets::PacketCreateUserCharacter *GetPacketCreateUserCharacter(const void *buf) { return flatbuffers::GetRoot<packets::PacketCreateUserCharacter>(buf); }

inline bool VerifyPacketCreateUserCharacterBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<packets::PacketCreateUserCharacter>(); }

inline void FinishPacketCreateUserCharacterBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<packets::PacketCreateUserCharacter> root) { fbb.Finish(root); }

}  // namespace packets

#endif  // FLATBUFFERS_GENERATED_PACKETCREATEUSERCHARACTER_PACKETS_H_
