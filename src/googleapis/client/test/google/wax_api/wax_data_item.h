// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Wax API (wax/v1)
// Generated from:
//   Version: v1
//   Revision: 20130321
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.3
#ifndef  GOOGLE_WAX_API_WAX_DATA_ITEM_H_
#define  GOOGLE_WAX_API_WAX_DATA_ITEM_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_wax_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class WaxDataItem : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static WaxDataItem* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit WaxDataItem(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit WaxDataItem(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~WaxDataItem();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_wax_api::WaxDataItem</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_wax_api::WaxDataItem");
  }

  /**
   * Determine if the '<code>blobOfData</code>' attribute was set.
   *
   * @return true if the '<code>blobOfData</code>' attribute was set.
   */
  bool has_blob_of_data() const {
    return Storage().isMember("blobOfData");
  }

  /**
   * Clears the '<code>blobOfData</code>' attribute.
   */
  void clear_blob_of_data() {
    MutableStorage()->removeMember("blobOfData");
  }


  /**
   * Get the value of the '<code>blobOfData</code>' attribute.
   */
  const StringPiece get_blob_of_data() const {
    const Json::Value& v = Storage("blobOfData");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>blobOfData</code>' attribute.
   *
   * A blob of data stored in the item.
   *
   * @param[in] value The new value.
   */
  void set_blob_of_data(const StringPiece& value) {
    *MutableStorage("blobOfData") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The item ID.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * The kind of object this is.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const StringPiece get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * The name of the item.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>sizeInBytes</code>' attribute was set.
   *
   * @return true if the '<code>sizeInBytes</code>' attribute was set.
   */
  bool has_size_in_bytes() const {
    return Storage().isMember("sizeInBytes");
  }

  /**
   * Clears the '<code>sizeInBytes</code>' attribute.
   */
  void clear_size_in_bytes() {
    MutableStorage()->removeMember("sizeInBytes");
  }


  /**
   * Get the value of the '<code>sizeInBytes</code>' attribute.
   */
  int32 get_size_in_bytes() const {
    const Json::Value& storage = Storage("sizeInBytes");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>sizeInBytes</code>' attribute.
   *
   * The size (in bytes) of the blob of data.
   *
   * @param[in] value The new value.
   */
  void set_size_in_bytes(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("sizeInBytes"));
  }

 private:
  void operator=(const WaxDataItem&);
};  // WaxDataItem
}  // namespace google_wax_api
#endif  // GOOGLE_WAX_API_WAX_DATA_ITEM_H_
