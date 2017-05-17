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
// Description:
//   Manages files in Drive including uploading, downloading, searching, detecting changes, and updating sharing permissions.
// Classes:
//   Change
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/change.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/file.h"
#include "google/drive_api/team_drive.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;


// Object factory method (static).
Change* Change::New() {
  return new client::JsonCppCapsule<Change>;
}

// Standard immutable constructor.
Change::Change(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Change::Change(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Change::~Change() {
}

// Properties.

const File Change::get_file() const {
   const Json::Value& storage = Storage("file");
   return client::JsonValueToCppValueHelper<File >(storage);
}

File Change::mutable_file() {
  Json::Value* storage = MutableStorage("file");
  return client::JsonValueToMutableCppValueHelper<File >(storage);
}

const TeamDrive Change::get_team_drive() const {
   const Json::Value& storage = Storage("teamDrive");
   return client::JsonValueToCppValueHelper<TeamDrive >(storage);
}

TeamDrive Change::mutable_teamDrive() {
  Json::Value* storage = MutableStorage("teamDrive");
  return client::JsonValueToMutableCppValueHelper<TeamDrive >(storage);
}
}  // namespace google_drive_api
