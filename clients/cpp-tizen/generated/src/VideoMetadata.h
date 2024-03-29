/*
 * VideoMetadata.h
 *
 * 
 */

#ifndef _VideoMetadata_H_
#define _VideoMetadata_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VideoMetadata : public Object {
public:
	/*! \brief Constructor.
	 */
	VideoMetadata();
	VideoMetadata(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VideoMetadata();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getItemType();

	/*! \brief Set 
	 */
	void setItemType(std::string  item_type);
	/*! \brief Get 
	 */
	std::string getCoverImageUrl();

	/*! \brief Set 
	 */
	void setCoverImageUrl(std::string  cover_image_url);
	/*! \brief Get Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
	 */
	std::string getVideoUrl();

	/*! \brief Set Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
	 */
	void setVideoUrl(std::string  video_url);
	/*! \brief Get Duration (in milliseconds)
	 */
	long long getDuration();

	/*! \brief Set Duration (in milliseconds)
	 */
	void setDuration(long long  duration);
	/*! \brief Get Height (in pixels)
	 */
	int getHeight();

	/*! \brief Set Height (in pixels)
	 */
	void setHeight(int  height);
	/*! \brief Get Width (in pixels)
	 */
	int getWidth();

	/*! \brief Set Width (in pixels)
	 */
	void setWidth(int  width);

private:
	std::string item_type;
	std::string cover_image_url;
	std::string video_url;
	long long duration;
	int height;
	int width;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VideoMetadata_H_ */
