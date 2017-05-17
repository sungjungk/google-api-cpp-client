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
//   SubscriptionSnippet
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/subscription_snippet.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/resource_id.h"
#include "google/youtube_api/thumbnail_details.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
SubscriptionSnippet* SubscriptionSnippet::New() {
  return new client::JsonCppCapsule<SubscriptionSnippet>;
}

// Standard immutable constructor.
SubscriptionSnippet::SubscriptionSnippet(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
SubscriptionSnippet::SubscriptionSnippet(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
SubscriptionSnippet::~SubscriptionSnippet() {
}

// Properties.

const ResourceId SubscriptionSnippet::get_resource_id() const {
   const Json::Value& storage = Storage("resourceId");
   return client::JsonValueToCppValueHelper<ResourceId >(storage);
}

ResourceId SubscriptionSnippet::mutable_resourceId() {
  Json::Value* storage = MutableStorage("resourceId");
  return client::JsonValueToMutableCppValueHelper<ResourceId >(storage);
}

const ThumbnailDetails SubscriptionSnippet::get_thumbnails() const {
   const Json::Value& storage = Storage("thumbnails");
   return client::JsonValueToCppValueHelper<ThumbnailDetails >(storage);
}

ThumbnailDetails SubscriptionSnippet::mutable_thumbnails() {
  Json::Value* storage = MutableStorage("thumbnails");
  return client::JsonValueToMutableCppValueHelper<ThumbnailDetails >(storage);
}
}  // namespace google_youtube_api
