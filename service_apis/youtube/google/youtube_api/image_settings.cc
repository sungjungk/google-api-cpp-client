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
//   YouTube Data API (youtube/v3)
// Description:
//   Supports core YouTube features, such as uploading videos, creating and managing playlists, searching for content, and much more.
// Classes:
//   ImageSettings
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/image_settings.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/localized_property.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
ImageSettings* ImageSettings::New() {
  return new client::JsonCppCapsule<ImageSettings>;
}

// Standard immutable constructor.
ImageSettings::ImageSettings(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
ImageSettings::ImageSettings(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
ImageSettings::~ImageSettings() {
}

// Properties.

const LocalizedProperty ImageSettings::get_background_image_url() const {
   const Json::Value& storage = Storage("backgroundImageUrl");
   return client::JsonValueToCppValueHelper<LocalizedProperty >(storage);
}

LocalizedProperty ImageSettings::mutable_backgroundImageUrl() {
  Json::Value* storage = MutableStorage("backgroundImageUrl");
  return client::JsonValueToMutableCppValueHelper<LocalizedProperty >(storage);
}

const LocalizedProperty ImageSettings::get_large_branded_banner_image_imap_script() const {
   const Json::Value& storage = Storage("largeBrandedBannerImageImapScript");
   return client::JsonValueToCppValueHelper<LocalizedProperty >(storage);
}

LocalizedProperty ImageSettings::mutable_largeBrandedBannerImageImapScript() {
  Json::Value* storage = MutableStorage("largeBrandedBannerImageImapScript");
  return client::JsonValueToMutableCppValueHelper<LocalizedProperty >(storage);
}

const LocalizedProperty ImageSettings::get_large_branded_banner_image_url() const {
   const Json::Value& storage = Storage("largeBrandedBannerImageUrl");
   return client::JsonValueToCppValueHelper<LocalizedProperty >(storage);
}

LocalizedProperty ImageSettings::mutable_largeBrandedBannerImageUrl() {
  Json::Value* storage = MutableStorage("largeBrandedBannerImageUrl");
  return client::JsonValueToMutableCppValueHelper<LocalizedProperty >(storage);
}

const LocalizedProperty ImageSettings::get_small_branded_banner_image_imap_script() const {
   const Json::Value& storage = Storage("smallBrandedBannerImageImapScript");
   return client::JsonValueToCppValueHelper<LocalizedProperty >(storage);
}

LocalizedProperty ImageSettings::mutable_smallBrandedBannerImageImapScript() {
  Json::Value* storage = MutableStorage("smallBrandedBannerImageImapScript");
  return client::JsonValueToMutableCppValueHelper<LocalizedProperty >(storage);
}

const LocalizedProperty ImageSettings::get_small_branded_banner_image_url() const {
   const Json::Value& storage = Storage("smallBrandedBannerImageUrl");
   return client::JsonValueToCppValueHelper<LocalizedProperty >(storage);
}

LocalizedProperty ImageSettings::mutable_smallBrandedBannerImageUrl() {
  Json::Value* storage = MutableStorage("smallBrandedBannerImageUrl");
  return client::JsonValueToMutableCppValueHelper<LocalizedProperty >(storage);
}
}  // namespace google_youtube_api
