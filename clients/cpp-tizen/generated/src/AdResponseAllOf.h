/*
 * AdResponse_allOf.h
 *
 * Creation fields
 */

#ifndef _AdResponse_allOf_H_
#define _AdResponse_allOf_H_


#include <string>
#include "EntityStatus.h"
#include "TrackingUrls.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Creation fields
 *
 *  \ingroup Models
 *
 */

class AdResponse_allOf : public Object {
public:
	/*! \brief Constructor.
	 */
	AdResponse_allOf();
	AdResponse_allOf(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AdResponse_allOf();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get ID of the ad group that contains the ad.
	 */
	std::string getAdGroupId();

	/*! \brief Set ID of the ad group that contains the ad.
	 */
	void setAdGroupId(std::string  ad_group_id);
	/*! \brief Get Deep link URL for Android devices. Not currently available. Using this field will generate an error.
	 */
	std::string getAndroidDeepLink();

	/*! \brief Set Deep link URL for Android devices. Not currently available. Using this field will generate an error.
	 */
	void setAndroidDeepLink(std::string  android_deep_link);
	/*! \brief Get Comma-separated deep links for the carousel pin on Android.
	 */
	std::list<std::string> getCarouselAndroidDeepLinks();

	/*! \brief Set Comma-separated deep links for the carousel pin on Android.
	 */
	void setCarouselAndroidDeepLinks(std::list <std::string> carousel_android_deep_links);
	/*! \brief Get Comma-separated destination URLs for the carousel pin to promote.
	 */
	std::list<std::string> getCarouselDestinationUrls();

	/*! \brief Set Comma-separated destination URLs for the carousel pin to promote.
	 */
	void setCarouselDestinationUrls(std::list <std::string> carousel_destination_urls);
	/*! \brief Get Comma-separated deep links for the carousel pin on iOS.
	 */
	std::list<std::string> getCarouselIosDeepLinks();

	/*! \brief Set Comma-separated deep links for the carousel pin on iOS.
	 */
	void setCarouselIosDeepLinks(std::list <std::string> carousel_ios_deep_links);
	/*! \brief Get Tracking url for the ad clicks.
	 */
	std::string getClickTrackingUrl();

	/*! \brief Set Tracking url for the ad clicks.
	 */
	void setClickTrackingUrl(std::string  click_tracking_url);
	/*! \brief Get Ad creative type enum
	 */
	std::string getCreativeType();

	/*! \brief Set Ad creative type enum
	 */
	void setCreativeType(std::string  creative_type);
	/*! \brief Get Destination URL.
	 */
	std::string getDestinationUrl();

	/*! \brief Set Destination URL.
	 */
	void setDestinationUrl(std::string  destination_url);
	/*! \brief Get Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
	 */
	std::string getIosDeepLink();

	/*! \brief Set Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
	 */
	void setIosDeepLink(std::string  ios_deep_link);
	/*! \brief Get Is original pin deleted?
	 */
	bool getIsPinDeleted();

	/*! \brief Set Is original pin deleted?
	 */
	void setIsPinDeleted(bool  is_pin_deleted);
	/*! \brief Get Is pin repinnable?
	 */
	bool getIsRemovable();

	/*! \brief Set Is pin repinnable?
	 */
	void setIsRemovable(bool  is_removable);
	/*! \brief Get Name of the ad - 255 chars max.
	 */
	std::string getName();

	/*! \brief Set Name of the ad - 255 chars max.
	 */
	void setName(std::string  name);
	/*! \brief Get Pin ID.
	 */
	std::string getPinId();

	/*! \brief Set Pin ID.
	 */
	void setPinId(std::string  pin_id);
	/*! \brief Get 
	 */
	EntityStatus getStatus();

	/*! \brief Set 
	 */
	void setStatus(EntityStatus  status);
	/*! \brief Get 
	 */
	TrackingUrls getTrackingUrls();

	/*! \brief Set 
	 */
	void setTrackingUrls(TrackingUrls  tracking_urls);
	/*! \brief Get Tracking URL for ad impressions.
	 */
	std::string getViewTrackingUrl();

	/*! \brief Set Tracking URL for ad impressions.
	 */
	void setViewTrackingUrl(std::string  view_tracking_url);

private:
	std::string ad_group_id;
	std::string android_deep_link;
	std::list <std::string>carousel_android_deep_links;
	std::list <std::string>carousel_destination_urls;
	std::list <std::string>carousel_ios_deep_links;
	std::string click_tracking_url;
	std::string creative_type;
	std::string destination_url;
	std::string ios_deep_link;
	bool is_pin_deleted;
	bool is_removable;
	std::string name;
	std::string pin_id;
	EntityStatus status;
	TrackingUrls tracking_urls;
	std::string view_tracking_url;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AdResponse_allOf_H_ */
