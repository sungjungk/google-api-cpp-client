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
// Generated from:
//   Version: v3
//   Revision: 20170130
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_H_
#define  GOOGLE_YOUTUBE_API_LIVE_BROADCAST_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/live_broadcast_content_details.h"
#include "google/youtube_api/live_broadcast_snippet.h"
#include "google/youtube_api/live_broadcast_statistics.h"
#include "google/youtube_api/live_broadcast_status.h"
#include "google/youtube_api/live_broadcast_topic_details.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * A liveBroadcast resource represents an event that will be streamed, via live
 * video, on YouTube.
 *
 * @ingroup DataObject
 */
class LiveBroadcast : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveBroadcast* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcast(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveBroadcast(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveBroadcast();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveBroadcast</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveBroadcast");
  }

  /**
   * Determine if the '<code>contentDetails</code>' attribute was set.
   *
   * @return true if the '<code>contentDetails</code>' attribute was set.
   */
  bool has_content_details() const {
    return Storage().isMember("contentDetails");
  }

  /**
   * Clears the '<code>contentDetails</code>' attribute.
   */
  void clear_content_details() {
    MutableStorage()->removeMember("contentDetails");
  }


  /**
   * Get a reference to the value of the '<code>contentDetails</code>'
   * attribute.
   */
  const LiveBroadcastContentDetails get_content_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>contentDetails</code>'
   * property.
   *
   * The contentDetails object contains information about the event's video
   * content, such as whether the content can be shown in an embedded video
   * player or if it will be archived and therefore available for viewing after
   * the event has concluded.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveBroadcastContentDetails mutable_contentDetails();

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * Etag of this resource.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
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
   * The ID that YouTube assigns to uniquely identify the broadcast.
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
   * Identifies what kind of resource this is. Value: the fixed string
   * "youtube#liveBroadcast".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>snippet</code>' attribute was set.
   *
   * @return true if the '<code>snippet</code>' attribute was set.
   */
  bool has_snippet() const {
    return Storage().isMember("snippet");
  }

  /**
   * Clears the '<code>snippet</code>' attribute.
   */
  void clear_snippet() {
    MutableStorage()->removeMember("snippet");
  }


  /**
   * Get a reference to the value of the '<code>snippet</code>' attribute.
   */
  const LiveBroadcastSnippet get_snippet() const;

  /**
   * Gets a reference to a mutable value of the '<code>snippet</code>' property.
   *
   * The snippet object contains basic details about the event, including its
   * title, description, start time, and end time.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveBroadcastSnippet mutable_snippet();

  /**
   * Determine if the '<code>statistics</code>' attribute was set.
   *
   * @return true if the '<code>statistics</code>' attribute was set.
   */
  bool has_statistics() const {
    return Storage().isMember("statistics");
  }

  /**
   * Clears the '<code>statistics</code>' attribute.
   */
  void clear_statistics() {
    MutableStorage()->removeMember("statistics");
  }


  /**
   * Get a reference to the value of the '<code>statistics</code>' attribute.
   */
  const LiveBroadcastStatistics get_statistics() const;

  /**
   * Gets a reference to a mutable value of the '<code>statistics</code>'
   * property.
   *
   * The statistics object contains info about the event's current stats. These
   * include concurrent viewers and total chat count. Statistics can change (in
   * either direction) during the lifetime of an event. Statistics are only
   * returned while the event is live.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveBroadcastStatistics mutable_statistics();

  /**
   * Determine if the '<code>status</code>' attribute was set.
   *
   * @return true if the '<code>status</code>' attribute was set.
   */
  bool has_status() const {
    return Storage().isMember("status");
  }

  /**
   * Clears the '<code>status</code>' attribute.
   */
  void clear_status() {
    MutableStorage()->removeMember("status");
  }


  /**
   * Get a reference to the value of the '<code>status</code>' attribute.
   */
  const LiveBroadcastStatus get_status() const;

  /**
   * Gets a reference to a mutable value of the '<code>status</code>' property.
   *
   * The status object contains information about the event's status.
   *
   * @return The result can be modified to change the attribute value.
   */
  LiveBroadcastStatus mutable_status();

  /**
   * Determine if the '<code>topicDetails</code>' attribute was set.
   *
   * @return true if the '<code>topicDetails</code>' attribute was set.
   */
  bool has_topic_details() const {
    return Storage().isMember("topicDetails");
  }

  /**
   * Clears the '<code>topicDetails</code>' attribute.
   */
  void clear_topic_details() {
    MutableStorage()->removeMember("topicDetails");
  }


  /**
   * Get a reference to the value of the '<code>topicDetails</code>' attribute.
   */
  const LiveBroadcastTopicDetails get_topic_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>topicDetails</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  LiveBroadcastTopicDetails mutable_topicDetails();

 private:
  void operator=(const LiveBroadcast&);
};  // LiveBroadcast
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_BROADCAST_H_
