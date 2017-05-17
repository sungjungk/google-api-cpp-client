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

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Generated from:
//   Version: v2
//   Revision: 20170512
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_DRIVE_API_START_PAGE_TOKEN_H_
#define  GOOGLE_DRIVE_API_START_PAGE_TOKEN_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_drive_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class StartPageToken : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static StartPageToken* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit StartPageToken(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit StartPageToken(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~StartPageToken();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::StartPageToken</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::StartPageToken");
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
   * Identifies what kind of resource this is. Value: the fixed string
   * "drive#startPageToken".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>startPageToken</code>' attribute was set.
   *
   * @return true if the '<code>startPageToken</code>' attribute was set.
   */
  bool has_start_page_token() const {
    return Storage().isMember("startPageToken");
  }

  /**
   * Clears the '<code>startPageToken</code>' attribute.
   */
  void clear_start_page_token() {
    MutableStorage()->removeMember("startPageToken");
  }


  /**
   * Get the value of the '<code>startPageToken</code>' attribute.
   */
  const StringPiece get_start_page_token() const {
    const Json::Value& v = Storage("startPageToken");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>startPageToken</code>' attribute.
   *
   * The starting page token for listing changes.
   *
   * @param[in] value The new value.
   */
  void set_start_page_token(const StringPiece& value) {
    *MutableStorage("startPageToken") = value.data();
  }

 private:
  void operator=(const StartPageToken&);
};  // StartPageToken
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_START_PAGE_TOKEN_H_
