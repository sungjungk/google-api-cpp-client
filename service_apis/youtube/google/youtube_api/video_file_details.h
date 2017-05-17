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
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_FILE_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_FILE_DETAILS_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/video_file_details_audio_stream.h"
#include "google/youtube_api/video_file_details_video_stream.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Describes original video file properties, including technical details about
 * audio and video streams, but also metadata information like content length,
 * digitization time, or geotagging information.
 *
 * @ingroup DataObject
 */
class VideoFileDetails : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoFileDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoFileDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoFileDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoFileDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoFileDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoFileDetails");
  }

  /**
   * Determine if the '<code>audioStreams</code>' attribute was set.
   *
   * @return true if the '<code>audioStreams</code>' attribute was set.
   */
  bool has_audio_streams() const {
    return Storage().isMember("audioStreams");
  }

  /**
   * Clears the '<code>audioStreams</code>' attribute.
   */
  void clear_audio_streams() {
    MutableStorage()->removeMember("audioStreams");
  }


  /**
   * Get a reference to the value of the '<code>audioStreams</code>' attribute.
   */
  const client::JsonCppArray<VideoFileDetailsAudioStream > get_audio_streams() const;

  /**
   * Gets a reference to a mutable value of the '<code>audioStreams</code>'
   * property.
   *
   * A list of audio streams contained in the uploaded video file. Each item in
   * the list contains detailed metadata about an audio stream.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<VideoFileDetailsAudioStream > mutable_audioStreams();

  /**
   * Determine if the '<code>bitrateBps</code>' attribute was set.
   *
   * @return true if the '<code>bitrateBps</code>' attribute was set.
   */
  bool has_bitrate_bps() const {
    return Storage().isMember("bitrateBps");
  }

  /**
   * Clears the '<code>bitrateBps</code>' attribute.
   */
  void clear_bitrate_bps() {
    MutableStorage()->removeMember("bitrateBps");
  }


  /**
   * Get the value of the '<code>bitrateBps</code>' attribute.
   */
  uint64 get_bitrate_bps() const {
    const Json::Value& storage = Storage("bitrateBps");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>bitrateBps</code>' attribute.
   *
   * The uploaded video file's combined (video and audio) bitrate in bits per
   * second.
   *
   * @param[in] value The new value.
   */
  void set_bitrate_bps(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("bitrateBps"));
  }

  /**
   * Determine if the '<code>container</code>' attribute was set.
   *
   * @return true if the '<code>container</code>' attribute was set.
   */
  bool has_container() const {
    return Storage().isMember("container");
  }

  /**
   * Clears the '<code>container</code>' attribute.
   */
  void clear_container() {
    MutableStorage()->removeMember("container");
  }


  /**
   * Get the value of the '<code>container</code>' attribute.
   */
  const StringPiece get_container() const {
    const Json::Value& v = Storage("container");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>container</code>' attribute.
   *
   * The uploaded video file's container format.
   *
   * @param[in] value The new value.
   */
  void set_container(const StringPiece& value) {
    *MutableStorage("container") = value.data();
  }

  /**
   * Determine if the '<code>creationTime</code>' attribute was set.
   *
   * @return true if the '<code>creationTime</code>' attribute was set.
   */
  bool has_creation_time() const {
    return Storage().isMember("creationTime");
  }

  /**
   * Clears the '<code>creationTime</code>' attribute.
   */
  void clear_creation_time() {
    MutableStorage()->removeMember("creationTime");
  }


  /**
   * Get the value of the '<code>creationTime</code>' attribute.
   */
  const StringPiece get_creation_time() const {
    const Json::Value& v = Storage("creationTime");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>creationTime</code>' attribute.
   *
   * The date and time when the uploaded video file was created. The value is
   * specified in ISO 8601 format. Currently, the following ISO 8601 formats are
   * supported:
   * - Date only: YYYY-MM-DD
   * - Naive time: YYYY-MM-DDTHH:MM:SS
   * - Time with timezone: YYYY-MM-DDTHH:MM:SS+HH:MM.
   *
   * @param[in] value The new value.
   */
  void set_creation_time(const StringPiece& value) {
    *MutableStorage("creationTime") = value.data();
  }

  /**
   * Determine if the '<code>durationMs</code>' attribute was set.
   *
   * @return true if the '<code>durationMs</code>' attribute was set.
   */
  bool has_duration_ms() const {
    return Storage().isMember("durationMs");
  }

  /**
   * Clears the '<code>durationMs</code>' attribute.
   */
  void clear_duration_ms() {
    MutableStorage()->removeMember("durationMs");
  }


  /**
   * Get the value of the '<code>durationMs</code>' attribute.
   */
  uint64 get_duration_ms() const {
    const Json::Value& storage = Storage("durationMs");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>durationMs</code>' attribute.
   *
   * The length of the uploaded video in milliseconds.
   *
   * @param[in] value The new value.
   */
  void set_duration_ms(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("durationMs"));
  }

  /**
   * Determine if the '<code>fileName</code>' attribute was set.
   *
   * @return true if the '<code>fileName</code>' attribute was set.
   */
  bool has_file_name() const {
    return Storage().isMember("fileName");
  }

  /**
   * Clears the '<code>fileName</code>' attribute.
   */
  void clear_file_name() {
    MutableStorage()->removeMember("fileName");
  }


  /**
   * Get the value of the '<code>fileName</code>' attribute.
   */
  const StringPiece get_file_name() const {
    const Json::Value& v = Storage("fileName");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>fileName</code>' attribute.
   *
   * The uploaded file's name. This field is present whether a video file or
   * another type of file was uploaded.
   *
   * @param[in] value The new value.
   */
  void set_file_name(const StringPiece& value) {
    *MutableStorage("fileName") = value.data();
  }

  /**
   * Determine if the '<code>fileSize</code>' attribute was set.
   *
   * @return true if the '<code>fileSize</code>' attribute was set.
   */
  bool has_file_size() const {
    return Storage().isMember("fileSize");
  }

  /**
   * Clears the '<code>fileSize</code>' attribute.
   */
  void clear_file_size() {
    MutableStorage()->removeMember("fileSize");
  }


  /**
   * Get the value of the '<code>fileSize</code>' attribute.
   */
  uint64 get_file_size() const {
    const Json::Value& storage = Storage("fileSize");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>fileSize</code>' attribute.
   *
   * The uploaded file's size in bytes. This field is present whether a video
   * file or another type of file was uploaded.
   *
   * @param[in] value The new value.
   */
  void set_file_size(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("fileSize"));
  }

  /**
   * Determine if the '<code>fileType</code>' attribute was set.
   *
   * @return true if the '<code>fileType</code>' attribute was set.
   */
  bool has_file_type() const {
    return Storage().isMember("fileType");
  }

  /**
   * Clears the '<code>fileType</code>' attribute.
   */
  void clear_file_type() {
    MutableStorage()->removeMember("fileType");
  }


  /**
   * Get the value of the '<code>fileType</code>' attribute.
   */
  const StringPiece get_file_type() const {
    const Json::Value& v = Storage("fileType");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>fileType</code>' attribute.
   *
   * The uploaded file's type as detected by YouTube's video processing engine.
   * Currently, YouTube only processes video files, but this field is present
   * whether a video file or another type of file was uploaded.
   *
   * @param[in] value The new value.
   */
  void set_file_type(const StringPiece& value) {
    *MutableStorage("fileType") = value.data();
  }

  /**
   * Determine if the '<code>videoStreams</code>' attribute was set.
   *
   * @return true if the '<code>videoStreams</code>' attribute was set.
   */
  bool has_video_streams() const {
    return Storage().isMember("videoStreams");
  }

  /**
   * Clears the '<code>videoStreams</code>' attribute.
   */
  void clear_video_streams() {
    MutableStorage()->removeMember("videoStreams");
  }


  /**
   * Get a reference to the value of the '<code>videoStreams</code>' attribute.
   */
  const client::JsonCppArray<VideoFileDetailsVideoStream > get_video_streams() const;

  /**
   * Gets a reference to a mutable value of the '<code>videoStreams</code>'
   * property.
   *
   * A list of video streams contained in the uploaded video file. Each item in
   * the list contains detailed metadata about a video stream.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<VideoFileDetailsVideoStream > mutable_videoStreams();

 private:
  void operator=(const VideoFileDetails&);
};  // VideoFileDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_FILE_DETAILS_H_
