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
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_SETTINGS_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_SETTINGS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Branding properties for the channel view.
 *
 * @ingroup DataObject
 */
class ChannelSettings : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelSettings* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelSettings(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelSettings(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelSettings();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelSettings</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelSettings");
  }

  /**
   * Determine if the '<code>country</code>' attribute was set.
   *
   * @return true if the '<code>country</code>' attribute was set.
   */
  bool has_country() const {
    return Storage().isMember("country");
  }

  /**
   * Clears the '<code>country</code>' attribute.
   */
  void clear_country() {
    MutableStorage()->removeMember("country");
  }


  /**
   * Get the value of the '<code>country</code>' attribute.
   */
  const StringPiece get_country() const {
    const Json::Value& v = Storage("country");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>country</code>' attribute.
   *
   * The country of the channel.
   *
   * @param[in] value The new value.
   */
  void set_country(const StringPiece& value) {
    *MutableStorage("country") = value.data();
  }

  /**
   * Determine if the '<code>defaultLanguage</code>' attribute was set.
   *
   * @return true if the '<code>defaultLanguage</code>' attribute was set.
   */
  bool has_default_language() const {
    return Storage().isMember("defaultLanguage");
  }

  /**
   * Clears the '<code>defaultLanguage</code>' attribute.
   */
  void clear_default_language() {
    MutableStorage()->removeMember("defaultLanguage");
  }


  /**
   * Get the value of the '<code>defaultLanguage</code>' attribute.
   */
  const StringPiece get_default_language() const {
    const Json::Value& v = Storage("defaultLanguage");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>defaultLanguage</code>' attribute.
   * @param[in] value The new value.
   */
  void set_default_language(const StringPiece& value) {
    *MutableStorage("defaultLanguage") = value.data();
  }

  /**
   * Determine if the '<code>defaultTab</code>' attribute was set.
   *
   * @return true if the '<code>defaultTab</code>' attribute was set.
   */
  bool has_default_tab() const {
    return Storage().isMember("defaultTab");
  }

  /**
   * Clears the '<code>defaultTab</code>' attribute.
   */
  void clear_default_tab() {
    MutableStorage()->removeMember("defaultTab");
  }


  /**
   * Get the value of the '<code>defaultTab</code>' attribute.
   */
  const StringPiece get_default_tab() const {
    const Json::Value& v = Storage("defaultTab");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>defaultTab</code>' attribute.
   *
   * Which content tab users should see when viewing the channel.
   *
   * @param[in] value The new value.
   */
  void set_default_tab(const StringPiece& value) {
    *MutableStorage("defaultTab") = value.data();
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * Specifies the channel description.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>featuredChannelsTitle</code>' attribute was set.
   *
   * @return true if the '<code>featuredChannelsTitle</code>' attribute was set.
   */
  bool has_featured_channels_title() const {
    return Storage().isMember("featuredChannelsTitle");
  }

  /**
   * Clears the '<code>featuredChannelsTitle</code>' attribute.
   */
  void clear_featured_channels_title() {
    MutableStorage()->removeMember("featuredChannelsTitle");
  }


  /**
   * Get the value of the '<code>featuredChannelsTitle</code>' attribute.
   */
  const StringPiece get_featured_channels_title() const {
    const Json::Value& v = Storage("featuredChannelsTitle");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>featuredChannelsTitle</code>' attribute.
   *
   * Title for the featured channels tab.
   *
   * @param[in] value The new value.
   */
  void set_featured_channels_title(const StringPiece& value) {
    *MutableStorage("featuredChannelsTitle") = value.data();
  }

  /**
   * Determine if the '<code>featuredChannelsUrls</code>' attribute was set.
   *
   * @return true if the '<code>featuredChannelsUrls</code>' attribute was set.
   */
  bool has_featured_channels_urls() const {
    return Storage().isMember("featuredChannelsUrls");
  }

  /**
   * Clears the '<code>featuredChannelsUrls</code>' attribute.
   */
  void clear_featured_channels_urls() {
    MutableStorage()->removeMember("featuredChannelsUrls");
  }


  /**
   * Get a reference to the value of the '<code>featuredChannelsUrls</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_featured_channels_urls() const {
     const Json::Value& storage = Storage("featuredChannelsUrls");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the
   * '<code>featuredChannelsUrls</code>' property.
   *
   * The list of featured channels.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_featuredChannelsUrls() {
    Json::Value* storage = MutableStorage("featuredChannelsUrls");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>keywords</code>' attribute was set.
   *
   * @return true if the '<code>keywords</code>' attribute was set.
   */
  bool has_keywords() const {
    return Storage().isMember("keywords");
  }

  /**
   * Clears the '<code>keywords</code>' attribute.
   */
  void clear_keywords() {
    MutableStorage()->removeMember("keywords");
  }


  /**
   * Get the value of the '<code>keywords</code>' attribute.
   */
  const StringPiece get_keywords() const {
    const Json::Value& v = Storage("keywords");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>keywords</code>' attribute.
   *
   * Lists keywords associated with the channel, comma-separated.
   *
   * @param[in] value The new value.
   */
  void set_keywords(const StringPiece& value) {
    *MutableStorage("keywords") = value.data();
  }

  /**
   * Determine if the '<code>moderateComments</code>' attribute was set.
   *
   * @return true if the '<code>moderateComments</code>' attribute was set.
   */
  bool has_moderate_comments() const {
    return Storage().isMember("moderateComments");
  }

  /**
   * Clears the '<code>moderateComments</code>' attribute.
   */
  void clear_moderate_comments() {
    MutableStorage()->removeMember("moderateComments");
  }


  /**
   * Get the value of the '<code>moderateComments</code>' attribute.
   */
  bool get_moderate_comments() const {
    const Json::Value& storage = Storage("moderateComments");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>moderateComments</code>' attribute.
   *
   * Whether user-submitted comments left on the channel page need to be
   * approved by the channel owner to be publicly visible.
   *
   * @param[in] value The new value.
   */
  void set_moderate_comments(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("moderateComments"));
  }

  /**
   * Determine if the '<code>profileColor</code>' attribute was set.
   *
   * @return true if the '<code>profileColor</code>' attribute was set.
   */
  bool has_profile_color() const {
    return Storage().isMember("profileColor");
  }

  /**
   * Clears the '<code>profileColor</code>' attribute.
   */
  void clear_profile_color() {
    MutableStorage()->removeMember("profileColor");
  }


  /**
   * Get the value of the '<code>profileColor</code>' attribute.
   */
  const StringPiece get_profile_color() const {
    const Json::Value& v = Storage("profileColor");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>profileColor</code>' attribute.
   *
   * A prominent color that can be rendered on this channel page.
   *
   * @param[in] value The new value.
   */
  void set_profile_color(const StringPiece& value) {
    *MutableStorage("profileColor") = value.data();
  }

  /**
   * Determine if the '<code>showBrowseView</code>' attribute was set.
   *
   * @return true if the '<code>showBrowseView</code>' attribute was set.
   */
  bool has_show_browse_view() const {
    return Storage().isMember("showBrowseView");
  }

  /**
   * Clears the '<code>showBrowseView</code>' attribute.
   */
  void clear_show_browse_view() {
    MutableStorage()->removeMember("showBrowseView");
  }


  /**
   * Get the value of the '<code>showBrowseView</code>' attribute.
   */
  bool get_show_browse_view() const {
    const Json::Value& storage = Storage("showBrowseView");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>showBrowseView</code>' attribute.
   *
   * Whether the tab to browse the videos should be displayed.
   *
   * @param[in] value The new value.
   */
  void set_show_browse_view(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("showBrowseView"));
  }

  /**
   * Determine if the '<code>showRelatedChannels</code>' attribute was set.
   *
   * @return true if the '<code>showRelatedChannels</code>' attribute was set.
   */
  bool has_show_related_channels() const {
    return Storage().isMember("showRelatedChannels");
  }

  /**
   * Clears the '<code>showRelatedChannels</code>' attribute.
   */
  void clear_show_related_channels() {
    MutableStorage()->removeMember("showRelatedChannels");
  }


  /**
   * Get the value of the '<code>showRelatedChannels</code>' attribute.
   */
  bool get_show_related_channels() const {
    const Json::Value& storage = Storage("showRelatedChannels");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>showRelatedChannels</code>' attribute.
   *
   * Whether related channels should be proposed.
   *
   * @param[in] value The new value.
   */
  void set_show_related_channels(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("showRelatedChannels"));
  }

  /**
   * Determine if the '<code>title</code>' attribute was set.
   *
   * @return true if the '<code>title</code>' attribute was set.
   */
  bool has_title() const {
    return Storage().isMember("title");
  }

  /**
   * Clears the '<code>title</code>' attribute.
   */
  void clear_title() {
    MutableStorage()->removeMember("title");
  }


  /**
   * Get the value of the '<code>title</code>' attribute.
   */
  const StringPiece get_title() const {
    const Json::Value& v = Storage("title");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>title</code>' attribute.
   *
   * Specifies the channel title.
   *
   * @param[in] value The new value.
   */
  void set_title(const StringPiece& value) {
    *MutableStorage("title") = value.data();
  }

  /**
   * Determine if the '<code>trackingAnalyticsAccountId</code>' attribute was
   * set.
   *
   * @return true if the '<code>trackingAnalyticsAccountId</code>' attribute was
   * set.
   */
  bool has_tracking_analytics_account_id() const {
    return Storage().isMember("trackingAnalyticsAccountId");
  }

  /**
   * Clears the '<code>trackingAnalyticsAccountId</code>' attribute.
   */
  void clear_tracking_analytics_account_id() {
    MutableStorage()->removeMember("trackingAnalyticsAccountId");
  }


  /**
   * Get the value of the '<code>trackingAnalyticsAccountId</code>' attribute.
   */
  const StringPiece get_tracking_analytics_account_id() const {
    const Json::Value& v = Storage("trackingAnalyticsAccountId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>trackingAnalyticsAccountId</code>' attribute.
   *
   * The ID for a Google Analytics account to track and measure traffic to the
   * channels.
   *
   * @param[in] value The new value.
   */
  void set_tracking_analytics_account_id(const StringPiece& value) {
    *MutableStorage("trackingAnalyticsAccountId") = value.data();
  }

  /**
   * Determine if the '<code>unsubscribedTrailer</code>' attribute was set.
   *
   * @return true if the '<code>unsubscribedTrailer</code>' attribute was set.
   */
  bool has_unsubscribed_trailer() const {
    return Storage().isMember("unsubscribedTrailer");
  }

  /**
   * Clears the '<code>unsubscribedTrailer</code>' attribute.
   */
  void clear_unsubscribed_trailer() {
    MutableStorage()->removeMember("unsubscribedTrailer");
  }


  /**
   * Get the value of the '<code>unsubscribedTrailer</code>' attribute.
   */
  const StringPiece get_unsubscribed_trailer() const {
    const Json::Value& v = Storage("unsubscribedTrailer");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>unsubscribedTrailer</code>' attribute.
   *
   * The trailer of the channel, for users that are not subscribers.
   *
   * @param[in] value The new value.
   */
  void set_unsubscribed_trailer(const StringPiece& value) {
    *MutableStorage("unsubscribedTrailer") = value.data();
  }

 private:
  void operator=(const ChannelSettings&);
};  // ChannelSettings
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_SETTINGS_H_
