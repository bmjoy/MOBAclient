// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PACKETCHATMESSAGETOSERVER_PACKETS_H_
#define FLATBUFFERS_GENERATED_PACKETCHATMESSAGETOSERVER_PACKETS_H_

#include "flatbuffers/flatbuffers.h"

namespace packets {

struct PacketChatMessageToServer;

struct PacketChatMessageToServer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_CHAT_MESSAGE = 6
  };
  uint32_t id() const { return GetField<uint32_t>(VT_ID, 0); }
  const flatbuffers::String *chat_message() const { return GetPointer<const flatbuffers::String *>(VT_CHAT_MESSAGE); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_ID) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_CHAT_MESSAGE) &&
           verifier.Verify(chat_message()) &&
           verifier.EndTable();
  }
};

struct PacketChatMessageToServerBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(uint32_t id) { fbb_.AddElement<uint32_t>(PacketChatMessageToServer::VT_ID, id, 0); }
  void add_chat_message(flatbuffers::Offset<flatbuffers::String> chat_message) { fbb_.AddOffset(PacketChatMessageToServer::VT_CHAT_MESSAGE, chat_message); }
  PacketChatMessageToServerBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PacketChatMessageToServerBuilder &operator=(const PacketChatMessageToServerBuilder &);
  flatbuffers::Offset<PacketChatMessageToServer> Finish() {
    auto o = flatbuffers::Offset<PacketChatMessageToServer>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PacketChatMessageToServer> CreatePacketChatMessageToServer(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t id = 0,
   flatbuffers::Offset<flatbuffers::String> chat_message = 0) {
  PacketChatMessageToServerBuilder builder_(_fbb);
  builder_.add_chat_message(chat_message);
  builder_.add_id(id);
  return builder_.Finish();
}

inline const packets::PacketChatMessageToServer *GetPacketChatMessageToServer(const void *buf) { return flatbuffers::GetRoot<packets::PacketChatMessageToServer>(buf); }

inline bool VerifyPacketChatMessageToServerBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<packets::PacketChatMessageToServer>(); }

inline void FinishPacketChatMessageToServerBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<packets::PacketChatMessageToServer> root) { fbb.Finish(root); }

}  // namespace packets

#endif  // FLATBUFFERS_GENERATED_PACKETCHATMESSAGETOSERVER_PACKETS_H_
