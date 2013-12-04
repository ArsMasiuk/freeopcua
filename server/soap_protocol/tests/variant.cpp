/// @author Alexander Rykovanov 2013
/// @email rykovanov.as@gmail.com
/// @brief OPC UA Address space part.
/// @license GNU GPL
///
/// Distributed under the GNU GPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "common.h"

//void
TEST(Variant, bool)
{
  OpcUa::Variant var = true;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->Boolean, nullptr);
  ASSERT_EQ(*serialized->Boolean, true);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::BOOLEAN);
  ASSERT_EQ(deserialize.Value, true);
}

//void
TEST(Variant, bool_vector)
{
  std::vector<bool> data{false, true};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfBoolean, nullptr);
  ASSERT_EQ(serialized->ListOfBoolean->Boolean, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::BOOLEAN);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, byte)
{
  uint8_t data = 1;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->Byte, nullptr);
  ASSERT_EQ(*serialized->Byte, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::BYTE);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, byte_vector)
{
  std::vector<uint8_t> data{1, 2};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfByte, nullptr);
  ASSERT_EQ(serialized->ListOfByte->Byte, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::BYTE);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, sbyte)
{
  int8_t data = -1;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->SByte, nullptr);
  ASSERT_EQ(*serialized->SByte, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::SBYTE);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, sbyte_vector)
{
  std::vector<int8_t> data{-1, -2};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfSByte, nullptr);
  ASSERT_EQ(serialized->ListOfSByte->SByte.size(), 2);
  ASSERT_EQ(serialized->ListOfSByte->SByte[0], -1);
  ASSERT_EQ(serialized->ListOfSByte->SByte[1], -2);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::SBYTE);
  ASSERT_EQ(deserialize.Value, data);
}



//void
TEST(Variant, int16)
{
  int16_t data = -1;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->Int16, nullptr);
  ASSERT_EQ(*serialized->Int16, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::INT16);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, int16_vector)
{
  std::vector<int16_t> data{-1, -2};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfInt16, nullptr);
  ASSERT_EQ(serialized->ListOfInt16->Int16.size(), 2);
  ASSERT_EQ(serialized->ListOfInt16->Int16[0], -1);
  ASSERT_EQ(serialized->ListOfInt16->Int16[1], -2);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::INT16);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, uint16)
{
  uint16_t data = 1;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->UInt16, nullptr);
  ASSERT_EQ(*serialized->UInt16, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::UINT16);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, uint16_vector)
{
  std::vector<uint16_t> data{1, 2};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfUInt16, nullptr);
  ASSERT_EQ(serialized->ListOfUInt16->UInt16.size(), 2);
  ASSERT_EQ(serialized->ListOfUInt16->UInt16[0], 1);
  ASSERT_EQ(serialized->ListOfUInt16->UInt16[1], 2);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::UINT16);
  ASSERT_EQ(deserialize.Value, data);
}



//void
TEST(Variant, int32)
{
  int32_t data = -1;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->Int32, nullptr);
  ASSERT_EQ(*serialized->Int32, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::INT32);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, int32_vector)
{
  std::vector<int32_t> data{-1, -2};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfInt32, nullptr);
  ASSERT_EQ(serialized->ListOfInt32->Int32.size(), 2);
  ASSERT_EQ(serialized->ListOfInt32->Int32[0], -1);
  ASSERT_EQ(serialized->ListOfInt32->Int32[1], -2);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::INT32);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, uint32)
{
  uint32_t data = 1;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->UInt32, nullptr);
  ASSERT_EQ(*serialized->UInt32, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::UINT32);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, uint32_vector)
{
  std::vector<uint32_t> data{1, 2};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfUInt32, nullptr);
  ASSERT_EQ(serialized->ListOfUInt32->UInt32.size(), 2);
  ASSERT_EQ(serialized->ListOfUInt32->UInt32[0], 1);
  ASSERT_EQ(serialized->ListOfUInt32->UInt32[1], 2);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::UINT32);
  ASSERT_EQ(deserialize.Value, data);
}




//void
TEST(Variant, int64)
{
  int64_t data = -1;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->Int64, nullptr);
  ASSERT_EQ(*serialized->Int64, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::INT64);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, int64_vector)
{
  std::vector<int64_t> data{-1, -2};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfInt64, nullptr);
  ASSERT_EQ(serialized->ListOfInt64->Int64.size(), 2);
  ASSERT_EQ(serialized->ListOfInt64->Int64[0], -1);
  ASSERT_EQ(serialized->ListOfInt64->Int64[1], -2);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::INT64);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, uint64)
{
  uint64_t data = 1;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->UInt64, nullptr);
  ASSERT_EQ(*serialized->UInt64, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::UINT64);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, uint64_vector)
{
  std::vector<uint64_t> data{1, 2};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfUInt64, nullptr);
  ASSERT_EQ(serialized->ListOfUInt64->UInt64.size(), 2);
  ASSERT_EQ(serialized->ListOfUInt64->UInt64[0], 1);
  ASSERT_EQ(serialized->ListOfUInt64->UInt64[1], 2);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::UINT64);
  ASSERT_EQ(deserialize.Value, data);
}




//void
TEST(Variant, float)
{
  float data = 1.2;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->Float, nullptr);
  ASSERT_EQ(*serialized->Float, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::FLOAT);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, float_vector)
{
  std::vector<float> data{1.2, 2.1};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfFloat, nullptr);
  ASSERT_EQ(serialized->ListOfFloat->Float.size(), 2);
  ASSERT_EQ(serialized->ListOfFloat->Float[0], 1.2f);
  ASSERT_EQ(serialized->ListOfFloat->Float[1], 2.1f);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::FLOAT);
  ASSERT_EQ(deserialize.Value, data);
}





//void
TEST(Variant, double)
{
  double data = 1.2;

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->Double, nullptr);
  ASSERT_EQ(*serialized->Double, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::DOUBLE);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, double_vector)
{
  std::vector<double> data{1.2, 2.1};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfDouble, nullptr);
  ASSERT_EQ(serialized->ListOfDouble->Double.size(), 2);
  ASSERT_EQ(serialized->ListOfDouble->Double[0], 1.2);
  ASSERT_EQ(serialized->ListOfDouble->Double[1], 2.1);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::DOUBLE);
  ASSERT_EQ(deserialize.Value, data);
}





//void
TEST(Variant, string)
{
  std::string data = "hello";

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->String, nullptr);
  ASSERT_EQ(*serialized->String, data);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::STRING);
  ASSERT_EQ(deserialize.Value, data);
}

//void
TEST(Variant, string_vector)
{
  std::vector<std::string> data{"1", "2"};

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfString, nullptr);
  ASSERT_EQ(serialized->ListOfString->String.size(), 2);
  ASSERT_EQ(serialized->ListOfString->String[0], "1");
  ASSERT_EQ(serialized->ListOfString->String[1], "2");

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::STRING);
  ASSERT_EQ(deserialize.Value, data);
}






//void
TEST(Variant, time)
{
  OpcUa::DateTime data = OpcUa::CurrentDateTime();

  OpcUa::Variant var = data;

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->DateTime, nullptr);
  ASSERT_EQ(*serialized->DateTime, OpcUa::ToTimeT(data));

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::DATE_TIME);
  ASSERT_EQ(OpcUa::ToTimeT(deserialize.Value.Time[0]), OpcUa::ToTimeT(data));
}

//void
TEST(Variant, time_vector)
{
  std::vector<OpcUa::DateTime> data{OpcUa::CurrentDateTime(), OpcUa::CurrentDateTime()};

  OpcUa::Variant var = data;
  ASSERT_EQ(var.Type, OpcUa::VariantType::DATE_TIME);

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfDateTime, nullptr);
  ASSERT_EQ(serialized->ListOfDateTime->DateTime.size(), 2);
  ASSERT_EQ(serialized->ListOfDateTime->DateTime[0], OpcUa::ToTimeT(data[0]));
  ASSERT_EQ(serialized->ListOfDateTime->DateTime[1], OpcUa::ToTimeT(data[1]));

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::DATE_TIME);
  ASSERT_EQ(deserialize.Value.Time.size(), 2);
  std::vector<OpcUa::DateTime> deserialized = deserialize.Value.Time;
  ASSERT_EQ(OpcUa::ToTimeT(deserialized[0]), OpcUa::ToTimeT(data[0]));
  ASSERT_EQ(OpcUa::ToTimeT(deserialized[1]), OpcUa::ToTimeT(data[1]));
}



//void
TEST(Variant, guid)
{
  OpcUa::Guid guid;
  guid.Data1 = 1;
  guid.Data2 = 2;
  guid.Data3 = 3;
  memset(guid.Data4, 1, 8);

  OpcUa::Variant var = guid;
  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->Guid, nullptr);
  ASSERT_NE(serialized->Guid->String, nullptr);
  ASSERT_EQ(*serialized->Guid->String, OpcUa::ToString(guid));
  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::GUID);
  ASSERT_EQ(deserialize.Value.Guids.size(), 1);
  ASSERT_EQ(deserialize.Value.Guids[0], guid);
}
//void
TEST(Variant, guid_vector)
{
  OpcUa::Guid guid;
  guid.Data1 = 1;
  guid.Data2 = 2;
  guid.Data3 = 3;
  memset(guid.Data4, 1, 8);

  std::vector<OpcUa::Guid> data{guid, guid};

  OpcUa::Variant var = data;
  ASSERT_EQ(var.Type, OpcUa::VariantType::GUID);

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfGuid, nullptr);
  ASSERT_EQ(serialized->ListOfGuid->Guid.size(), 2);
  ASSERT_NE(serialized->ListOfGuid->Guid[0]->String, nullptr);
  ASSERT_NE(serialized->ListOfGuid->Guid[1]->String, nullptr);

  ASSERT_EQ(*serialized->ListOfGuid->Guid[0]->String, OpcUa::ToString(guid));
  ASSERT_EQ(*serialized->ListOfGuid->Guid[1]->String, OpcUa::ToString(guid));

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::GUID);
  ASSERT_EQ(deserialize.Value.Guids.size(), 2);
  std::vector<OpcUa::Guid> deserialized = deserialize.Value.Guids;
  ASSERT_EQ(deserialized[0], guid);
  ASSERT_EQ(deserialized[1], guid);
}




//void
TEST(Variant, ByteString)
{
  OpcUa::ByteString byteString(std::vector<uint8_t>{1, 2});

  OpcUa::Variant var = byteString;
  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ByteString, nullptr);
  ASSERT_NE(serialized->ByteString->__ptr, nullptr);
  ASSERT_EQ(serialized->ByteString->__size, 2);
  ASSERT_EQ(serialized->ByteString->__ptr[0], byteString.Data[0]);
  ASSERT_EQ(serialized->ByteString->__ptr[1], byteString.Data[1]);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::BYTE_STRING);
  ASSERT_EQ(deserialize.Value.ByteStrings.size(), 1);
  ASSERT_EQ(deserialize.Value.ByteStrings[0], byteString);
}


TEST(Variant, ByteString_vector)
{
  OpcUa::ByteString byteString(std::vector<uint8_t>{1, 2});
  OpcUa::Variant var = std::vector<OpcUa::ByteString>{byteString, byteString};

  soap s;
  ns3__Variant* serialized = OpcUa::Soap::Serialize(&s, var);
  ASSERT_NE(serialized, nullptr);
  ASSERT_NE(serialized->ListOfByteString, nullptr);
  ASSERT_EQ(serialized->ListOfByteString->ByteString.size(), 2);
  ASSERT_EQ(serialized->ListOfByteString->ByteString[0].__size, 2);
  ASSERT_EQ(serialized->ListOfByteString->ByteString[0].__ptr[0], byteString.Data[0]);
  ASSERT_EQ(serialized->ListOfByteString->ByteString[0].__ptr[1], byteString.Data[1]);
  ASSERT_EQ(serialized->ListOfByteString->ByteString[1].__ptr[0], byteString.Data[0]);
  ASSERT_EQ(serialized->ListOfByteString->ByteString[1].__ptr[1], byteString.Data[1]);

  OpcUa::Variant deserialize = OpcUa::Soap::Deserialize(serialized);
  ASSERT_EQ(deserialize.Type, OpcUa::VariantType::BYTE_STRING);
  ASSERT_EQ(deserialize.Value.ByteStrings.size(), 2);
  ASSERT_EQ(deserialize.Value.ByteStrings[0], byteString);
  ASSERT_EQ(deserialize.Value.ByteStrings[1], byteString);
}

